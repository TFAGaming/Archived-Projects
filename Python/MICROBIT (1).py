from microbit import  *

while True:
    display.set_pixel(3,4,9)  # turn on the led
    sleep(500)  # wait for 1 second
    display.set_pixel(3, 4, 0)  # turn off the LED
    sleep(500)  # wait for 1 second