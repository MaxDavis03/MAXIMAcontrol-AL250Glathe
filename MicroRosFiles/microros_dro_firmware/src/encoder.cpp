#include "VEVORencoder.h"

static int32_t encoder_count = 0;

void encoder_init()
{
    // Init GPIOs and interrupts for quadrature encoder
}

int32_t get_encoder_position()
{
    return encoder_count;
}
