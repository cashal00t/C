#include <stdio.h>

int main ( )
{

float a,b,c, maxi, suma;
printf(" ZAD 3. Podaj 3 liczby:");
scanf("%f %f %f", &a, &b, &c);

 if( a<=b && a<=c && c<=b){
    printf("Dwie wieksze to: %.1f, %.1f, %.1f",a,b,c);
 }
  else if( b<=a && b<=c){
    printf("Dwie wieksze to: %.1f, %.1f, %.1f",a,c,b);
  }
  else if( b<=a && b<=c){
    printf("Dwie wieksze to: %.1f, %.1f, %.1f",c,a,b);
  }
  else{ //if( c<=a && c<=b )
    printf("Dwie wieksze to: %.1f, %.1f, %.1f",c,b,a);
  }



return 0;




}
