// ESP32 DRO Reader for TTL Linear Scales (X and Z axes)
// Outputs position via Serial in mm (with optional scaling and zeroing)
// Assumes quadrature inputs on 4 pins: X_A, X_B, Z_A, Z_B

#define X_A_PIN  16
#define X_B_PIN  17
#define Z_A_PIN  26
#define Z_B_PIN  27

volatile long x_count = 0;
volatile long z_count = 0;

float mm_per_count = 0.005;  // Adjust this value based on scale resolution
long x_zero_offset = 0;
long z_zero_offset = 0;

void IRAM_ATTR handleX_A() {
  bool A = digitalRead(X_A_PIN);
  bool B = digitalRead(X_B_PIN);
  if (A == B) x_count++; else x_count--;
}

void IRAM_ATTR handleX_B() {
  bool A = digitalRead(X_A_PIN);
  bool B = digitalRead(X_B_PIN);
  if (A != B) x_count++; else x_count--;
}

void IRAM_ATTR handleZ_A() {
  bool A = digitalRead(Z_A_PIN);
  bool B = digitalRead(Z_B_PIN);
  if (A == B) z_count++; else z_count--;
}

void IRAM_ATTR handleZ_B() {
  bool A = digitalRead(Z_A_PIN);
  bool B = digitalRead(Z_B_PIN);
  if (A != B) z_count++; else z_count--;
}

void setup() {
  Serial.begin(115200);

  pinMode(X_A_PIN, INPUT_PULLUP);
  pinMode(X_B_PIN, INPUT_PULLUP);
  pinMode(Z_A_PIN, INPUT_PULLUP);
  pinMode(Z_B_PIN, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(X_A_PIN), handleX_A, CHANGE);
  attachInterrupt(digitalPinToInterrupt(X_B_PIN), handleX_B, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Z_A_PIN), handleZ_A, CHANGE);
  attachInterrupt(digitalPinToInterrupt(Z_B_PIN), handleZ_B, CHANGE);

  Serial.println("ESP32 DRO Started");
}

void loop() {
  static unsigned long lastPrint = 0;
  unsigned long now = millis();

  if (now - lastPrint > 100) {  // Update every 100ms
    lastPrint = now;

    long x_pos = x_count - x_zero_offset;
    long z_pos = z_count - z_zero_offset;

    float x_mm = x_pos * mm_per_count;
    float z_mm = z_pos * mm_per_count;

    Serial.print("X: ");
    Serial.print(x_mm, 3);
    Serial.print(" mm\tZ: ");
    Serial.print(z_mm, 3);
    Serial.println(" mm");
  }

  // Optional: listen for zeroing commands via serial
  if (Serial.available()) {
    char cmd = Serial.read();
    if (cmd == 'x') x_zero_offset = x_count;
    if (cmd == 'z') z_zero_offset = z_count;
    if (cmd == 'r') {
      x_zero_offset = x_count = 0;
      z_zero_offset = z_count = 0;
    }
  }
}
