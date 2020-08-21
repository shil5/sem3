#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[20];
int top=-1;
void push(int);
int pop();
int main()
{
	char t, post[20];
	int i=0, n1=0, n2=0; 
	printf("Enter the Postfix string:\n");
	scanf("%s", post);
	while(post[i]!='\0')
	{
		t=post[i];
		if(t=='+'||t=='-'||t=='*'||t=='/')
		{
			n2=pop();
			n1=pop();
			switch(t)
			{
				case '+': 
							push(n1+n2);
							break;
				case '-': 
							push(n1-n2);
							break;
				case '/': 
							push(n1/n2);
							break;
				case '*': 
							push(n1*n2);
							break;
				default:
					{
					}
			}
		}
		else
		{
			t=t-'0'; //	t=t-48; 
			push(t);
		}
		i++;
	}
	printf("%d", stack[top]);
}		
void push(int p)
{
	if(top==20)
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
int pop()
{
	int t1;
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
