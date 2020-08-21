#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int  stack1[5];
int  stack2[5];
int top1=-1;
void push1(int);
int pop1();
int top2=-1;
void push2(int);
int pop2();
int main()
{
	push1(10);
	push1(20);
	push1(30);
	push1(40);
	push1(50);
	push2(pop1());
	push2(pop1());
	push2(pop1());
	push2(pop1());
	push2(pop1());
	printf("%d ",pop2());
	printf("%d ",pop2());
	printf("%d ",pop2());
	printf("%d ",pop2());
	printf("%d ",pop2());
	printf("%d ",pop2());
}
void push1(int item)
{
	if(top1>=4)
	{
		printf("Overflow.\n");
		exit(0);
	}
	top1++;
	stack1[top1]=item;
	printf("Item inserted.\t");
}
int pop1()
{
	int p;
	if(top1<=-1)
	{
		printf("Underflow.\n");
		exit(0);
    }
    p=stack1[top1];
	top1--;
	return(p);
}
void push2(int item)
{
	if(top2>=4)
	{
		printf("Overflow.\n");
		exit(0);
	}
	top2++;
	stack2[top2]=item;
	printf("Item inserted.\t");
}
int pop2()
{
	int p;
	if(top2<=-1)
	{
		printf("Underflow.\n");
		exit(0);
    }
    p=stack2[top2];
	top2--;
	return(p);
}
