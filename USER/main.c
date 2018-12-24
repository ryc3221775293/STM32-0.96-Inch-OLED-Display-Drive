#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
/************************************************    
 ALIENTEK��ӢSTM32������       
 ���ߣ�Ψ������      
 CSDN���ͣ�https://blog.csdn.net/tichimi3375      
	GND    ��Դ��
	VCC  ��5V��3.3v��Դ
	D0   ��PD6��SCL��
	D1   ��PD7��SDA��
	RES  ��PD4
	DC   ��PD5
	CS   ��PD3  
************************************************/   
 int main(void)
 {	
		u8 t;
		delay_init();	    	 //��ʱ������ʼ��	  
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�����ж����ȼ�����Ϊ��2��2λ��ռ���ȼ���2λ��Ӧ���ȼ�
		OLED_Init();			//��ʼ��OLED  
		OLED_Clear(); 	
		t=' ';
		while(1) 
		{		
			OLED_Clear();
			OLED_ShowCHinese(0,0,0);//��
			OLED_ShowCHinese(18,0,1);//��
			OLED_ShowCHinese(36,0,2);//԰
			OLED_ShowCHinese(54,0,3);//��
			OLED_ShowCHinese(72,0,4);//��
			OLED_ShowCHinese(90,0,5);//��
			OLED_ShowCHinese(108,0,6);//��
			OLED_ShowString(0,3,"1.3' OLED TEST");  
			OLED_ShowString(0,6,"ASCII:");  
			OLED_ShowString(63,6,"CODE:");  
			OLED_ShowChar(48,6,t);//��ʾASCII�ַ�	   
			t++;
			if(t>'~')t=' ';
			OLED_ShowNum(103,6,t,3,16);//��ʾASCII�ַ�����ֵ 			
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			delay_ms(8000);
			OLED_Clear();
			OLED_DrawBMP(0,0,128,8,BMP1);  //ͼƬ��ʾ(ͼƬ��ʾ���ã����ɵ��ֱ�ϴ󣬻�ռ�ý϶�ռ䣬FLASH�ռ�8K��������)
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
