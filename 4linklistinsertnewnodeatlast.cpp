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
	//Creation of newnode:
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->info=50;
	new_node->link=NULL;
	//Inserting new node at the last:
		//Going to last node throgh link traversal:
	ptr=start;
	while(ptr->link!=NULL)//last node
	{
		ptr=ptr->link;
	}
	ptr->link=new_node;
	ptr=start;
	while(ptr!=NULL)//link of last node-->ptr:
	{
		printf("%d\t", ptr->info);
		ptr=ptr->link;
	}
	getch();
}
