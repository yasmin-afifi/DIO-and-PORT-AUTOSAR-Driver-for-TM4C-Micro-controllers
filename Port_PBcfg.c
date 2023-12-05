 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = {
  
  
      PortConf_PORTA_PORT_NUM, PortConf_PIN0_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,  
      PortConf_PORTA_PORT_NUM, PortConf_PIN1_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTA_PORT_NUM, PortConf_PIN2_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTA_PORT_NUM, PortConf_PIN3_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTA_PORT_NUM, PortConf_PIN4_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTA_PORT_NUM, PortConf_PIN5_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTA_PORT_NUM, PortConf_PIN6_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTA_PORT_NUM, PortConf_PIN7_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
        
      PortConf_PORTB_PORT_NUM, PortConf_PIN0_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,  
      PortConf_PORTB_PORT_NUM, PortConf_PIN1_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTB_PORT_NUM, PortConf_PIN2_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTB_PORT_NUM, PortConf_PIN3_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTB_PORT_NUM, PortConf_PIN4_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTB_PORT_NUM, PortConf_PIN5_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTB_PORT_NUM, PortConf_PIN6_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTB_PORT_NUM, PortConf_PIN7_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      
      PortConf_PORTC_PORT_NUM, PortConf_PIN0_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,  
      PortConf_PORTC_PORT_NUM, PortConf_PIN1_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTC_PORT_NUM, PortConf_PIN2_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTC_PORT_NUM, PortConf_PIN3_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTC_PORT_NUM, PortConf_PIN4_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTC_PORT_NUM, PortConf_PIN5_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTC_PORT_NUM, PortConf_PIN6_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTC_PORT_NUM, PortConf_PIN7_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      
      PortConf_PORTD_PORT_NUM, PortConf_PIN0_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,  
      PortConf_PORTD_PORT_NUM, PortConf_PIN1_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTD_PORT_NUM, PortConf_PIN2_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTD_PORT_NUM, PortConf_PIN3_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTD_PORT_NUM, PortConf_PIN4_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTD_PORT_NUM, PortConf_PIN5_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTD_PORT_NUM, PortConf_PIN6_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTD_PORT_NUM, PortConf_PIN7_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      
      PortConf_PORTE_PORT_NUM, PortConf_PIN0_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,  
      PortConf_PORTE_PORT_NUM, PortConf_PIN1_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTE_PORT_NUM, PortConf_PIN2_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTE_PORT_NUM, PortConf_PIN3_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTE_PORT_NUM, PortConf_PIN4_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTE_PORT_NUM, PortConf_PIN5_PIN_NUM, PORT_PIN_IN, OFF, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      
      PortConf_PORTF_PORT_NUM, PortConf_PIN0_PIN_NUM, PORT_PIN_IN,  OFF,    STD_LOW, DIO, STD_HIGH, STD_HIGH,  
      PortConf_PORTF_PORT_NUM, PortConf_PIN1_PIN_NUM, PORT_PIN_OUT, OFF,    STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTF_PORT_NUM, PortConf_PIN2_PIN_NUM, PORT_PIN_IN,  OFF,    STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTF_PORT_NUM, PortConf_PIN3_PIN_NUM, PORT_PIN_IN,  OFF,    STD_LOW, DIO, STD_HIGH, STD_HIGH,
      PortConf_PORTF_PORT_NUM, PortConf_PIN4_PIN_NUM, PORT_PIN_IN, PULL_UP, STD_LOW, DIO, STD_HIGH, STD_HIGH,
      
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
				         };