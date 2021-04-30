# Embedded C Programming Activities with Continuous Integration and Code Quality

# Heater Controller Application

#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/KirubaThomasM/Embedded_C_Activities/actions/workflows/Compile.yml/badge.svg)](https://github.com/KirubaThomasM/Embedded_C_Activities/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/KirubaThomasM/Embedded_C_Activities/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/KirubaThomasM/Embedded_C_Activities/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/643b7ca2b2dc4daba1e700c216bb87d9)](https://www.codacy.com/gh/KirubaThomasM/Embedded_C_Activities/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=KirubaThomasM/Embedded_C_Activities&amp;utm_campaign=Badge_Grade)|

## In Action

|ON|OFF|
|:--:|:--:|
|![ON](https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/ON.PNG)|![OFF](https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/OFF.PNG

## Application Feature

### 1.Button Sensor checks for passenger seat is empty or not to actuate Heater/Cooler
### 2.Temperature calculation using ADC and sensor (potentiometer sim)
### 3.Based On Temperature, generate PWM output to control the heater/cooler
### 4.Print the Temperature value using SPI USART communication

## PWM Value configuration Table
|S No.|ADC range|PWM Dutycycle||Temperature|
|:--:|:--:|:--:|
|1.||0-200|20%|20°|
|2.||210-500|40%|25°|
|3.||510-700|70%|29°|
|4.||710-1024|95%|33°|