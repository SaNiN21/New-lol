#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <assert.h>

using namespace std;

void kvur (float a, float b, float c) {
    float D,x,x1,x2;
    D=b*b-4*a*c;
    printf("Diskriminant: %f\n", D);
    if (D < 0)
    {
    printf("Net resheniy\n");
    return;
    }
    if (D == 0)
    {
        printf("Odno reshenie\n");
        x=-b/(2*a);
        printf("x=%f", x);
        
    }
    if (D > 0)
    {
        printf("Dva resheniya\n");
    x1=(-b+sqrt(D))/(2*a); assert(x1);
    x2=(-b-sqrt(D))/(2*a); assert(x2);
    printf("x1=%f, x2=%f", x1, x2); }
}
int main() {
    cout << "Reshenie kvadratnogo uravneniya" << endl;
    float a, b, c;
    cout<< "Vvedite a, b, c" << endl;
    scanf("%f %f %f", &a, &b, &c);
    assert(a); //a!=0
    kvur(a,b,c);
    getch();
}



