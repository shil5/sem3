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
	//link list search
	ptr=start;
	printf("\nEnter the number for search= ");
	scanf("%d", &item);
	while(ptr!=NULL)
	{
		if(item==ptr->info)
		{
			printf("Success.");
			exit(0);
		}
		else
			ptr=ptr->link;
	}
	printf("Not found.");
}
