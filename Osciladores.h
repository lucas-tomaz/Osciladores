/*
	Autor: Téc. Lucas Tomaz
	versão: 2020.1.
	Data de criação: 24/07/2020.
	
	Especificaçôes:
		Biblioteca para operações com osciladores.
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