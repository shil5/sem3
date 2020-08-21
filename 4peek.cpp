#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;
void push(int);
int peek();
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("The topmost element is: %d", peek());
}
void push(int item)
{
	if(top>=4)
	{
		printf("Overflow.\n");
		return;
	}
	top++;
	stack[top]=item;
}
int peek()
{
	return(stack[top]);
}
