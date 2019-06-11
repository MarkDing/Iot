#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ADC0]
// [ADC0]$

// $[ANTDIV]
// [ANTDIV]$

// $[BATTERYMON]
// [BATTERYMON]$

// $[BTL_BUTTON]
// [BTL_BUTTON]$

// $[BULBPWM]
// [BULBPWM]$

// $[BULBPWM_COLOR]
// [BULBPWM_COLOR]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT                    (1)

#define BSP_BUTTON0_PIN                       (6U)
#define BSP_BUTTON0_PORT                      (gpioPortF)

#define BSP_BUTTON1_PIN                       (7U)
#define BSP_BUTTON1_PORT                      (gpioPortF)

#define BSP_BUTTON_COUNT                      (2U)
#define BSP_BUTTON_INIT                       { { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN }, { BSP_BUTTON1_PORT, BSP_BUTTON1_PIN } }
#define BSP_BUTTON_GPIO_DOUT                  (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE                  (HAL_GPIO_MODE_INPUT)
#define HAL_BUTTON_ENABLE                     { 0, 1 }
#define HAL_BUTTON_COUNT                      (2U)
// [BUTTON]$

// $[CMU]
#define HAL_CLK_HFCLK_SOURCE                  (HAL_CLK_HFCLK_SOURCE_HFXO)
#define HAL_CLK_LFECLK_SOURCE                 (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define HAL_CLK_LFBCLK_SOURCE                 (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_LFXO_PRESENT                  (1)
#define BSP_CLK_HFXO_PRESENT                  (1)
#define BSP_CLK_LFXO_INIT                      CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_CTUNE                    (32U)
#define BSP_CLK_LFXO_FREQ                     (32768U)
#define HAL_CLK_LFACLK_SOURCE                 (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_HFXO_FREQ                     (38400000UL)
#define BSP_CLK_HFXO_CTUNE                    (327)
#define BSP_CLK_HFXO_INIT                      CMU_HFXOINIT_DEFAULT
#define HAL_CLK_HFXO_AUTOSTART                (HAL_CLK_HFXO_AUTOSTART_NONE)
// [CMU]$

// $[COEX]
// [COEX]$

// $[CS5463]
// [CS5463]$

// $[CSEN]
// [CSEN]$

// $[DCDC]
#define BSP_DCDC_PRESENT                      (1)

#define HAL_DCDC_BYPASS                       (0)
#define BSP_DCDC_INIT                          EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[FEM]
// [FEM]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2C1]
// [I2C1]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IDAC0]
// [IDAC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
#define BSP_LED_PRESENT                       (1)

#define BSP_LED0_PIN                          (4U)
#define BSP_LED0_PORT                         (gpioPortF)

#define BSP_LED1_PIN                          (5U)
#define BSP_LED1_PORT                         (gpioPortF)

#define HAL_LED_ENABLE                        { 0, 1 }
#define BSP_LED_POLARITY                      (1)
#define HAL_LED_COUNT                         (2U)
#define BSP_LED_COUNT                         (2U)
#define BSP_LED_INIT                          { { BSP_LED0_PORT, BSP_LED0_PIN }, { BSP_LED1_PORT, BSP_LED1_PIN } }
// [LED]$

// $[LESENSE]
// [LESENSE]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
// [LEUART0]$

// $[LFXO]
// [LFXO]$

// $[MODEM]
// [MODEM]$

// $[PA]
#define HAL_PA_ENABLE                         (1)

#define HAL_PA_RAMP                           (10UL)
#define HAL_PA_2P4_LOWPOWER                   (0)
#define HAL_PA_POWER                          (252U)
#define BSP_PA_VOLTAGE                        (3300U)
#define HAL_PA_CURVE_HEADER                    "pa_curves_efr32.h"
// [PA]$

// $[PCNT0]
// [PCNT0]$

// $[PCNT1]
// [PCNT1]$

// $[PCNT2]
// [PCNT2]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
// [PRS]$

