#include<stdio.h>
#define n 8
int main()
{
	int a[n],i,j,k;
	int b[n],T,F;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		if(a[j]>a[j+1])
		{
			k=a[j]; a[j]=a[j+1]; a[j+1]=k;
		}
	}
	for(i=0;i<n;i++)
	   	printf("%5d",a[i]);
      printf("\n");
     
	   for(i=0;i<n;i++)
{	if(a[i]%2==0)
	
		b[i]='T';
	else 
	   b[i]='F';
	   printf("%5d",b[i]);
    printf("\n");
}
}
