#include "Exercicio06.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


struct Person {
    char gender;
    float height;
};

float idealWeight(float alt, char gender) {
    if (gender == 'm') {
        float idealWeight = 72.7 * alt - 58;
        return round(idealWeight);
    }
    else if (gender == 'f') {
        float idealWeight = 62.1 * alt - 44.7;
        return round(idealWeight);
    }
}

void exercicio06(){
    Person person;
    cout << "Digite sua altura: ";
    cin >> person.height;
    cout << "Digite seu sexo (m ou f): ";
    cin >> person.gender;
    cout << "Ideial Peso: " << idealWeight(person.height, person.gender) << endl;
}
