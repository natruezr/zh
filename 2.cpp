#include<stdio.h>
#define n 8
int main()
{  int a[n],i,j,k,x;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
	k=i;
	for(j=i+1;j<n;j++)
	if(a[j]<a[k])
	k=j;
	if(k!=i)
	{
		x=a[k]; a[k]=a[i]; a[i]=x;
	}
		
}
for(i=0;i<n;i++)
printf("%5d",a[i]);
printf("\n");
	
	
}
