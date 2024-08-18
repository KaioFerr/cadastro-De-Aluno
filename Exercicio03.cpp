#include "Exercicio03.h"
#include <iostream>
#include <cmath>
using namespace std;

/*Supondo que a população de um país "a" seja de 90.000.000 de habitantes,
 *com uma  taxa anual de crescimento de 3 porcento, e que a população de um
 *país "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa
 *anual de crescimento de  1,5 porcento. Fazer um programa para calcular e
 *mostrar o número de anos necessários  para que a população do país "a"
 *ultrapasse ou seja igual a população do país "b",  mantidas essas taxas de
 *crescimento. */

float timeToEqualPopulations() {
    float totalPopulationsA = 90000000.0, totalPopulationsB =  200000000.0;
    float anualRateA = 0.03, anualRateB = 0.015;
    float t;
    t = (log(totalPopulationsB/totalPopulationsA) / log((1 + anualRateA)/(1 + anualRateB)));
    return round(t);
}

void exercicio03() {
    cout<<"Exercicio 03"<<endl;
    cout<<"A populacao total das cidades serao iguais em: "<<timeToEqualPopulations() << " anos" <<endl;
}




