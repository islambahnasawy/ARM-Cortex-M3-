/**************************************/
/*Author   : Islam A. El-Bahnasawy    */
/*Date     : 8 Mar 2020               */
/*Version  : V.01                     */
/**************************************/

#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H

typedef void (*SysTick_CB_t)(void);


extern ERR_Status SysTick_voidInit(void);
extern ERR_Status SysTick_voidStart(void);
extern ERR_Status SysTick_voidStop(void);
extern ERR_Status SysTick_voidSetTime_us(u32 time_us, const u8 SysTick_Input_CLK_MHZ);
extern ERR_Status SysTick_voidSetCallBack(SysTick_CB_t CallBack_Func);

#endif
