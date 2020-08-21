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
	typedef struct node N;//Clearly, the compiler is understanding and is able to differentiate what "struct node" is...wrna struct node toh 2 words h...error hota.
	s1=(N*)malloc(sizeof(N));
	s1->data=10;
	s1->ptr=s2;
	s2=(N*)malloc(sizeof(N));
	s2->data=20;
	s2->ptr=NULL;
	printf("%d, \t%d", s1->data, s2->data);
}
