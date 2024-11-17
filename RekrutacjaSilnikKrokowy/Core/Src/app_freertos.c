/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : app_freertos.c
  * Description        : Code for freertos applications
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

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};
/* Definitions for EncoderTask */
osThreadId_t EncoderTaskHandle;
const osThreadAttr_t EncoderTask_attributes = {
  .name = "EncoderTask",
  .priority = (osPriority_t) osPriorityHigh,
  .stack_size = 128 * 4
};
/* Definitions for StepperRegTask */
osThreadId_t StepperRegTaskHandle;
const osThreadAttr_t StepperRegTask_attributes = {
  .name = "StepperRegTask",
  .priority = (osPriority_t) osPriorityBelowNormal,
  .stack_size = 128 * 4
};
/* Definitions for FeedbackTask */
osThreadId_t FeedbackTaskHandle;
const osThreadAttr_t FeedbackTask_attributes = {
  .name = "FeedbackTask",
  .priority = (osPriority_t) osPriorityLow,
  .stack_size = 128 * 4
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void StartEncoderTask(void *argument);
void StartStepperRegTask(void *argument);
void StartFeedbackTask(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of EncoderTask */
  EncoderTaskHandle = osThreadNew(StartEncoderTask, NULL, &EncoderTask_attributes);

  /* creation of StepperRegTask */
  StepperRegTaskHandle = osThreadNew(StartStepperRegTask, NULL, &StepperRegTask_attributes);

  /* creation of FeedbackTask */
  FeedbackTaskHandle = osThreadNew(StartFeedbackTask, NULL, &FeedbackTask_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_StartEncoderTask */
/**
* @brief Function implementing the EncoderTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartEncoderTask */
void StartEncoderTask(void *argument)
{
  /* USER CODE BEGIN StartEncoderTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartEncoderTask */
}

/* USER CODE BEGIN Header_StartStepperRegTask */
/**
* @brief Function implementing the StepperRegTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartStepperRegTask */
void StartStepperRegTask(void *argument)
{
  /* USER CODE BEGIN StartStepperRegTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartStepperRegTask */
}

/* USER CODE BEGIN Header_StartFeedbackTask */
/**
* @brief Function implementing the FeedbackTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartFeedbackTask */
void StartFeedbackTask(void *argument)
{
  /* USER CODE BEGIN StartFeedbackTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartFeedbackTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

