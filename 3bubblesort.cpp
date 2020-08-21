#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int i, j, a[10], temp;
	printf("Enter 10 elements for array:\n");
	//scanf("%s", a); <--Why did sir write this. It couldnt work. Even if it got scanned, while printing we will have to use string operation. Also I don't know if sorting will be possible in a string.//
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	/*
	int i, j, a[10]={1,2,3,4,5,6,7,8,9,10}, temp;
	*/
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			/*
			if(a[j]>a[j+1])
			{
				a[j]=(a[j]+a[j+1]);
				a[j+1]=(a[j]-a[j+1]);
				a[j]=(a[j]-a[j+1])/2;
				a[j]=(a[j]+a[j+1])/2;
			}
			*/
		}
	}
	printf("The sorted elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t", a[i]);
	}
}
				
				
