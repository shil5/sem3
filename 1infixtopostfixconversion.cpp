#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char stack[50];
int top=-1;
void push(char);
char pop();
int main()
{
	char t, k, infix[20], post[20];
	int i=0, j=0; 
	printf("Enter the infix string:\n");
	scanf("%s", infix);
	while(infix[i]!='\0')
	{
		t=infix[i];
		if(t=='('||t=='+'||t=='-'||t=='*'||t=='/')
			push(t);
		else if(t==')')
		{
			k=pop();
			post[j]=k;
			j++;
			top--;
		}
		else
		{
			post[j]=t;
			j++;
		}
		i++;
	}
	post[j]='\0';
	printf("%s", post);
}
void push(char p)
{
	if(top==50)
	{
		printf("Overflow");
		exit(0);
	}
	else
	{
		top++;
		stack[top]=p;
	}
}
char pop()
{
	char t1;
	if(top==-1)
	{
		printf("Underflow");
		exit(0);
	}
	else
	{
		t1=stack[top];
		top--;
		return t1;
	}
}
