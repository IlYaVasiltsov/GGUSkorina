#include <stdio.h>
#include <math.h>
 int main()
 {
   int a;
   printf("Введите число a=");
    scanf("%i",&a);
    while(a<1000000){
        a=a*a+1;
    }
     printf("Это число %i",a);
 return 0;
 }
