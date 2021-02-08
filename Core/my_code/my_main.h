#include "all_config.h"
#include "commen_config.h"

#ifdef use_keypad
#include "keypad.h"
#endif

#ifdef use_oled
#include "oled.h"
#endif


void call_back(uint8_t x, uint8_t y);
void my_main(void);
