/*
 * SCH_Watchdog.c
 *
 *  Created on: Nov 19, 2022
 *      Author: admin
 */

//IWDG_HandleTypeDef hiwdg;
//static uint32_t counter_for_watchdog = 0;
//
//void MX_IWDG_Init(void){
//  hiwdg.Instance = IWDG;
//  hiwdg.Init.Prescaler = IWDG_PRESCALER_32;
//  hiwdg.Init.Reload = 4095;
//  if (HAL_IWDG_Init(&hiwdg) != HAL_OK) {
//    Error_Handler();
//  }
//}
//void Watchdog_Refresh(void){
//	HAL_IWDG_Refresh(&hiwdg);
//}
//unsigned char Is_Watchdog_Reset(void){
//	if(counter_for_watchdog > 3){
//		return 1;
//	}
//	return 0;
//}
//void Watchdog_Counting(void){
//	counter_for_watchdog++;
//}
//
//void Reset_Watchdog_Counting(void){
//	counter_for_watchdog = 0;
//}

