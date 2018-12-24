#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
/************************************************    
 ALIENTEK精英STM32开发板       
 作者：唯恋殊雨      
 CSDN博客：https://blog.csdn.net/tichimi3375      
	GND    电源地
	VCC  接5V或3.3v电源
	D0   接PD6（SCL）
	D1   接PD7（SDA）
	RES  接PD4
	DC   接PD5
	CS   接PD3  
************************************************/   
 int main(void)
 {	
		u8 t;
		delay_init();	    	 //延时函数初始化	  
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
		OLED_Init();			//初始化OLED  
		OLED_Clear(); 	
		t=' ';
		while(1) 
		{		
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//中
			OLED_ShowCHinese(18,0,1);//景
			OLED_ShowCHinese(36,0,2);//园
			OLED_ShowCHinese(54,0,3);//电
			OLED_ShowCHinese(72,0,4);//子
			OLED_ShowCHinese(90,0,5);//科
			OLED_ShowCHinese(108,0,6);//技
			OLED_ShowString(0,3,"1.3' OLED TEST");  
			OLED_ShowString(0,6,"ASCII:");  
			OLED_ShowString(63,6,"CODE:");  
			OLED_ShowChar(48,6,t);//显示ASCII字符	   
			t++;
			if(t>'~')t=' ';
			OLED_ShowNum(103,6,t,3,16);//显示ASCII字符的码值 			
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			OLED_Clear();
			OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示(图片显示慎用，生成的字表较大，会占用较多空间，FLASH空间8K以下慎用)
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			OLED_DrawBMP(0,0,128,8,BMP2);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);

		}	  
	
}
