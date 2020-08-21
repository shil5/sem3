#include<stdio.h>
#include<conio.h>
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
	push(60);
}
void push(int item)
{
	if(top>=4)
	{
		printf("Overflow.\n");
		getch(); //return(-1); doubt
	}
	top++;
	stack[top]=item;
	printf("Item inserted.\n");
}
