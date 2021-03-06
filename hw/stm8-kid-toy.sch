EESchema Schematic File Version 4
LIBS:stm8-kid-toy-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	2125 1400 2500 1400
Wire Wire Line
	2500 1400 2500 1500
Wire Wire Line
	2125 1400 2125 1500
Wire Wire Line
	2850 1400 2850 1500
Connection ~ 2500 1400
Text GLabel 1750 1400 0    50   Input ~ 0
COM1
Text GLabel 1575 2550 0    50   Input ~ 0
LED2
Text GLabel 1575 2800 0    50   Input ~ 0
LED3
Wire Wire Line
	2125 2325 2125 1800
Wire Wire Line
	2500 1800 2500 2550
Wire Wire Line
	2850 2800 2850 1800
Wire Wire Line
	4125 1400 4125 1500
Wire Wire Line
	4475 1400 4475 1500
Wire Wire Line
	4475 1400 4825 1400
Wire Wire Line
	4825 1400 4825 1500
Connection ~ 4475 1400
$Comp
L Device:LED D1
U 1 1 5D99BF05
P 2125 1650
F 0 "D1" V 2164 1533 50  0000 R CNN
F 1 "LED" V 2073 1533 50  0000 R CNN
F 2 "" H 2125 1650 50  0001 C CNN
F 3 "~" H 2125 1650 50  0001 C CNN
	1    2125 1650
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D2
U 1 1 5D99C497
P 2500 1650
F 0 "D2" V 2539 1533 50  0000 R CNN
F 1 "LED" V 2448 1533 50  0000 R CNN
F 2 "" H 2500 1650 50  0001 C CNN
F 3 "~" H 2500 1650 50  0001 C CNN
	1    2500 1650
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D3
U 1 1 5D99C795
P 2850 1650
F 0 "D3" V 2889 1533 50  0000 R CNN
F 1 "LED" V 2798 1533 50  0000 R CNN
F 2 "" H 2850 1650 50  0001 C CNN
F 3 "~" H 2850 1650 50  0001 C CNN
	1    2850 1650
	0    -1   -1   0   
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 5D99E0C8
P 4125 1700
F 0 "SW1" V 4079 1848 50  0000 L CNN
F 1 "SW_Push" V 4170 1848 50  0001 L CNN
F 2 "" H 4125 1900 50  0001 C CNN
F 3 "~" H 4125 1900 50  0001 C CNN
	1    4125 1700
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW2
U 1 1 5D99E652
P 4475 1700
F 0 "SW2" V 4429 1848 50  0000 L CNN
F 1 "SW_Push" V 4520 1848 50  0001 L CNN
F 2 "" H 4475 1900 50  0001 C CNN
F 3 "~" H 4475 1900 50  0001 C CNN
	1    4475 1700
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW3
U 1 1 5D99ED0D
P 4825 1700
F 0 "SW3" V 4779 1848 50  0000 L CNN
F 1 "SW_Push" V 4870 1848 50  0001 L CNN
F 2 "" H 4825 1900 50  0001 C CNN
F 3 "~" H 4825 1900 50  0001 C CNN
	1    4825 1700
	0    1    1    0   
$EndComp
$Comp
L MCU_ST_STM8:STM8S003F3P U1
U 1 1 5D99B248
P 3600 5450
F 0 "U1" H 3600 6631 50  0000 C CNN
F 1 "STM8S003F3P" H 3600 6540 50  0000 C CNN
F 2 "Package_SO:TSSOP-20_4.4x6.5mm_P0.65mm" H 3650 6550 50  0001 L CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00024550.pdf" H 3550 5050 50  0001 C CNN
	1    3600 5450
	1    0    0    -1  
$EndComp
Text GLabel 2750 4750 0    50   Input ~ 0
BTN1
Text GLabel 2750 4850 0    50   Input ~ 0
BTN2
Text GLabel 2750 4950 0    50   Input ~ 0
BTN3
Wire Wire Line
	2750 4750 3000 4750
Wire Wire Line
	2750 4850 3000 4850
Wire Wire Line
	2750 4950 3000 4950
Text GLabel 2750 5150 0    50   Input ~ 0
I2C_SCL
Text GLabel 2750 5250 0    50   Input ~ 0
I2C_SDA
Wire Wire Line
	2750 5150 3000 5150
