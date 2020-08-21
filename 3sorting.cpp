#include<stdio.h>
#include<conio.h>
int queue[5];
int front=-1;
int rear=-1;
void insert(int);
void display();
void sort();
int main()
{
	insert(-16);
	display();
	insert(8);
	display();
	insert(-4);
	display();
	insert(15);
	display();
	insert(10);
	sort();
	display();
	
}
void insert(int item)
{
	if(rear==4)
	{
		printf("Overflow");
		return;
	}
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	//sort(); not here
}
void display()
{
	int i;
	for(i=0; i<=4; i++)
	{
		printf("%d\t", queue[i]);
	}
	printf("\n");
}
void sort()
{
	int t, i, j;
	for(i=0;i<3;i++)//i<4 or i<3. verify.
	{
		for(j=i+1;j<4;j++)
			{
				if(queue[i]>queue[j])
				{
					t=queue[i];
					queue[i]=queue[j];
					queue[j]=t;
				}
			}
	}
}
