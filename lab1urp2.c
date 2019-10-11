#include <stdio.h>
#include <stdlib.h>
#include <math.h>   

int main () {

    float a,b,c,s,x,y,z;
    printf("Введите переменную x:");
    scanf("%f",&x);
    printf("Введите переменную y:");
    scanf("%f",&y);
    printf("Введите переменную z:");
    scanf("%f",&z);
    a=exp(fabs(x-y))*pow(fabs(x-y),x+y);
    b=atan(x)+atan(z);
    c=pow(pow(x,6)+pow(log(y),2),1/3);
    s=a/b+c;
    printf("%f",s);
return 0;

}
