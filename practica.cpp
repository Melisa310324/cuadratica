#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main (){

    float a, b, c, X1, X2, Raiz;
    cout<< "Introduzca la variable a: ";
    cin>>a;
    cout<< "Introduzca la variable b: ";
    cin>>b;
    cout<< "Introdusca la variable c: ";
    cin>>c;

        Raiz = sqrt(pow(b,2)-4 * a * c);
        X1 = (-b + Raiz) / (2 * a);
        X2 = (-b - Raiz) / (2 * a);
        cout<< "Las soluciones son: " << X1 << "y" << X2 <<endl;

    return 0;
}
