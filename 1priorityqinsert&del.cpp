//Many mistakes. See the alternate program: 1priorityqoperationsalt.cpp
#include<stdio.h>
#include<conio.h>
int Q1[5];
int Q2[5];
int f1=-1;
int r1=-1;
int f2=-1;
int r2=-1;
void insert(int, int);
void display();
int deletefn();
int main()
{
	insert(10,1);
	display();
	insert(20,1);
	display();
	insert(30,2);
	display();
	insert(40,1);
	display();
	insert(50,2);
	display();
	insert(60,2);
	display();
	insert(80,1);
	display();
	insert(90,2);
	display();
	insert(100,2);
	display();
	insert(110,1);//Fine
	display();
	insert(120,2);
	display();
	insert(130,2);
	display();
	insert(140,1);
	display();
	printf("\n%d\t", deletefn());
	display();
	for(int i=0; i<10; i++)
	{
		printf("%d\t", deletefn());
	}
	display();
}
void insert(int item, int p)
{
	if(p==1)
	{
		if(f1==0 && r1==4)
		{
			printf("\nOverflow in Q1.");
			return;
		}
		if(f1==-1 && r1==-1)
		{
			f1=0;
			r1=0;
		}
		else
		{
			r1++;
		}
		Q1[r1]=item;
	}
	else
	{
		if(f2==0 && r2==4)
		{
			printf("\nOverflow in Q2.");
			return;
		}
		if(f2==-1 && r2==-1)
		{
			f2=0;
			r2=0;
		}
		else
		{
			f2++;
			r2++;
		}
		Q2[r2]=item;
	}
}
int deletefn()
{
	int t;
	if(f1==-1 && r1==-1)
	{
		printf("\nUnderflow in Q1.");
		if(f2==-1 && r2==-1)
		{
			printf("\nUnderflow in Q2 too.");
			return 0;
		}
		t=Q2[f2];
		if(f2==r2)
		{
			f2=-1;
			r2=-1;
		}
		else
		{
			f2++;
		}
	}
	else
	{
		t=Q1[f1];
		if(f1==r1)
		{
			f1=-1;
			r1=-1;
		}
		else
		{
			f1++;
		}
	}
	return t;
}
void display()
{
	int i;
	for(i=f1; i<=r1; i++)
	{
		printf("%d\t", Q1[i]);
	}
	for(i=f2; i<=r2; i++)
	{
		printf("\n%d\t", Q2[i]);
	}
}

