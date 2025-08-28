// Digital LED Blinker Simulator.h : Include file for standard system include files,
// or project specific include files.

#ifndef _LED_BLINKER_SIMULATOR
#define _LED_BLINKER_SIMULATOR

#include<iostream>
#include <thread>
#include <chrono>

class LED
{
private:
	bool m_state{}; //state of LED 

public:
	LED(bool state) : m_state{ state } {}; //Constructor
	void turnOn();							// turn LED ON
	void turnOff();							// turn LED OFF
	void blink(int cycles, int interval);	/* turn LED ON and OFF with 'interval' time difference
												and repeat 'cycles' number of times*/
	void showState() const;
};

#endif



