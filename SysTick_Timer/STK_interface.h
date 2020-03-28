/**************************************/
/*Author   : Islam A. El-Bahnasawy    */
/*Date     : 8 Mar 2020               */
/*Version  : V.01                     */
/**************************************/

#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H

typedef void (*SysTick_CB_t)(void);

/******************************************************************************************
* function name: SysTick_voidInit
*
* parameters:  Input: void
*              Output: NA
*              In/out: NA
*
* return: ERR_Status: OK, NOK
* Description: This function is used to initialize the SysTick timer peripheral according
* 			   to user configurations.
********************************************************************************************/
extern ERR_Status SysTick_voidInit(void);


/******************************************************************************************
* function name: SysTick_voidStart
*
* parameters:  Input: void
*              Output: NA
*              In/out: NA
*
* return: ERR_Status: OK, NOK
* Description: This function is used to start the SysTick timer to count.
********************************************************************************************/
extern ERR_Status SysTick_voidStart(void);


/******************************************************************************************
* function name: SysTick_voidStop
*
* parameters:  Input: void
*              Output: NA
*              In/out: NA
*
* return: ERR_Status: OK, NOK
* Description: This function is used to stop the SysTick timer from counting.
********************************************************************************************/
extern ERR_Status SysTick_voidStop(void);


/******************************************************************************************
* function name: SysTick_voidSetTime_us
*
* parameters:  Input:
*                time_us
*                     type: u32
*                     Description: this variable carries the time to count in Micro-Seconds.
*
*                SysTick_Input_CLK_MHZ
*                	  type: const u8
*                     Description: this variable carries the SysTick timer input clock in MHZ.
*
*              Output: NA
*              In/out: NA
*
* return: ERR_Status: OK, NOK
* Description: This function is used to set the time (in Micro-Seconds) that the SysTick timer
* 			   shall count before firing an interrupt.
********************************************************************************************/
extern ERR_Status SysTick_voidSetTime_us(u32 time_us, const u8 SysTick_Input_CLK_MHZ);


/******************************************************************************************
* function name: SysTick_voidSetCallBack
*
* parameters:  Input:
*                CallBack_Func
*                     type: SysTick_CB_t [A pointer to function]
*                     Description: this variable carries the address of the callback function
*                     that will be executed in the SysTick Handler.
*              Output: NA
*              In/out: NA
*
* return:  ERR_Status: OK, NOK
* Description: This function is used to set the callback function that will be
* 			   executed in the SysTick Handler.
********************************************************************************************/
extern ERR_Status SysTick_voidSetCallBack(SysTick_CB_t CallBack_Func);

#endif
