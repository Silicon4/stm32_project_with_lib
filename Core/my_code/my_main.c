#include "my_main.h"
#include "bmp.h"
#include "keypad.h"

void call_back(uint8_t x, uint8_t y)
{
    
}

void my_main(void)
{
    keypad_init(PULL_DOWN, call_back);
    OLED_Init();
    OLED_Clear();
    while (1)
    {
        
        OLED_ShowPicture(0,0,128,64,BMP1,1);
		OLED_Refresh();
		my_delayms(500);
    }
}
