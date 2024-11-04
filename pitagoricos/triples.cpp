#include <iostream>
#include <cmath>
#include "triples.h"

using namespace std;

void calcularTriplesPitagoricos(int limite) {
    cout << "Triples pitagóricos encontrados:" << endl;

    for (int a = 1; a <= limite; a++) {
        for (int b = a; b <= limite; b++) {
            int cSquared = a * a + b * b;
            int c = sqrt(cSquared);
            if (c * c == cSquared && a + b > c) {
                // Imprimir el triple pitagórico
                cout << a << " - " << b << " - " << c << endl;
            }
        }
    }
}
