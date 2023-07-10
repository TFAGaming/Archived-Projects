from microbit import *

display.scroll("Turning display off")
sleep(100)
display.off()  # turn off the display and goes to GPIO mode
sleep(5000)
display.on()  # trun on the display
if display.is_on():
    display.scroll("Display back on")
