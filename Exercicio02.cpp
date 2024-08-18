#include "Exercicio02.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

namespace Exercicio {
    double getMaxValue(vector<double> numberList) {
        sort(numberList.begin(), numberList.end());
        return numberList[2];
    }

    void exercicio02() {
        vector<double> numberList = {};
        double number;
        for (int i = 0; i < 3; i++) {
            cout << "Insira um numero: ";
            cin >> number;
            numberList.push_back(number);
        }
        cout << "Maior numero: " << getMaxValue(numberList) << endl;
    }
}