Wire Wire Line
	2750 5250 3000 5250
Text GLabel 2750 5450 0    50   Input ~ 0
TIM1_CH3
Text GLabel 2750 5550 0    50   Input ~ 0
ADC_IN2
Text GLabel 2750 5650 0    50   Input ~ 0
LED1
Text GLabel 2750 5750 0    50   Input ~ 0
LED2
Text GLabel 2750 5850 0    50   Input ~ 0
LED3
Text GLabel 2750 6050 0    50   Input ~ 0
NRST
Wire Wire Line
	2750 5450 3000 5450
Wire Wire Line
	2750 5550 3000 5550
Wire Wire Line
	2750 5650 3000 5650
Wire Wire Line
	2750 5750 3000 5750
Wire Wire Line
	2750 5850 3000 5850
Wire Wire Line
	2750 6050 3000 6050
Text GLabel 2750 6150 0    50   Input ~ 0
VCAP
Wire Wire Line
	2750 6150 3000 6150
Text GLabel 3500 4450 0    50   Input ~ 0
VCC
Wire Wire Line
	3500 4450 3600 4450
Text GLabel 3425 6450 0    50   Input ~ 0
GND
Wire Wire Line
	3425 6450 3600 6450
Text GLabel 4400 5150 2    50   Input ~ 0
SYS_SWIM
Text GLabel 4400 5250 2    50   Input ~ 0
COM1
Text GLabel 4400 5350 2    50   Input ~ 0
COM2
Text GLabel 4400 5450 2    50   Input ~ 0
COM3
Text GLabel 4400 5550 2    50   Input ~ 0
UART1_TX
Text GLabel 4400 5650 2    50   Input ~ 0
UART1_RX
Wire Wire Line
	4200 5150 4400 5150
Wire Wire Line
	4200 5250 4400 5250
Wire Wire Line
	4400 5350 4200 5350
Wire Wire Line
	4200 5450 4400 5450
Wire Wire Line
	4400 5550 4200 5550
Wire Wire Line
	4200 5650 4400 5650
Wire Wire Line
	1750 1400 2125 1400
Connection ~ 2125 1400
Text GLabel 1575 2325 0    50   Input ~ 0
LED1
Text GLabel 3325 2000 0    50   Input ~ 0
BTN1
Text GLabel 3325 2175 0    50   Input ~ 0
BTN2
Text GLabel 3325 2350 0    50   Input ~ 0
BTN3
Wire Wire Line
	3325 2000 3500 2000
Wire Wire Line
	3325 2175 3500 2175
Wire Wire Line
	3325 2350 3500 2350
Connection ~ 4125 1400
$Comp
L Device:R R?
U 1 1 5DA674E2
P 1850 2325
F 0 "R?" H 1920 2371 50  0000 L CNN
F 1 "R" H 1920 2280 50  0000 L CNN
F 2 "" V 1780 2325 50  0001 C CNN
F 3 "~" H 1850 2325 50  0001 C CNN
	1    1850 2325
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R?
U 1 1 5DA68A52
P 1850 2550
F 0 "R?" H 1920 2596 50  0000 L CNN
F 1 "R" H 1920 2505 50  0000 L CNN
F 2 "" V 1780 2550 50  0001 C CNN
F 3 "~" H 1850 2550 50  0001 C CNN
	1    1850 2550
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R?
U 1 1 5DA68F22
P 1850 2800
F 0 "R?" H 1920 2846 50  0000 L CNN
F 1 "R" H 1920 2755 50  0000 L CNN
F 2 "" V 1780 2800 50  0001 C CNN
F 3 "~" H 1850 2800 50  0001 C CNN
	1    1850 2800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	2850 2800 2000 2800
Wire Wire Line
	2000 2550 2500 2550
Wire Wire Line
	2125 2325 2000 2325
Wire Wire Line
	1575 2325 1700 2325
Wire Wire Line
	1700 2550 1575 2550
Wire Wire Line
	1575 2800 1700 2800
