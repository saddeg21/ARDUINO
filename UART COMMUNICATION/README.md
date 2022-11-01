# UART COMMUNICATION
UART is an old fashioned way of communicating asynchronously. For doing that, we improvised a new way instead of having a clock signal. We're making the speed of transmission and receiving same and it helps us to keep communication non-collided.

## UART EXPLAINED
We have a __TX, RX and GND__ pin at every device. One of the devices TX have to be connected with others RX.
UART could be simplex, half duplex or full-duplex.
SPI, I2C, ETHERNET and USB has taken its place but it's still effective for low speed and low throughput communication.
For making communication like synced, it had to be:
- Both devices' speed should be equal in terms of __baud__
- Both of them should have the same __frame__ structure.

### UART FRAME
At IDLE, the line is "1". 
- __START BIT__ : Turns line to __0__
- __STOP BIT__ : Turns line to __1__. Sometimes two stop bits preferred for making it clear.
- __PARITE BIT__ : Used for error detection. It has two types.
    1) __EVEN PARITY__ : It says the number of 1 bits in data is even
    2) __ODD PARITY__ : It says the number of 1 bits in data is odd.
- __DATA BIT__ : At every time, 8 bit is sent.

![uart3](https://user-images.githubusercontent.com/89015461/199362570-260a0cea-5b6a-417d-8eb8-2a844b273e3d.png)

## PROJECT EXPLAINED
We have got two arduinos.
- One arduino takes the distance data from ultrasonic sensor and write it to UART line
- Other arduino takes the transmitted data from its RX pin and decides whether it should rotate the servo or not.

### SERVO DIAGRAM
![sg90_datasheet_page-0001](https://user-images.githubusercontent.com/89015461/199361944-4c7bbcd0-0c69-4a49-8229-72dbb31211a0.jpg)

### ULTRASONIC SENSOR DIAGRAM
![Ultrasonic-sensors-and-Arduino-circuit-diagram-Sensors-echo-and-trigger-pin-are](https://user-images.githubusercontent.com/89015461/199362784-0fe5a2cd-8eb6-45ec-8966-aa2e004e639d.png)

