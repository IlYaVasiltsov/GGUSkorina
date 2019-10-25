#include <math.h>
#include <stdio.h>
void main ()
{
    int a,b,c,d;

     
     for (int a=400 ; a<=500; a++){
     b=a/100;
     c=a/10 %10;
     d=a%10 ;
     if (b+c+d==9 && ((d*100+c*10+b)*47/36==a))
        printf(" Это число %d ",a);    
     
}
    
    
    
    
    
    
}


