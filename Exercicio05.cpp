#include "Exercicio05.h"
#include <string>
#include <iostream>
using namespace std;

struct Swimmer {
    int age;
};


string defineCategory(int swimmerAge) {
    if (swimmerAge < 7) {
        return "Categoria: Infantil A";
    }
    if ( swimmerAge > 7 && swimmerAge <= 10) {
        return "Categoria: Infantil B";
    }
    if (swimmerAge > 10 && swimmerAge <= 13) {
        return "Categoria: Juvenil A";
    }
    if (swimmerAge > 13 && swimmerAge <= 17) {
        return "Categoria: Juvenil B";
    }
    if (swimmerAge > 17) {
        return "Categoria: Adulto";
    }
}


void exercicio05() {
    Swimmer swimmer;
    cout<<"Digite a idade do nadador(a): ";
    cin>>swimmer.age;
    cout<<defineCategory(swimmer.age);
}
