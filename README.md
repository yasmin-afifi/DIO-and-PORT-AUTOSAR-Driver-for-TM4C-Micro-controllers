# DIO-and-PORT-AUTOSAR-Driver-for-TM4C-Micro-controllers
Full layered architecture model which was an implementation of the DIO and Port AUTOSAR Drivers for the TM4C Micro-controllers
Toggle Led output using Button as an input 
Requirements:
1. Button is considered pressed if it reads high for 60 ms
2. Button is considered released if it reads low for 60 ms
3. Led output needs to be refreshed every 40 ms


***************************
    Application 
********************************
           OS                  *
***************************    * 
           Det            *    *
************************* *    *
    Led         Button    *    *
************************* *    *
  Dio     Gpt     Port    *    *
************************* *    *
