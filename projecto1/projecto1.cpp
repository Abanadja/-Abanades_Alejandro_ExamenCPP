//
// Created by alexa on 05/11/2024.
//

#include "projecto1.h"
#include <ostream>
#include <iostream>
#include <cstdio>

using namespace std;


void projecto1() {
    int a;
    cout << "Escriba un numero: ";
    cin >> a;

    if(a > 0) {
        cout << "El numero es positivo" << endl;
    }
    else {
        if(a == 0) {
            cout << "El numero es 0 " << endl;
        }
        else {
            cout << "El numero es negativo" << endl;
        }
    }
}