//
// Created by alexa on 05/11/2024.
//

#include "projecto3.h"
#include <algorithm>
#include <ostream>
#include <iostream>
#include <cstdio>

using namespace std;

void projecto3() {
    int notas[8];

    for (int i = 0; i < 8; i++) {
        cout << "Escriba las notas de los examenes " << i + 1 << ":";
        cin >> notas[i];
    }

    int  sumanotas;
    for (int i = 0; i < 8; i++) {
        sumanotas += notas[i];
    }
    int media = sumanotas / 8;
    cout << "la nota media es: " << media << endl;
}
