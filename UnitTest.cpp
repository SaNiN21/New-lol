#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>


void kvur () {
    float a, b, c;
    printf("Vvedite a, b, c");
    scanf("%f %f %f", &a, &b, &c);
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
    x1=(-b+sqrt(D))/(2*a); 
    x2=(-b-sqrt(D))/(2*a); 
    printf("x1=%f, x2=%f", x1, x2); }
}
int main() {
    printf("Reshenie kvadratnogo uravneniya");
    kvur();
    getch();
}
