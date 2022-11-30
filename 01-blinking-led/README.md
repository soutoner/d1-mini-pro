# 01-blinking-led

Let's interact with the built in LED.

Functionality tutorial: https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

## Concepts learned

### LED blinking

We need to set the LED pin at output. Note how convenient the `LED_BUILTIN` already points to the correct pin.

We can light up the LED or turnt it off with the `digitalWrite` function, chossing the correct pin and what we want to do `HIGH` - light up, `LOW` - turn it off.

Please note that in this case, the internal LED is connected differently than in most examples. So the controls (`digitalWrite`) are inverted.
