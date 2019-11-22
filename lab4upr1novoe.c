#include <stdio.h>
#include <stdlib.h>


int main (){
    
    int a[12],min ,max;
    for (int i=0;i<12;i++)
    {a[i]=rand()%11;
    
    printf("a[%i]=%i \n",i,a[i]);
        
    }
    min=a[0];
    for(int i=1;i<12;i++){
        if (min>a[i]) min=a[i];
    }
    max=a[0];
    for(int i=1;i<12;i++){
        if (max<a[i]) max=a[i];
    }
    printf("min=%i; max=%i",min,max);
    
    return 0;
}
