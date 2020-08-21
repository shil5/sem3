#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*n[100], *start, *ptr;
int main()
{
	int i, p, item, count=0;
	printf("How many nodes?\t");
	scanf("%d", &p);
	for(i=1; i<=p; i++)
	{
		n[i]=(struct node*)malloc(sizeof(struct node));
	}
	for(i=1; i<=p; i++)
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
	//We count total no. of nodes:
	ptr=start;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->link;
	}
	//When no. of nodes = 1:
	if(count==1)
	{
		ptr=start;
		printf("Deleted: %d.", ptr->info);
		start=NULL;//The prvs two stmts can be interchngd, i think.
		free(ptr);
	}
	//ALT i guess: for(ptr=start;ptr==NULL;ptr=ptr->link) { };
	//When no. of nodes > 1:
	else
	{		
		ptr=start;
		start=ptr->link;
		printf("Deleted: %d.\n", ptr->info);
		free(ptr);
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->info);
		ptr=ptr->link;
	}
	getch();
}
