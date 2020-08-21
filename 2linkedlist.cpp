#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *ptr;//ptr memory is not known
}*s1, *s2;
int main()
{
	//typedef struct node N; Then replace "struct node" wirth N.
	s1=(struct node*)malloc(sizeof(struct node));
	s1->data=10;
	s1->ptr=s2;
	s2=(struct node*)malloc(sizeof(struct node));
	s2->data=20;
	s2->ptr=NULL;
	printf("%d, \t%d", s1->data, s2->data);
}