// $[PTI]
#define PORTIO_PTI_DFRAME_PIN                 (13U)
#define PORTIO_PTI_DFRAME_PORT                (gpioPortB)
#define PORTIO_PTI_DFRAME_LOC                 (6U)

#define PORTIO_PTI_DOUT_PIN                   (12U)
#define PORTIO_PTI_DOUT_PORT                  (gpioPortB)
#define PORTIO_PTI_DOUT_LOC                   (6U)

#define HAL_PTI_ENABLE                        (1)

#define BSP_PTI_DFRAME_PIN                    (13U)
#define BSP_PTI_DFRAME_PORT                   (gpioPortB)
#define BSP_PTI_DFRAME_LOC                    (6U)

#define BSP_PTI_DOUT_PIN                      (12U)
#define BSP_PTI_DOUT_PORT                     (gpioPortB)
#define BSP_PTI_DOUT_LOC                      (6U)

#define HAL_PTI_MODE                          (HAL_PTI_MODE_UART)
#define HAL_PTI_BAUD_RATE                     (1600000UL)
// [PTI]$

// $[PYD1698]
// [PYD1698]$

// $[SERIAL]
#define HAL_SERIAL_USART0_ENABLE              (0)
#define BSP_SERIAL_APP_PORT                   (HAL_SERIAL_PORT_USART0)
#define HAL_SERIAL_LEUART0_ENABLE             (0)
#define HAL_SERIAL_USART1_ENABLE              (0)
#define HAL_SERIAL_USART2_ENABLE              (0)
#define HAL_SERIAL_USART3_ENABLE              (1)
#define HAL_SERIAL_RXWAKE_ENABLE              (0)
#define HAL_SERIAL_IDLE_WAKE_ENABLE           (1)
#define BSP_SERIAL_APP_CTS_PIN                (2U)
#define BSP_SERIAL_APP_CTS_PORT               (gpioPortA)
#define BSP_SERIAL_APP_CTS_LOC                (30U)

#define BSP_SERIAL_APP_RX_PIN                 (1U)
#define BSP_SERIAL_APP_RX_PORT                (gpioPortA)
#define BSP_SERIAL_APP_RX_LOC                 (0U)

#define BSP_SERIAL_APP_TX_PIN                 (0U)
#define BSP_SERIAL_APP_TX_PORT                (gpioPortA)
#define BSP_SERIAL_APP_TX_LOC                 (0U)

#define BSP_SERIAL_APP_RTS_PIN                (3U)
#define BSP_SERIAL_APP_RTS_PORT               (gpioPortA)
#define BSP_SERIAL_APP_RTS_LOC                (30U)

#define HAL_SERIAL_APP_RX_QUEUE_SIZE          (128UL)
#define HAL_SERIAL_APP_BAUD_RATE              (115200UL)
#define HAL_SERIAL_APP_RXSTOP                 (16UL)
#define HAL_SERIAL_APP_RXSTART                (16UL)
#define HAL_SERIAL_APP_TX_QUEUE_SIZE          (128UL)
#define HAL_SERIAL_APP_FLOW_CONTROL           (HAL_USART_FLOW_CONTROL_HWUART)
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CTS_PIN                 (2U)
#define PORTIO_USART0_CTS_PORT                (gpioPortA)
#define PORTIO_USART0_CTS_LOC                 (30U)

#define PORTIO_USART0_RTS_PIN                 (3U)
#define PORTIO_USART0_RTS_PORT                (gpioPortA)
#define PORTIO_USART0_RTS_LOC                 (30U)

#define PORTIO_USART0_RX_PIN                  (1U)
#define PORTIO_USART0_RX_PORT                 (gpioPortA)
#define PORTIO_USART0_RX_LOC                  (0U)

#define PORTIO_USART0_TX_PIN                  (0U)
#define PORTIO_USART0_TX_PORT                 (gpioPortA)
#define PORTIO_USART0_TX_LOC                  (0U)

#define HAL_USART0_ENABLE                     (1)

