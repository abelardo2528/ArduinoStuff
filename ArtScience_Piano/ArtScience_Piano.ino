/*Tomas de Camino Beck
www.funcostarica.org
*/

#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>


// define el punto crítico a partir del cual sonar
#define CAP 50

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}


void loop() {

  /************* CAPTOUCH */
  //Se han ajustado a las frecuencias del C1
  if(CircuitPlayground.readCap(3)>CAP)CircuitPlayground.playTone(261.63,100);
  if(CircuitPlayground.readCap(2)>CAP)CircuitPlayground.playTone(293.66,100);
  if(CircuitPlayground.readCap(0)>CAP)CircuitPlayground.playTone(329.63,100);
  if(CircuitPlayground.readCap(1)>CAP)CircuitPlayground.playTone(349.23,100);
  if(CircuitPlayground.readCap(12)>CAP)CircuitPlayground.playTone(392.00,100);
  if(CircuitPlayground.readCap(6)>CAP)CircuitPlayground.playTone(440.00,100);
  if(CircuitPlayground.readCap(9)>CAP)CircuitPlayground.playTone(493.88,100);
  if(CircuitPlayground.readCap(10)>CAP)CircuitPlayground.playTone(523.25,100);
}
