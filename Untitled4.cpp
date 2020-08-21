#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int i, j, a[10], temp;
	printf("Enter 10 elements for array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<10;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("The sorted elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t", a[i]);
	}
}
				
				
