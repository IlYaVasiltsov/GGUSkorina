#include<stdio.h>

void main(void) 
{
	int i = 0,n;
	
		printf("vvedite chislo \n");
			scanf("%d",&n);
		
	int a[n];
	for (i;i<n;i++)
	
			scanf("%d",&a[i]);
	
	int min = a[0];
	int max = a[0];
	int min_i = 0;
	int max_i = 0;
	i=1;
	  
	for (i;i<n;i++)  
      if (min>a[i]) {
      	min = a[i];
      	min_i=i;
      	printf("%d",i);
	  }  
    i=1;
    a[min_i]=0;
    for (i;i<n;i++)
      if (max<a[i]) {
      	max = a[i];
		max_i=i;      	
	  }
	i=0;
    a[max_i]=0;
    for (i;i<n;i++)
	  printf(" %d",a[i]);
}
