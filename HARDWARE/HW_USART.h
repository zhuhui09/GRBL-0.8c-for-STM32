#ifndef __HW_USART_H
#define __HW_USART_H


/*-------------------------------------------------------------------
1.USART1_IRQHandler()��stm32f10x_it.c���Ƶ����ļ����ݴ棬��ֲ��serial.c��

2.ע����ж����ȼ���������������������
����ֲ����


USART_ITConfig(USART1,USART_IT_TXE, ENABLE);//���������жϲ����̽��뷢���жϣ������CSR0B |=  (1 << UDRIE0)



-------------------------------------------------------------------*/

//###################################��API��###################################
void HW_USART_Init(u32 bound);		//���ڳ�ʼ����bound�������ʣ�


#endif