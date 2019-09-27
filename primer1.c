//#include <stdio.h>
#include <stdlib.h>
#include <math.h>   

int main(void) {

    float x,a,b,c,z;
    int m;
    printf("Введите переменную x>0:");
    scanf("%f",&x);
    printf("Введите целочисленную переменную m:");
    scanf("%d",&m);

    a=sqrt(x*x+m*m);
    b=tan(x)*tan(x);
    c=pow(x,m+1);
    z=b/a+c*a;
    printf("Вы ввели x:%0.3f , m:%d \n Результат : %5.3e",x,m,z);
return 0;

}
