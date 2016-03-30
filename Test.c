#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main () {
    float a, b, c;
    printf("Vvedite a, b, c");
    scanf("%f %f %f", &a, &b, &c);
    assert(a); 
    float D,x,x1,x2;
    D=b*b-4*a*c; 
    assert(D);
    printf("Diskriminant: %f\n", D);
    if (D < 0)
    {
    printf("Net resheniy\n");
    return;
    }
    if (D == 0)
    {
        printf("Odno reshenie\n");
        x=-b/(2*a); assert(x);
        printf("x=%f", x);
    }
    if (D > 0)
    {
        printf("Dva resheniya\n");
    x1=(-b+sqrt(D))/(2*a); assert(x1); 
    x2=(-b-sqrt(D))/(2*a); assert(x2);
    printf("x1=%f, x2=%f", x1, x2); }
getch();
}
