#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;	
}*root=NULL;//See line 13. Instead of that we cud hv written here: "*temp;"
struct node * createnode(int value)
{
	struct node *temp;//Note 1: See line 10 comment. //Note 2:Instead of temp, we could have also written newnode.
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node * insert(struct node *r, int key)//I guess * r OR *r either must be correct.
{
	if(r==NULL)
		return createnode(key);
	if(key<r->data)
		r->left=insert(r->left,key);
	if(key>r->data)//OR write: "else" simply.
		r->right=insert(r->right,key);
	return r;//Later Sir added. Find reason. Explain.
}
void preorder(struct node *r)
{
	if(r==NULL)
		return;
	printf("%d  ", r->data);
	preorder(r->left);
	preorder(r->right);	
}
void postorder(struct node *r)
{
	if(r==NULL)
		return;
	postorder(r->left);
	postorder(r->right);	
	printf("%d  ", r->data);
}
void inorder(struct node *r)
{
	if(r==NULL)
		return;
	inorder(r->left);
	printf("%d  ", r->data);
	inorder(r->right);	
}
int main()
{
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,20);
	root=insert(root,7);
	preorder(root);
	printf("\n");//can omit.
	postorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
}
