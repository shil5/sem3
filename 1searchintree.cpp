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
	struct node *newnode;//Note 1: See line 10 comment. //Note 2:Instead of newnode, we could have also written temp.
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node * insert(struct node *r, int key)//I guess * r OR *r either must be correct.//U can also replace r by root.
{
	if(r==NULL)
		return createnode(key);
	if(key<r->data)
		r->left=insert(r->left,key);
	if(key>r->data)//OR write: "else" simply.
		r->right=insert(r->right,key);
	return r;//Later Sir added. Find reason. Explain.
}
//I am just using one of in/pre/post order insertion functions, as their use has also been illustrated in 1treeinsertion.cpp file.
void inorder(struct node *r)
{
	if(r==NULL)
		return;
	inorder(r->left);
	printf("%d  ", r->data);
	inorder(r->right);	
}
int search(struct node *root, int key)
{
	if(root==NULL)
		return 0;
	else if(key==root->data)
		return 1;
	else if(key<root->data)
		return search(root->left, key);
	else 
		return search(root->right, key);	
}
int main()
{
	int p;
	struct node *root=NULL;
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,20);
	root=insert(root,7);
	root=insert(root,2);
	root=insert(root,6);
	root=insert(root,18);
	root=insert(root,9);
	inorder(root);
	printf("\n");
	p=search(root,2);
	if(p==1)
		printf("Found.");
	else
		printf("Not found.");
}