$Comp
L Device:R R?
U 1 1 5DA74885
P 4475 2600
F 0 "R?" H 4545 2646 50  0000 L CNN
F 1 "R" H 4545 2555 50  0000 L CNN
F 2 "" V 4405 2600 50  0001 C CNN
F 3 "~" H 4475 2600 50  0001 C CNN
	1    4475 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5DA74D1A
P 4825 2600
F 0 "R?" H 4895 2646 50  0000 L CNN
F 1 "R" H 4895 2555 50  0000 L CNN
F 2 "" V 4755 2600 50  0001 C CNN
F 3 "~" H 4825 2600 50  0001 C CNN
	1    4825 2600
	1    0    0    -1  
$EndComp
Text GLabel 3325 2800 0    50   Input ~ 0
GND
$Comp
L Device:R R?
U 1 1 5DA73BCF
P 4125 2600
F 0 "R?" H 4195 2646 50  0000 L CNN
F 1 "R" H 4195 2555 50  0000 L CNN
F 2 "" V 4055 2600 50  0001 C CNN
F 3 "~" H 4125 2600 50  0001 C CNN
	1    4125 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4825 2750 4825 2800
Wire Wire Line
	4125 2750 4125 2800
Wire Wire Line
	4475 2750 4475 2800
Connection ~ 4475 2800
Text GLabel 1750 1600 0    50   Input ~ 0
COM2
Text GLabel 1750 1800 0    50   Input ~ 0
COM3
$Comp
L Simulation_SPICE:DIODE D?
U 1 1 5DBA5698
P 3650 2000
F 0 "D?" V 3475 1900 50  0000 L CNN
F 1 "DIODE" V 3695 2080 50  0001 L CNN
F 2 "" H 3650 2000 50  0001 C CNN
F 3 "~" H 3650 2000 50  0001 C CNN
F 4 "Y" H 3650 2000 50  0001 L CNN "Spice_Netlist_Enabled"
F 5 "V" H 3650 2000 50  0001 L CNN "Spice_Primitive"
	1    3650 2000
	-1   0    0    1   
$EndComp
$Comp
L Simulation_SPICE:DIODE D?
U 1 1 5DBA725E
P 3650 2350
F 0 "D?" V 3475 2250 50  0000 L CNN
F 1 "DIODE" V 3695 2430 50  0001 L CNN
F 2 "" H 3650 2350 50  0001 C CNN
F 3 "~" H 3650 2350 50  0001 C CNN
F 4 "Y" H 3650 2350 50  0001 L CNN "Spice_Netlist_Enabled"
F 5 "V" H 3650 2350 50  0001 L CNN "Spice_Primitive"
	1    3650 2350
	-1   0    0    1   
$EndComp
Wire Wire Line
	4125 1900 4125 2000
Wire Wire Line
	4475 1900 4475 2175
Wire Wire Line
	4825 1900 4825 2350
$Comp
L Simulation_SPICE:DIODE D?
U 1 1 5DBA6853
P 3650 2175
F 0 "D?" V 3475 2075 50  0000 L CNN
F 1 "DIODE" V 3695 2255 50  0001 L CNN
F 2 "" H 3650 2175 50  0001 C CNN
F 3 "~" H 3650 2175 50  0001 C CNN
F 4 "Y" H 3650 2175 50  0001 L CNN "Spice_Netlist_Enabled"
F 5 "V" H 3650 2175 50  0001 L CNN "Spice_Primitive"
	1    3650 2175
	-1   0    0    1   
$EndComp
Wire Wire Line
	3825 2000 4125 2000
Connection ~ 4125 2000
Wire Wire Line
	4125 2000 4125 2450
Wire Wire Line
	4125 1400 4475 1400
Wire Wire Line
	4825 2800 4475 2800
Wire Wire Line
	2500 1400 2850 1400
Wire Wire Line
	2850 1400 4125 1400
Connection ~ 2850 1400
Wire Wire Line
	3800 2175 4475 2175
Connection ~ 4475 2175
Wire Wire Line
	4475 2175 4475 2450
Wire Wire Line
	3800 2350 4825 2350
Connection ~ 4825 2350
Wire Wire Line
	4825 2350 4825 2450
Wire Wire Line
	3325 2800 4125 2800
Connection ~ 4125 2800
Wire Wire Line
	4125 2800 4475 2800
$EndSCHEMATC
