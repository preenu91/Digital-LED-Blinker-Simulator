// Digital LED Blinker Simulator.cpp : Defines the entry point for the application.
//

#include "LED_Blinker_Simulator.h"


int main()
{
	int numBlinkCycles{}, interval{};
	std::cout << "Enter the number of blink cycles\n";
	std::cin >> numBlinkCycles;
	std::cout << "Enter the interval in milliseconds between LED turning ON and OFF\n";
	std::cin >> interval;

	LED led1{true};
	led1.blink(numBlinkCycles, interval);

	return 0;
}

void LED::turnOn()
{
	m_state = true;
	showState();
}
void LED::turnOff()
{
	m_state = false;
	showState();
}

void LED::blink(int cycles, int interval)
{
	for (int i{ 0 }; i < cycles; ++i)
	{
		turnOn();
		std::this_thread::sleep_for(std::chrono::milliseconds(interval)); 
		turnOff();
		std::this_thread::sleep_for(std::chrono::milliseconds(interval));
	}

}

void LED::showState() const
{
	m_state ? std::cout << "LED ON\n" : std::cout << "LED OFF\n";
}