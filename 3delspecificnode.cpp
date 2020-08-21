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
	int i, p, search, item, count=0;
	printf("How many nodes? ");
	scanf("%d", &p);
	for(int i=1; i<=p; i++)
	{
		n[i]=(struct node*)malloc(sizeof(struct node));
	}
	for(int i=1; i<=p; i++)
	{
		printf("Value for %d=", i);//User has to make sure na ki 2 values arnt same.??
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
	//Asking user to enter value.
	printf("\nEnter Node's value which you want to delete=");
	scanf("%d", &search);
	//When there are NO nodes.
	if(start==NULL)
	{
		printf("Underflow.");
		exit(0);
	}
	//Now, checking if value is present or not.
	ptr=start;
	while(ptr!=NULL)
	{
		if(search==ptr->info)
		{
			printf("Found.");
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
				while(ptr->info!=search)
				{
					pptr=ptr;
					ptr=ptr->link;
				}
				pptr->link=ptr->link;
				printf("Deleted: %d.", ptr->info);
				free(ptr);
				//return 0;
			}
			//Again display all.
			ptr=start;
			printf("\nFinal link list: ");
			while(ptr!=NULL)
			{
				printf("%d\t", ptr->info);
				ptr=ptr->link;
			}
			if(ptr==NULL)
				printf("0");
			exit(0);
		}
		else
			ptr=ptr->link;
	}
	printf("Not found & can't be deleted.");
	return 0;
}
