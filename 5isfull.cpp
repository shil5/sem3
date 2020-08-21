#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;
void push(int);
int isfull();
int main()
{
	printf("%d", isfull());
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("\n%d", isfull());
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
int isfull()
{
	if(top==4)
	return(1);
	else
	return(0);
}
