//dro_config.h

// --- Encoder X Axis ---
#define X_QUADTRATURE_MODE QUAD_MODE_AB //Change to AB or aAbB depending if differntial pairs are wired

#define ENC_X_A 34          //X axis encoder A pin
#define ENC_X_a 36           //X axis encoder a pin (differential pair of A base signal)
#define ENC_X_B 35          //X axis encoder B pin
#define ENC_X_a 39           //X axis encoder a pin (differential pair of A base signal)

#define ENC_X_RES 0.005     //X axis encoder scale resolution in mm/pulse
#define ENC_X_INV false     //X axis invert control

#define ZERO_X_PIN 32       //GPIO for X axis zero switch
#define LIMIT_X_PIN 33      //GPIO for X axis limit switch



// --- Encoder Z Axis ---
#define Z_QUADTRATURE_MODE QUAD_MODE_AB //Change to AB or aAbB depending if differntial pairs are wired

#define ENC_Z_A 26          //Z axis encoder A pin
#define ENC_Z_a 25           //Z axis encoder a pin (differential pair of A base signal)
#define ENC_Z_B 27          //Z axis encoder B pin
#define ENC_Z_b 14           //Z axis encoder b pin (differential pair of B base signal)

#define ENC_Z_Res 0.005     //Z axis encoder scale resolution in mm/pulse
#define ENC_Z_Inv false     //Z axis invert control

#define ZERO_Z_PIN 23       //GPIO for Z axis zero switch
#define LIMIT_Z_PIN 22      //GPIO for Z axis limit switch



// --- Reliability ---
#define ISR_DURATION_MAVG_LENGTH 32     //The history length used to calculate the ISR execution duration moving average




// --- System ---
#define QUAD_MODE_AB 1      //Do not edit this line. Used as macro for non-differential pairing mode of encoder.
#define QUAD_MODE_aAbB 2    //Do not edit this line. Used as macro for differential pairing mode of encoder.
#define AB_STATE_MASK 0x03  //Do not edit this line. Used for error checking functions for encoder signals.