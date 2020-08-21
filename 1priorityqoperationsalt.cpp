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
	int n, p;
	printf("\nEnter No. and Priority (1 or 2):\n");
	for(int i=0; i<12; i++)
	{	
		printf("\nScan[%d]:",i+1);
		scanf("%d %d", &n, &p);
		insert(n,p);
		display();
	}
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
			printf(" Underflow in Q2 too.");
			return 0;//reason for 0 at the end in output.
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
	printf("Q1:");
	for(i=f1; i<=r1; i++)
	{
		printf("%d\t", Q1[i]);
	}
	printf("Q2:");
	for(i=f2; i<=r2; i++)
	{
		printf("%d\t", Q2[i]);
	}
}

