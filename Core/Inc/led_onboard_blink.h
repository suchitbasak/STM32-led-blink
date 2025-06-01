/*
A preprocessor is a tool that runs before your code is compiled.

#include is an exmaple of apreprocessor directive that lets the compile know that it can insert contents of another file in the file it is used in
#define creates a macro or a constant
#ifndef 'if not defined' compiles depending on wheter something is defined

what's a macro?
A macro can be a constant or "function-like". Examples:
#define PI 3.14159
or the example chatgpt gave me: 
#define SQUARE(x) ((x) * (x))


How #ifndef and #define work:

if LED_ONBOARD_BLINK is not defined, define it now
if it is already defined, skip the code inside the block
*/

#ifndef LED_ONBOARD_BLINK_H
#define LED_ONBOARD_BLINK_H

#include "stm32g0xx_hal_conf.h" //device driver

// initialise the gpio pin
void led_onboard_init(void);
void led_onboard_toggle(void);
void led_onboard_on(void);
void led_onboard_off(void);
# endif  // End of the ifndef block