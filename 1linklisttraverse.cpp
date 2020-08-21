#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int info;
	struct node *link;
}*n1, *n2, *n3, *start, *ptr;
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
	//link list traverse
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->info);
		ptr=ptr->link;
	}
}
