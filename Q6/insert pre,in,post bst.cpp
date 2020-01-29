#include<iostream>
using namespace std;
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
		ptr=root;
		cout<<ptr->info;
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void inorder(node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->info;
		inorder(ptr->right);
	}
}


void postorder(node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->info;
	}
}


void insert(node *ptr,int item)
{
	/*node *n=new node;
	n->info=item;
	n->left=n->right=NULL;
	if(ptr==NULL)
	{
		ptr=n;
	}
    if(item<ptr->info)
	{
		ptr->left=insert(ptr->left,item);
	}
	else(item>ptr->info)
	{
		ptr->right=insert(ptr->right,item);
	}
	
	return ptr;
	*/
	node *p=NULL;
	node *par=root;
	node *n=new node;
	n->info=item;
	n->right=NULL;
	n->left=NULL;
	if(par==NULL)
	{
		root=n;		
	 } 
	 else 
	 {
	 	while(par!=NULL)
	 	{ 
	 if(item<par->info)
	 {
	 	p=par;
	 	par=par->left;
	 	if(p->left==NULL)
	 	{
	 		p->left=n;
		 }
	 }
	 else
	 {
	 	p=par;
	 	par=par->right;
	 	if(p->right==NULL)
	 	p->right=n;
	 }
        }
     }
}



int main()
{
/*	insert(root,5);
	insert(root,7);
	insert(root,21);
	insert(root,25);
	insert(root,12);
	insert(root,16);
	preorder(root);
	inorder(root);
	postorder(root);
*/
node* root = NULL;
	root=insert(root,'M'); root = insert(root,'B');
	root=insert(root,'Q'); root = insert(root,'Z'); 
	root=insert(root,'A'); root = insert(root,'C');
	//Print Nodes in Preorder. 
	cout<<"Preorder: ";
	preorder(root);
	cout<<"\n";
	//Print Nodes in Inorder
	cout<<"Inorder: ";
	inorder(root);
	cout<<"\n";
	//Print Nodes in Postorder
	cout<<"Postorder: ";
	postorder(root);
	cout<<"\n";	
	
	
}
