//Task: Make it less complicated.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*n[100], *start, *pptr, *ptr;
int main()
{
	int i, p, item, count=0;
	printf("How many nodes? ");
	scanf("%d", &p);
	for(int i=1; i<=p; i++)
	{
		n[i]=(struct node*)malloc(sizeof(struct node));
	}
	for(int i=1; i<=p; i++)
	{
		printf("Value for %d=", i);
		scanf("%d", &item);
		n[i]->info=item;
		n[i]->link=n[i+1];
		if(i==p)
			n[i]->link=NULL;
	}
	start=n[1];
	//Display all.
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->info);
		ptr=ptr->link;
	}
	//When there are NO nodes.
	if(start==NULL)
	{
		printf("Underflow.");
		exit(0);
	}
	//When no. of nodes = 1:
	ptr=start;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->link;
	}
	if(count==1)
	{
		ptr=start;
		printf("Deleted: %d.", ptr->info);
		start=NULL;//The prvs two stmts can be interchngd, i think.
		free(ptr);
	}
	//ALT i guess: for(ptr=start;ptr==NULL;ptr->) { };
	//When no. of nodes > 1:
	else
	{		
		ptr=start;
		while(ptr->link!=NULL)//We don't write ptr!=NULL, bcz we dont want to make ptr NULL. We have to place ptr at last node.
		{
			pptr=ptr;
			ptr=ptr->link;
		}
		printf("Deleted: %d.", ptr->info);
		free(ptr);
		pptr->link=NULL;
	}
	getch();
}
