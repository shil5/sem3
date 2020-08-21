#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int i, beg=0, mid, n, end, key, x[100];
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
	printf("\nEnter element you want to search:");//(key)
	scanf("%d", &key);
	end=n-1;
	for(i=0;i<=end;i++)
	{
		mid=int((beg+end)/2);
		if(x[mid]==key)
		{
			printf("Found key(%d) at location %d.\n", key, mid+1);
			exit(0);//return 0;
		}
		else if(key>x[mid])
			beg=mid+1;
		else
			end=mid-1;
	}
	printf("Not found.");
}

