from microbit import *

display.show('X')
sleep(5000)  # wait for 5 seconds
display.clear()  # set the brightness level of all the LEDs to 0
sleep(2000)  # wait for 2 seconds
for x in range(0, 5):
    for y in range(0, 5):
        sleep(100)  # slow down the code long enough for the user
        # to see the LEDs turn on and off in sequence
        display.set_pixel(x, y, 9)  # then set the brightness level of all the
        # LEDs to 9 using for loop