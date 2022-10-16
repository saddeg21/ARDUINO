# PWM SIGNAL TO LED 
## DUTY CYCLE
Duty cycle refers to ratio of closed time of circuit to period. So it is about how long you got '1' as a signal. 
Then, we multiply __MAX VOLTAGE__ with that duty cycle ratio and find out the perceived voltage by Arduino board.
In fact, for a value of %25 we're sending __5V__ for 1 unit and period is 4 unit. It is perceived as 1.25V by circuit.
## MAP(valueReaded,firstIntervalLow,firstIntervalHigh,secondIntervalLow,secondIntervalHigh)
PWM is perceived in 8 bits by ARDUINO.
__BUT__ analog signals are perceived as 10 bits. Because of that, we need to convert 0-1023 interval values into 0-255 interval. That function helps us to do that.
## SCHEMA
![Tremendous Jarv](https://user-images.githubusercontent.com/89015461/196046939-50e6f503-4cab-4658-a96c-72ef994eede9.png)
