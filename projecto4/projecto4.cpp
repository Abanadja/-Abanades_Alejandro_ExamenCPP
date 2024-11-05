//
// Created by alexa on 05/11/2024.
//

#include "projecto4.h"
#include <algorithm>
#include <ostream>
#include <iostream>
#include <cstdio>

using namespace std;

void projecto4() {
    int producto1;
    cout << "precio producto 1: ";
    cin >> producto1;
    int producto2;
    cout << "precio producto 2: ";
    cin >> producto2;
    int producto3;
    cout << "precio producto 3: ";
    cin >> producto3;

    int total;
    if (producto1 < producto2 && producto1 < producto3)
    {
        total = producto2 + producto3;
        cout << "el total a pagar es: " << total << endl;
    }
    else {
        if (producto2 < producto1 && producto2 < producto3)
        {
            total = producto1 + producto3;
            cout << "el total a pagar es: " << total << endl;
        }
        else {
            if (producto3 < producto1 && producto3 < producto2)
            {
                total = producto1 + producto2;
                cout << "el total a pagar es: " << total << endl;
            }
        }
    }
}


