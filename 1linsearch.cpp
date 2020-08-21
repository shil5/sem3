//The program has been so created that you can alternate between the two alterative takes on LINEAR SORTING.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
/*
{
	int i, key, x[10]={10,50,8,6,23,4,9,31,1,14};
	printf("Enter element you want to search:");
	scanf("%d", &key);
	for(i=0;i<10;i++)
	{
		if(key==x[i])
		{
			printf("Element found.");
			return 0;
		}
	}
	printf("Not found.");
}
*/
{
	int flag=0, i, key, x[10]={10,50,8,6,23,4,9,31,1,14};
	printf("Enter element you want to search:\t");
	scanf("%d", &key);
	for(i=0;i<10;i++)
	{
		if(key==x[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Found.");
	else
		printf("Not Found.");
}

