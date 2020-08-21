#include<stdio.h>
#include<conio.h>
int queue[5];
int front=-1;
int rear=-1;
void insert(int);
int delete1();
void display();
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	display();
	printf("\n%d\t", delete1());
	printf("%d\t", delete1());
	printf("%d\n", delete1());
	insert(60);
	insert(70);
	insert(80);
	display();
	printf("\n");
	printf("%d\t", delete1());
	printf("%d\n", delete1());
	display();
}
void insert(int item)
{
	if((front==0 && rear==4)||(front==rear+1))
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
}
int delete1()
{
	int p;
	if(front==-1 && rear==-1)
	{
		printf("Underflow");
		return 0;
	}
	p=queue[front];
	queue[front]=0;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==4)
		front=0;
	else
	{
		front++;
	}
	return(p);
}
void display()
{
	int i;
	if(front<=rear)
	{
		for(i=front; i<=rear; i++)
		{
			printf("%d\t", queue[i]);
		}
	}
	else
	{
		for(i=front; i<=4; i++)
		{
			printf("%d\t", queue[i]);
		}
		for(i=0; i<=rear; i++)
		{
			printf("%d\t", queue[i]);
		}
	}
}

