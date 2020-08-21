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
	printf("\n%d\t", delete1());//Use loop here if u want.
	printf("%d\t", delete1());
	printf("%d\t", delete1());
	printf("%d\t", delete1());
	printf("%d", delete1());
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
	rear++;
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
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front++;
	}
	return(p);
}
void display()
{
	int i;
	for(i=front; i<=rear; i++)
	{
		printf("%d\t", queue[i]);
	}
}

