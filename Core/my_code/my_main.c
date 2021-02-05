#include "my_main.h"
#include "bmp.h"


void my_main(void)
{
    OLED_Init();
    OLED_Clear();
    while (1)
    {
        OLED_ShowPicture(0,0,128,64,BMP1,1);
		OLED_Refresh();
		my_delayms(500);
    }
}