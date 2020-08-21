#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*n1, *n2, *n3, *start, *ptr;
int main()
{
	int item;
	n1=(struct node*)malloc(sizeof(struct node));
	n2=(struct node*)malloc(sizeof(struct node));
	n3=(struct node*)malloc(sizeof(struct node));
	n1->info=10;
	n2->info=20;
	n3->info=30;
	n1->link=n2;
	n2->link=n3;
	n3->link=NULL;
	start=n1;
	//link list traversal: sorted
	ptr=start;
	printf("\nEnter item= ");
	scanf("%d", &item);
	while(ptr!=NULL)
	{
		if(item==ptr->info)
		{
			printf("Successful.");
			exit(0);
		}
		else if(item<ptr->info)
		{
			printf("Unsuccessful.");
			exit(0);
		}
		else
			ptr=ptr->link;
	}
	printf("Unsuccessful.");
}
