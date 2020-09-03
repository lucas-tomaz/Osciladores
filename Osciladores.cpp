/*
	Autor: T�c. Lucas Tomaz
	vers�o: 2020.1.
	Data de cria��o: 24/07/2020.
	
	Especifica��es:
		Biblioteca para opera��es com osciladores.
*/

#include "Arduino.h"
#include "Osciladores.h"

Osciladores::Osciladores(int pin){
	pinMode(pin,OUTPUT);
	_pin=pin;
}
void Osciladores::osc_1k(){
	digitalWrite(_pin,HIGH);
	delayMicroseconds(500);
	digitalWrite(_pin,LOW);
	delayMicroseconds(500);
}
void Osciladores::osc_2k(){
	digitalWrite(_pin,HIGH);
	delayMicroseconds(250);
	digitalWrite(_pin,LOW);
	delayMicroseconds(250);
}
void Osciladores::osc_5(){
digitalWrite(_pin,HIGH);
delay(100);
digitalWrite(_pin,LOW);
delay(100);
}
void Osciladores::osc_100(){
digitalWrite(_pin,HIGH);
delay(5);
digitalWrite(_pin,LOW);
delay(5);
}