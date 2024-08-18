#include "Exercicio04.h"

#include <iostream>
#include <stdio.h>
using namespace std;

/*
 * Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para
 * graus Celsius. O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte
 * fórmula: C=5/9.(F-32)
 */

void convertTemp() {
 for (int temperatureF = 0; temperatureF <= 100; temperatureF++) {
  float temperatureC = (temperatureF - 32) * 5 / 9;
  cout <<temperatureF<<"F = "<<temperatureC<<"C"<<endl;
 }
}

void exercicio04() {
 convertTemp();
}
