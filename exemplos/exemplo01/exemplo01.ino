/*
    Autor: Téc. Lucas Tomaz
    Versão:2020.1
    Data:07/2020
    Descrição:
      Biblioteca criada para fornecer osciladores de até 2kHz.


*/
#include <Osciladores.h>
Osciladores saida1(13), saida2(3),saida3(4),saida4(5);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
saida1.osc_100(); //oscilador de 100 Hz.
saida2.osc_5();//oscilador de 5 Hz.
saida3.osc_1k();//oscilador de 1k Hz.
saida4.osc_2k();//oscilador de 2k Hz.
}
