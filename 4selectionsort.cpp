#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int i, j, a[10], tag, temp;
	printf("Enter 10 elements for array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	/*
	int i, j, a[10]={1,2,3,4,5,6,7,8,9,10}, temp;
	*/
	for(i=0;i<9;i++)
	{
		tag=i;
		for(j=i+1;j<10;j++)
		{
			if(a[tag]>a[j])
			{
				tag=j;
			}
		}
		if(tag!=i)
		{
			temp=a[i];
			a[i]=a[tag];
			a[tag]=temp;
		}
			/* Do necessary corrections below:
			if(a[i]>a[j])
			{
				a[j]=(a[j]+a[j+1]);
				a[j+1]=(a[j]-a[j+1]);
				a[j]=(a[j]-a[j+1])/2;
				a[j]=(a[j]+a[j+1])/2;
			}
			*/
	}
	printf("The sorted elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t", a[i]);
	}
}
