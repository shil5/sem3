#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int i, n, key, x[100];
	printf("How many elements are reqd.?\n");
	scanf("%d", &n);
	printf("\nEnter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &x[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t", x[i]);
	}
	printf("\nEnter element you want to search:");
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

