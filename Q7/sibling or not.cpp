#include<iostream>
using namespace std;
void Sibling();
void preorder(int);
void insert(int);
struct node
{
	int info;
	node *left;
	node *right;
	
}*root=NULL;

void preorder(node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->info<<"\t";
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void insert(int item)
{
	node *n=new node;
	n->info=item;
	n->left=NULL;
	n->right=NULL;
	node *ptr=root;
	node *s=NULL;
	if(root==NULL)
	{
		root=n;
	}
	else 
	{
		while(ptr!=NULL)
		{
			if(item<ptr->info)
			{
				s=ptr;
				ptr=ptr->left;
				if(s->left==NULL)
				{
					s->left=n;	
				}
			}
			else
			{
				s=ptr;
				ptr=ptr->right;
				if(s->right==NULL)
				{
					s->right=n;	
				}
			}
		}
	}
	 	
}

 
 int level(node *root, node *ptr, int lev)
{
    int l;
    if(root!=NULL)
    {
	
    if (root == ptr) 
	 return lev;
    }
 
    
    l = level(root->left, ptr, lev+1);
    if (l != 0) 
	{
	    return l;
	}
	else
	{
    return level(root->right, ptr, lev+1);
    }


void Sibling(node *root, node *a, node *b)
{
    if (root!=NULL) 
 	{
	 if(root->left==a && root->right==b && root->left==b && root->right==a)
     Sibling(root->left, a, b);
    Sibling(root->right, a, b);
	}
}

int Cousin(node *root, node *a, node *b)
{
    
    if ((level(root,a,1) == level(root,b,1)) && !(Sibling(root,a,b)))
        return 1;
    else 
	return 0;
}

int main()
{

   int item,item1,i;
	cout<<"enter elements";
	for(i=0;i<7;i++)
	{
		cin>>item;
		insert(item);
	}
	preorder(root);
	
	
	

    return 0;
}


