 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Yasmin Khaled
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                   (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                   (STD_OFF)
      
/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API              (STD_ON)

/* Pre-compile option for presence of Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API                   (STD_ON)
         
/* Number of the configured Port Channels */
#define PORT_CONFIGURED_CHANNLES                (43U)
         
/* Tiva C Port ID's  */
#define PortConf_PORTA_PORT_NUM                 (uint8)0 
#define PortConf_PORTB_PORT_NUM                 (uint8)1 
#define PortConf_PORTC_PORT_NUM                 (uint8)2 
#define PortConf_PORTD_PORT_NUM                 (uint8)3 
#define PortConf_PORTE_PORT_NUM                 (uint8)4 
#define PortConf_PORTF_PORT_NUM                 (uint8)5 
       
/* Tiva C Pin ID's  */
#define PortConf_PIN0_PIN_NUM                   (uint8)0 
#define PortConf_PIN1_PIN_NUM                   (uint8)1 
#define PortConf_PIN2_PIN_NUM                   (uint8)2 
#define PortConf_PIN3_PIN_NUM                   (uint8)3 
#define PortConf_PIN4_PIN_NUM                   (uint8)4 
#define PortConf_PIN5_PIN_NUM                   (uint8)5
#define PortConf_PIN6_PIN_NUM                   (uint8)6 
#define PortConf_PIN7_PIN_NUM                   (uint8)7      


#endif /* PORT_CFG_H */