#define BSP_USART0_CTS_PIN                    (2U)
#define BSP_USART0_CTS_PORT                   (gpioPortA)
#define BSP_USART0_CTS_LOC                    (30U)

#define BSP_USART0_RX_PIN                     (1U)
#define BSP_USART0_RX_PORT                    (gpioPortA)
#define BSP_USART0_RX_LOC                     (0U)

#define BSP_USART0_TX_PIN                     (0U)
#define BSP_USART0_TX_PORT                    (gpioPortA)
#define BSP_USART0_TX_LOC                     (0U)

#define BSP_USART0_RTS_PIN                    (3U)
#define BSP_USART0_RTS_PORT                   (gpioPortA)
#define BSP_USART0_RTS_LOC                    (30U)

#define HAL_USART0_RX_QUEUE_SIZE              (128UL)
#define HAL_USART0_BAUD_RATE                  (115200UL)
#define HAL_USART0_RXSTOP                     (16UL)
#define HAL_USART0_RXSTART                    (16UL)
#define HAL_USART0_TX_QUEUE_SIZE              (128UL)
#define HAL_USART0_FLOW_CONTROL               (HAL_USART_FLOW_CONTROL_HWUART)
// [USART0]$

// $[USART1]
// [USART1]$

// $[USART2]
// [USART2]$

// $[USART3]
#define PORTIO_USART3_CTS_PIN                 (8U)
#define PORTIO_USART3_CTS_PORT                (gpioPortD)
#define PORTIO_USART3_CTS_LOC                 (28U)

#define PORTIO_USART3_RTS_PIN                 (9U)
#define PORTIO_USART3_RTS_PORT                (gpioPortD)
#define PORTIO_USART3_RTS_LOC                 (28U)

#define PORTIO_USART3_RX_PIN                  (7U)
#define PORTIO_USART3_RX_PORT                 (gpioPortB)
#define PORTIO_USART3_RX_LOC                  (10U)

#define PORTIO_USART3_TX_PIN                  (6U)
#define PORTIO_USART3_TX_PORT                 (gpioPortB)
#define PORTIO_USART3_TX_LOC                  (10U)

#define HAL_USART3_ENABLE                     (1)

#define BSP_USART3_CTS_PIN                    (8U)
#define BSP_USART3_CTS_PORT                   (gpioPortD)
#define BSP_USART3_CTS_LOC                    (28U)

#define BSP_USART3_RX_PIN                     (7U)
#define BSP_USART3_RX_PORT                    (gpioPortB)
#define BSP_USART3_RX_LOC                     (10U)

#define BSP_USART3_TX_PIN                     (6U)
#define BSP_USART3_TX_PORT                    (gpioPortB)
#define BSP_USART3_TX_LOC                     (10U)

#define BSP_USART3_RTS_PIN                    (9U)
#define BSP_USART3_RTS_PORT                   (gpioPortD)
#define BSP_USART3_RTS_LOC                    (28U)

#define HAL_USART3_RX_QUEUE_SIZE              (512UL)
#define HAL_USART3_BAUD_RATE                  (115200UL)
#define HAL_USART3_RXSTOP                     (32UL)
#define HAL_USART3_RXSTART                    (32UL)
#define HAL_USART3_TX_QUEUE_SIZE              (512UL)
#define HAL_USART3_FLOW_CONTROL               (HAL_USART_FLOW_CONTROL_HWUART)
// [USART3]$

// $[VCOM]
#define HAL_VCOM_ENABLE                       (1)

#define BSP_VCOM_ENABLE_PIN                   (5U)
#define BSP_VCOM_ENABLE_PORT                  (gpioPortA)

// [VCOM]$

// $[VDAC0]
// [VDAC0]$

// $[VUART]
// [VUART]$

// $[WDOG]
#define HAL_WDOG_ENABLE                       (1)

// [WDOG]$

// $[WTIMER0]
// [WTIMER0]$

// $[WTIMER1]
// [WTIMER1]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif

#endif /* HAL_CONFIG_H */

