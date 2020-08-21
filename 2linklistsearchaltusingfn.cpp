#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*n1, *n2, *n3, *start, *ptr;
void search();
int main()
{
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
	search();
	getch();
}
void search()
{
	int p;
	printf("\nEnter the number for search= ");
	scanf("%d", &p);
	ptr=start;
	while(ptr!=NULL)
	{
		if(p==ptr->info)
		{
			printf("Success.");
			return;
		}
		else
			ptr=ptr->link;
	}
	printf("Not found.");
}
