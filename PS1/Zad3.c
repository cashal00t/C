#include <stdio.h>
int main ( )
{

float a,b,c, maxi, suma;
printf(" ZAD 3. Podaj 3 liczby do zbudowania tr�jk�ta:");
scanf("%f %f %f", &a, &b, &c);

if(a>b){
    maxi=a;
    suma=b+c;
}else if(a<c){
    maxi=c;
    suma=a+b;
}else if(b>c){
    maxi=b;
    suma=a+c;
}

if(suma>maxi){
    printf("Z tych odcink�w mozna zbudowac trojkat");
}else{
    printf("Nie mozna zbudowa� trojkata");
}



return 0;




}
