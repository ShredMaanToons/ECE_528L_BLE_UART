# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Bluetooth Low Energy (BLE) Lab
### Thomas Anderson / Abraham Santiago
---
<details><summary>The Bluetooth Low Energy (BLE) lab interfaces with the following:</summary>

* User LEDs of the TI MSP432 LaunchPad
* Pololu Gearmotor with Encoder - [Product Link](https://www.pololu.com/product/3675)
* Adafruit Bluefruit LE UART Friend - Bluetooth Low Energy (BLE) Module - [Product Link](https://www.adafruit.com/product/2479)
</details>


<details>
<summary><h2>Prelab Questions</h2></summary>

1. <b>What is Bluetooth Low Energy (BLE)? How does it differ from regular Bluetooth in terms of power consumption and range?</b>    


2. <b>What does GAP stand for and what is its purpose? What is the difference between Peripheral and Central devices in the context of BLE?</b>    


3. <b>What is GATT in BLE, and how does it structure data exchange between connected devices? Provide definitions for the following: Profile, Service, and Characteristic.</b>    


4. <b>What is an advertising packet in BLE and what information can it contain?</b>    


5. <b>What is a UUID used for in BLE and why are 128-bit UUIDs used?</b>


6. <b>What bit from which register determines if the UART data is received or transmitted MSB or LSB first?</b>


7. <b>Provide the mnemonic and primary module function for each pin listed.</b>
<b>Pin</b> | <b>Mnemonic</b> | <b>Input Pin Primary Function</b> | <b>Output Pin Primary Function</b>
--- | --- | --- | ---
<b>P2.2</b> |  |  | 
<b>P2.3</b> |  |  | 
<b>P3.2</b> |  |  | 
<b>P3.3</b> |  |  | 

8. <b>Write a void function named P2_2_and_P2_3_Init that takes no arguments and configures the following pins to use primary function mode: P2.2 and P2.3. It is not necessary to set the direction of the pins.</b>
```
void P2_2_and_P2_3_Init()
{
    
}
```
</details>

<details>
<summary><h2>Overview</h2></summary>

This lab introduces bluetooth control of the car, using a phone app to send data to the vehical allowing remote control.
</details>

<details>
<summary><h2>Components</h2></summary>
  
<b>Description</b> | <b>Quantity</b> | <b>Manufacture</b>
--- | --- | ---
MSP432 LaunchPad | 1 | Texas Instruments
USB-A to Micro-USB Cable | 1 | N/A
TI-RSLK MAX Chassis | 1 | Pololu
Adafruit BLE UART Module | 1 | Adafruit
PMOD SWT | 1 | Digilent
Oscilloscope Probes | 1 | N/A
</details>



<details>
<summary><h2>Theory</h2></summary>

<b>Key Concepts</b>
---

<details>
<summary><b>Enhanced Universal Serial Communication Interface (eUSCI)</b></summary>


</details>

<summary><b>BlueFruit</b></summary>
The main purpose of this lab is to utilize a bluetooth connection to communicate wirelessly using UART. To achieve the bluetooth connection the Adafruit Bluefruit LE UART module is used as a receiver. It uses Bluetooth Low Energy (BLE) to communicate with a mobile app.
The BlueFruit has 8 pins.
<b>Pin</b> | <b>Purpose</b>
--- | ---
<b>VIN</b> | test
<b>GND</b> | test
<b>TXO</b> | test
<b>RXI</b> | test
<b>CTS</b> | test
<b>RTS</b> | test
<b>MOD</b> | test
<b>DFU</b> | test

</details>

</details>

<details>
<summary><h2>Analysis and Results</h2></summary>

Pictures of the oscilloscope output are included in the repository. The bit duration is almost exactly one millisecond.

</details>

<details>
<summary><h2>Know Issues or Limitations</h2></summary>

We gained a thorough understanding of all the concepts in the lab and successfully demonstrated the entire lab working without bugs.    
<b>This lab was a complete success.</b>
</details>

<details>
<summary><h2>Author Contribution</h2></summary>

We both completed every component of the lab and worked on the report together.    
</details>

<details>
<summary><h2>References</h2></summary>

[MSP432P401R SimpleLink Microcontroller LaunchPad Development Kit User's Guide](https://docs.rs-online.com/3934/A700000006811369.pdf)

[MSP432P401R Datasheet](https://www.ti.com/lit/ds/slas826e/slas826e.pdf)

[Robot Systems Learning Kit (TI-RSLK) User Guide](https://www.ti.com/lit/pdf/sekp166)

[MSP432P4xx SimpleLink Microcontrollers Technical Reference Manual](https://web.archive.org/web/20200402132841/http:/www.ti.com/lit/ug/slau356i/slau356i.pdf)

[Adafruit Bluefruit LE UART Friend Module](https://www.adafruit.com/product/2479)

[Adafruit Bluefruit LE UART Friend Module Tutorial](https://learn.adafruit.com/introducing-the-adafruit-bluefruit-le-uart-friend)

[TI DRV8838 Motor Driver Datasheet](https://www.ti.com/lit/gpn/drv8838)

[Bluefruit LE Connect User Guide](https://learn.adafruit.com/bluefruit-le-connect)

[GNU C Library Reference Manual](https://www.gnu.org/s/libc/manual/pdf/libc.pdf)
