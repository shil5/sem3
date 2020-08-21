#include<stdio.h>
#include<conio.h>
int stack[5];
int top=-1;
void push(int);
int pop();
int isempty();
int main()
{
	printf("%d", isempty());//1. top=-1
	push(10);//top=0
	printf("\n%d", isempty());//0
	push(20);//top=1
	printf("\t%d", isempty());//0
	push(30);//top=2
	printf("\t%d", isempty());//0
	push(40);//top=3
	printf("\t%d", isempty());//0
	push(50);//top=4=(max.)
	printf("\t%d", isempty());//0
	pop();//50 out. top=3
	printf("\n%d", isempty());//0
	pop();//40 out. top=2
	printf("\t%d", isempty());//0
	pop();//30 out. top=1
	printf("\t%d", isempty());//0
	pop();//20 out. top=0
	printf("\t%d", isempty());//0
	pop();//10 out. top=-1
	printf("\t%d", isempty());//1
	pop();//Underflow, since top=-1
	printf("\t%d", isempty());//1
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
