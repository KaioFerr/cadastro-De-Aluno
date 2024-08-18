#include "Exercicio07.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int totalDays(int days, int month, int year) {
    int daysPerYear = 365;
    int daysPerMonth = 30;
    int totalDays = year * daysPerYear + month * daysPerMonth + days;
    return totalDays;
}

void exercicio07() {
    int days, month, year;
    cout << "Digite a idade em ano: ";
    cin >> year;
    cout << "Digite a idade em mes: ";
    cin >> month;
    cout << "Digite a idade em dias: ";
    cin >> days;
    days = totalDays(days, month, year);
    cout << "Total de dias: "<< days << endl;
}