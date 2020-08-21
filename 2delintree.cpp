//We could have also used both search and delete functions together. then we search for it. If found, we use delete fn. otherwise, delete option itself is not undertaken.
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
	if(key<=r->data)
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
int findmin(struct node *root)
{
	if(root==NULL)
		return 0;
	if(root->left!=NULL)
		return findmin(root->left);
	return root->data;
}
struct node * deletefn(struct node *root, int data)
{
	if(root==NULL)
		return 0;
	if(data<root->data) //Look at the differences between "else if" and "if" and look at where they can come into use. also note "return in prvs line.
		root->left=deletefn(root->left, data);
	else if(data>root->data)
		root->right=deletefn(root->right, data);
	else
	{
			//Case I: NO CHILD.
			if(root->left==NULL && root->right==NULL)
			{
				free(root);
				root=NULL;//If for eg. 10 is not present in the tree, due to this line, root becomes NULL, so see  line: .
			}
			//Case II: ONLY RIGHT CHILD IS PRESENT.
			else if(root->left==NULL)
			{
				struct node *temp=root;
				root=root->right;
				free(temp);
			}
			//Case III: ONLY LEFT CHILD IS PRESENT.
			else if(root->right==NULL)
			{
				struct node *temp=root;
				root=root->left;
				free(temp);
			}
			else
			{
				int i=findmin(root->right);
				root->data=i;
				root->right=deletefn(root->right, i);
			}
			return root;
	}
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
	root=insert(root,1);
	root=insert(root,100);
	inorder(root);
	printf("\n");
	root=deletefn(root,18);
	if(root==NULL)
		printf("Deleted.");
	inorder(root);
}
