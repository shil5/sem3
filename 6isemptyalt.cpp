#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;
void push(int);
int pop();
int isempty();
int main()
{
	int i, p;
	printf("%d", isempty());
	for(i=0; i<5; i++)
	{
		printf("\t Element[%d]= ", i+1);
		scanf("%d", &p);
		push(p);
		printf("%d", isempty());
	}
	for(i=0; i<=5; i++)
	{
		pop();
		printf("\t%d", isempty());
	}
}
void push(int item)
{
	if(top>=4)
	{
		printf("\nOverflow.\n");
		return;
	}
	top++;
	stack[top]=item;
}
int pop()
{
	int p;
	if(top<=-1)
	{
		printf("\nUnderflow.");
		return 0;
	}
	p=stack[top];
	top--;
	return (p);
}
int isempty()
{
	if(top==-1)
	return(1);
	else
	return(0);
}
