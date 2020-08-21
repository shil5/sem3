#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*n1, *n2, *n3, *new_node, *start, *ptr;
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
	//Inserting new node in the middle (after n2, say)
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->info=50;
	ptr=start;//we arrive at n1
	for(int i=1; i<2; i++)
	{
		ptr=ptr->link;
	}
	//we arrive at n2
	new_node->link=ptr->link;
	ptr->link=new_node;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->info);
		ptr=ptr->link;
	}
	getch();
}
