/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"
#include "stm32g4xx_ll_adc.h"
#include "stm32g4xx_ll_dma.h"
#include "stm32g4xx_ll_rcc.h"
#include "stm32g4xx_ll_bus.h"
#include "stm32g4xx_ll_crs.h"
#include "stm32g4xx_ll_system.h"
#include "stm32g4xx_ll_exti.h"
#include "stm32g4xx_ll_cortex.h"
#include "stm32g4xx_ll_utils.h"
#include "stm32g4xx_ll_pwr.h"
#include "stm32g4xx_ll_tim.h"
#include "stm32g4xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin LL_GPIO_PIN_3
#define LED1_GPIO_Port GPIOF
#define LED2_Pin LL_GPIO_PIN_4
#define LED2_GPIO_Port GPIOF
#define LED3_Pin LL_GPIO_PIN_5
#define LED3_GPIO_Port GPIOF
#define EXTERNAL_CLOCK_Pin LL_GPIO_PIN_0
#define EXTERNAL_CLOCK_GPIO_Port GPIOF
#define LED4_Pin LL_GPIO_PIN_0
#define LED4_GPIO_Port GPIOC
#define LED5_Pin LL_GPIO_PIN_1
#define LED5_GPIO_Port GPIOC
#define LED6_Pin LL_GPIO_PIN_2
#define LED6_GPIO_Port GPIOC
#define LED7_Pin LL_GPIO_PIN_3
#define LED7_GPIO_Port GPIOC
#define LED0_Pin LL_GPIO_PIN_2
#define LED0_GPIO_Port GPIOF
#define LCD_D4_Pin LL_GPIO_PIN_7
#define LCD_D4_GPIO_Port GPIOE
#define LCD_D5_Pin LL_GPIO_PIN_8
#define LCD_D5_GPIO_Port GPIOE
#define LCD_D6_Pin LL_GPIO_PIN_9
#define LCD_D6_GPIO_Port GPIOE
#define LCD_D7_Pin LL_GPIO_PIN_10
#define LCD_D7_GPIO_Port GPIOE
#define LCD_D8_Pin LL_GPIO_PIN_11
#define LCD_D8_GPIO_Port GPIOE
#define LCD_D9_Pin LL_GPIO_PIN_12
#define LCD_D9_GPIO_Port GPIOE
#define LCD_D10_Pin LL_GPIO_PIN_13
#define LCD_D10_GPIO_Port GPIOE
#define LCD_D11_Pin LL_GPIO_PIN_14
#define LCD_D11_GPIO_Port GPIOE
#define LCD_D12_Pin LL_GPIO_PIN_15
#define LCD_D12_GPIO_Port GPIOE
#define JOYSTICK_X_Pin LL_GPIO_PIN_14
#define JOYSTICK_X_GPIO_Port GPIOB
#define JOYSTICK_Y_Pin LL_GPIO_PIN_15
#define JOYSTICK_Y_GPIO_Port GPIOB
#define LCD_D13_Pin LL_GPIO_PIN_8
#define LCD_D13_GPIO_Port GPIOD
#define LCD_D14_Pin LL_GPIO_PIN_9
#define LCD_D14_GPIO_Port GPIOD
#define LCD_D15_Pin LL_GPIO_PIN_10
#define LCD_D15_GPIO_Port GPIOD
#define BTN_UP_Pin LL_GPIO_PIN_0
#define BTN_UP_GPIO_Port GPIOG
#define BTN_DOWN_Pin LL_GPIO_PIN_1
#define BTN_DOWN_GPIO_Port GPIOG
#define LCD_A15_Pin LL_GPIO_PIN_5
#define LCD_A15_GPIO_Port GPIOG
#define BTN_LEFT_Pin LL_GPIO_PIN_6
#define BTN_LEFT_GPIO_Port GPIOG
#define BTN_RIGHT_Pin LL_GPIO_PIN_8
#define BTN_RIGHT_GPIO_Port GPIOG
#define LCD_D2_Pin LL_GPIO_PIN_0
#define LCD_D2_GPIO_Port GPIOD
#define LCD_D3_Pin LL_GPIO_PIN_1
#define LCD_D3_GPIO_Port GPIOD
#define LCD_RESET_Pin LL_GPIO_PIN_3
#define LCD_RESET_GPIO_Port GPIOD
#define LCD_NOE_Pin LL_GPIO_PIN_4
#define LCD_NOE_GPIO_Port GPIOD
#define LCD_NWE_Pin LL_GPIO_PIN_5
#define LCD_NWE_GPIO_Port GPIOD
#define LCD_NE1_Pin LL_GPIO_PIN_7
#define LCD_NE1_GPIO_Port GPIOD
#define BACKLIGHT_Pin LL_GPIO_PIN_6
#define BACKLIGHT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
