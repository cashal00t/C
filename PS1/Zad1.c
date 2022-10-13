#include <stdio.h>
int main ( )
{
printf("");
float a,b, srednia;
printf(" ZAD. 1 podaj dwie liczby:");
scanf("%f %f", &a, &b);
srednia = (a + b) / 2;
printf("Srednia arytmetyczna = %f ", srednia);


float c,d, pole, obw;
printf(" ZAD. 2 podaj liczby do pola i obwodu:");
scanf("%f %f", &c, &d);
pole=c*d;
obw=2*c+2*d;
printf("Pole wynosi = %", pole);
printf("Obwód wynosi = %c", obw);
return 0;




}
