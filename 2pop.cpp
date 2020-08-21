#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[5];
int top=-1;
void push(int);
int pop();
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("%d ",pop());
	printf("%d ",pop());
	printf("%d ",pop());
	printf("%d ",pop());
	printf("%d ",pop());
	printf("%d ",pop());
}
void push(int item)
{
	if(top>=4)
	{
		printf("Overflow.");
		exit(0);
	}
	top++;
	stack[top]=item;
	printf("Item inserted.");
}
int pop()
{
	int p;
	if(top<=-1)
	{
		printf("Underflow");
		exit(0);
    }
    p=stack[top];
	top--;
	return(p);
}
