 #include<stdio.h>

void main(void) 
{
  int i = 0;
  int n,k,sum1,sum2;
  
  	printf("      vvedite chislo elementov \n!_____________________________________!\n            ");
  		scanf("%d",&n);
  		
  int a[n];
  sum1=0;
  sum2=0;
  
  	printf("      vvedite massiv a \n!_____________________________________!\n            ");
  
  for (i;i<n;i++) 
  {
  	printf("\n            ");
  		scanf("%d",&a[i]);
  }
  
  	printf("\n!_____________________________________!\n       vvedite k \n!_____________________________________!\n            ");
  		scanf("%d",&k);
  
  for (i;i<k;i++) 
  {
  		sum1+=a[i];
  }
  
  i=k+1;
  for (i;i<n;i++) 
  {
		sum2+=a;
  }
  
  if (sum1>sum2) printf(">>SUMMA OT 1 DO K BOL'SHE(+)<<");
  else printf(">>SUMMA OT 1 DO K MEN'SHE(-)<<");
}

