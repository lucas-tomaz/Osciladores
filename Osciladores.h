/*
	Autor: T�c. Lucas Tomaz
	vers�o: 2020.1.
	Data de cria��o: 24/07/2020.
	
	Especifica��es:
		Biblioteca para opera��es com osciladores.
*/

#ifndef Osciladores_h
#define Osciladores_h

#include "Arduino.h"

class Osciladores{
	public:
		Osciladores(int pin);
		void osc_1k();
		void osc_2k();
		void osc_5();
		void osc_100();
	private:
		int _pin;
};
#endif