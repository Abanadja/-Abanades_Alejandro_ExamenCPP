//
// Created by alexa on 05/11/2024.
//

#include "projecto2.h"

#include <algorithm>
#include <ostream>
#include <iostream>
#include <cstdio>

using namespace std;

void projecto2() {
    int dia;
    cout<<"Escriba un numero que correspondera a un dia (1-7): ";
    cin >> dia;

    if (dia >= 1 && dia <= 7) {
        switch (dia) {
            case 1:
                cout << "1-Lunes" << endl;
                break;
            case 2:
                cout << "2-Martes" << endl;
                break;
            case 3:
                cout << "3-Miercoles" << endl;
                break;
            case 4:
                cout << "4-Jueves" << endl;
                break;
            case 5:
                cout << "5-Viernes" << endl;
                break;
            case 6:
                cout << "6-Sabado" << endl;
                break;
            case 7:
                cout << "7-Domingo" << endl;
                break;
        }
    }
    else {
        cout << "numero de dia no valido" << endl;
    }
}
