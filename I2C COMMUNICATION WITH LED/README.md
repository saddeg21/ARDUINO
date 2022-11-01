# I2C COMMUNICATION WITH LED

## WHAT IS I2C ? 
I2C is communication protocol which is used for its lightweight design.
- Half duplex
- Low speed
- Single bus for multiple master-slaves
- Synchronous

It has got two connections which are: 
- __SDA__ (SERIAL DATA) : Used for data transmission
- __SCL__ (SERIAL CLOCK) : Used for clock sync

### DIAGRAM OF I2C DEVICES
In that diagram, every device - master or slaves - has got a buffer and a switch which is usually a __mosfet__.
At the startup, both switches are open so around every part of the wire, the voltage is around 3.3V.
- Buffers are receiver so they cannot send a data througly bus.
- Because of that, transmitter makes its logic switch closed. By doing that, circuit is grounded and other unit has got 0V as voltage now.
- This change stimulates the other device to detect a bit send.
- 
![I2C_Buffer_AAC1(!)](https://user-images.githubusercontent.com/89015461/199305006-b31641a7-a6f5-4e24-bb9b-0c0145e935de.jpg)

### DATA EXAMPLE
1) While they're at downtime, circuit is at "1". So for starting the communication, we made the circuit "0" for communication.
- __THE MOST IMPORTANT THING ABOUT I2C is THAT ONLY MASTER DECIDES TO DATA FLOW. IF MASTER WANTS TO READ THE DATA FROM, SO THE SLAVE IS TRANSMITTER, IT STRESSES THAT SENDING THE DATA SO MASTER IS READING BUT NOT THE SLAVES__
2) FIRSTLY, SDA GOES TO 0, THEN SCL GOES TO 0 which indicates that communication is about the get started.
3) Then 8 bits are send. First 7 denotes the address of slave which should take the message, the last bit emphasize MASTER is going to READ/WRITE data.
- READ: Master is gonna read from slave which is 1 as bit.
- WRITE : Master is gonna write a value into slave which is 0 as bit.
4) Then the first __ACK__ bit is sent for indicating that the device has been found. That is made by slave by turning the line into __"0"__
5) Then data has been sent via SDA 
6) Then the ACK bit has been sent for indicating the communication has ended.
![36689](https://user-images.githubusercontent.com/89015461/199305594-023dcb38-6a80-4af6-b5cb-e84c3b8e0f1c.png)


## I2C APPLICATION
### LCD PORTS
It has got many ports which is used for communication.
- GND and VCC: Power to LCD
- VO : It is used to manage contrast via using Potansiometer
- RS : It is about register selection. A LCD has two mode:
   1) INSTRUCTION MODE : It gives LCD's led some instructions to do like setting cursor.
   2) CHARACTER MODE : It transmits data to LCD for viewing on the screen. 
- RW : It is connected to GND to because it is 1 or 0. It emphasize what the master wants to do (READ/WRITE)
- E : It indicates that this slave is going to take some data. 
   1) If it is set to LOW => It is active
   2) If it is set to HIGH => It is inactive
- DBx Pins : They are used for data transmission
- LED -/+ pins : For providing LED circuit energy, they're used

__!!! USE RESISTOR TO BALANCE THE CURRENT BECAUSE AN LED COULD TAKE 20mA as maximum current !!!__

![LCD_Base_bb_Schem](https://user-images.githubusercontent.com/89015461/199308114-10ed69a2-0d2e-402d-85b5-83ee818fa1c3.png)

### SCHEMA

![I2C LCD](https://user-images.githubusercontent.com/89015461/199309796-82e028cb-08c8-482e-b9c1-93a6c48e8c93.png)
