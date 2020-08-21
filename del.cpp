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
	struct node *temp;//See line 10 comment.
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert(struct node *r, int key)//I guess * r OR *r either must be correct.
{
	if(r==NULL)
		return ;
	if(key<r->data)
		insert(r->left,key);
	if(key>r->data)//OR write: "else" simply.
		insert(r->right,key);

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
int search(struct node *r)
{
	if(r==NULL)
		return 0;
	if(key==r->data)
		return 1;
	if(key<r->data)
		search(r->left);
	if(key>r->data)
		search(r->right);
}

int main()
{
	insert(root,10);
	insert(root,5);
	insert(root,20);
	insert(root,7);
	preorder(root);
	printf("\n");//can omit.
	postorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
}
