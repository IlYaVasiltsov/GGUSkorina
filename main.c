#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(void) 
{
	int M,N,i,j,p,zero,k,**pA,*pB,sum,max;
	
	printf("Vvedite razmernost' matrici\n");
	scanf("%d",&M);
	N=M;
	pA=(int**)malloc(M*sizeof(int*));
	if (pA==NULL)
	{
		printf("Oshibka videlenia pamyati");
		return;
	}
	
	for (i=0;i<M;i++)
	{
		pA[i]=(int*)malloc(N*sizeof(int));
		if (pA[i]==NULL)
		{
			printf("Oshibka videlenia pamyati");
			return;
		}	
	}
		
	printf("Vvedite razmernost' matrici\n");
	for(i=0;i<M;i++)
	for(j=0;j<N;j++)
		{
			printf("A[%d][%d]=", i,j);
			scanf("%d",&pA[i][j]);
		}
		
	printf("Ishodnaya matrica\n");
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		printf("%4d",pA[i][j]);
		printf("\n");
	}
	
	for(i=0;i<M;i++)
	{
	zero=1;
	for(j=0;j<N;j++)
	if (pA[i][j]<0)
	zero=0;
	if (zero==1)
		{
			p=1;
			for(j=0;j<N;j++)
			p=p*pA[i][j];
			
		printf("Proezvedenie elementov stroki %d ravno %d \n", i,p);
		}	
	
	}
	
	k=2*(M-2);
	pB=(int*)malloc(k*sizeof(int));
		if (pB==NULL)
	{
			printf("Oshibka videleniya pamyati");
			return;
	}	

	for (j=1;j<=(M-2);j++)
	{
		sum=0;
		for (i=0;i<(M-j);i++)
		sum=sum+pA[i][i+j];
		
		pB[j-1]=sum;
	}
	
    for(j=1;j<=(M-2);j++)
	{
		sum=0;
		for(i=0;i<(M-j);i++)
		sum=sum+pA[i+j][i];
		pB[j-1+k/2]=sum;
	}
	
// Определение максимального элемента массива
max=pB[0];
for(i=0;i<k;i++)
if (pB[i]>max)
max=pB[i];

printf("Maksimum sredi elementov diagonaley raven %d \n",max);

free(pB);
for(i=0;i<M;i++)
free(pA[i]);
free(pA);
}
