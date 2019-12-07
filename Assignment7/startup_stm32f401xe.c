#include "stm32f401xe.h"
#include "system_stm32f4xx.h"

extern int CSTACK$$Limit;
extern void __iar_program_start(void);

void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);

int const __vector_table[] @ ".intvec" = {
  (int)&CSTACK$$Limit,
  (int)&__iar_program_start,
  (int)&NMI_Handler,
  (int)&MemManage_Handler,
  (int)&BusFault_Handler,
  (int)&UsageFault_Handler,
  0,
  0,
  0,
  0,
  (int)&SVC_Handler,
  0,
  0,
  (int)&DebugMon_Handler,
  (int)&PendSV_Handler,
  (int)&SysTick_Handler,
  
    0x200, //Stack pointer
    0x9 //PC vector
};

void NMI_Handler(void){
  while(1){}
}
void HardFault_Handler(void){
  while(1){}
}
void MemManage_Handler(void){
    while(1){}
}
void BusFault_Handler(void){
    while(1){}
}
void UsageFault_Handler(void){
    while(1){}
}
void SVC_Handler(void){
   while(1){}
}
void DebugMon_Handler(void){
    while(1){}
}
void PendSV_Handler(void){
  while(1){}
}

void SysTick_Handler(void)
{
   GPIOA->ODR ^= GPIO_ODR_OD5;
}
