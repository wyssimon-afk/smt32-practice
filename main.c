#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void){
	GPIO_InitTypeDef GPIO_InitStruction;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitStruction.GPIO_Mode= GPIO_Mode_Out_PP;
	GPIO_InitStruction.GPIO_Pin= GPIO_Pin_1;
	GPIO_InitStruction.GPIO_Speed=GPIO_Speed_50MHz ;
	
	GPIO_Init(GPIOB,&GPIO_InitStruction);

  while(1){
	
	GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		
		Delay_ms(500);
		
	GPIO_SetBits(GPIOB,GPIO_Pin_1);		
		
		Delay_ms(500);
	
	
	}
}
