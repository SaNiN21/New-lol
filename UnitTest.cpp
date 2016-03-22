#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <assert.h>

using namespace std;

void kvur () {
    float a, b, c, D, x1, x2, x;
    cout<< "Vvedite a, b, c" << endl;
    cin >>a >> b >> c;
    assert(a); //ѕроверка, что уравнение квадратное, т.е. a!=0
    D=b*b-4*a*c;
    cout << "Diskriminant: " << D << endl;
    if (D < 0)
    cout << "Net resheniy" << endl;
    if (D == 0)
    {cout << "Odno reshenie" << endl;
    x=-b/(2*a);
    cout << "x=" << x;}
    if (D > 0)
    {cout << "Dva resheniya" << endl;
    x1=(-b+sqrt(D))/(2*a); assert(x1);
    x2=(-b-sqrt(D))/(2*a); assert(x2);
    cout << "x1=" << x1 << ", " << "x2=" << x2 << endl;}
}
int main() {
    cout << "Reshenie kvadratnogo uravneniya" << endl;
    kvur();
    system("pause");
}



