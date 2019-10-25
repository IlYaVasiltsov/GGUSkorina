#include <math.h>
#include <stdio.h>
int main ()
{
    int n;
printf("Введите 1=>+,2=>-,3=>/,4=>* \n");


scanf("%i", &n);
switch (n) {
case 1: printf("7+7=14");
break;
case 2: printf("7-7=0");
break;
case 3: printf ("7/7=1");
break;
case 4: printf ("7*7=49");
break;
}
return 0;
}
