#include<iostream>
using namespace std;
struct node
{
	node* left;
	node* right;
	int info;
}*root,*loc=NULL,*par=NULL;
void find(int item)
{
	node* ptr=root;
	node* save=NULL;
	while(ptr!=NULL)
	{
		if(ptr->info==item)
		{
			loc=ptr;
			par=save;
			return;
		}
		else if(item<(ptr->info))
		{
			save=ptr;		
			ptr=ptr->left;
		}
		else
		{
			save=ptr;
			ptr=ptr->right;
		}
	}
	loc=ptr;
	par=save;
	return;
}
void insert(int item)
{
	find(item);
	if(loc!=NULL)
	{
		cout<<"item already exists";
		return;
	}
	node* n= new node;
	n->info=item;
	n->left=NULL;
	n->right=NULL;
	 if(par==NULL)
	 root=n;
	 else if(item<par->info)
	 par->left=n;
	 else
	 par->right=n;
	 return;
}
void inorder(node* ptr=root)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->info<<endl;
		inorder(ptr->right);
	}
}
void ances(int item)
{
	node * ptr=root;
	if (item==root->info)
	{
		cout<<"No ancestors"<<endl;
		cout<<"Descendents:"<<endl;
		inorder();
		return;
	}
	else
	{
		cout<<"Ancestors:"<<endl;
		while(item!=ptr->info)
		{
		cout<<ptr->info<<endl;
		if(item<ptr->info)
		ptr=ptr->left;
		else
		ptr=ptr->right;
		}
		node * p=ptr;
		cout<<"Descendants:"<<endl;
		while(p->left!=NULL||ptr->right!=NULL)
		{
		p=p->left;
		ptr=ptr->right;
		cout<<ptr->info<<endl;
		cout<<p->info<<endl;
		}
	}
}
void leaf(node* ptr=root)
{
	if(ptr!=NULL)
	{
		leaf(ptr->left);
		if(ptr->left==NULL && ptr->right==NULL)
		cout<<ptr->info<<endl;
		leaf(ptr->right);
	}
}

int main()
{
	insert(48);
	insert(68);
	insert(11);
	insert(93);
	insert(2);
	insert(75);
	insert(62);
	insert(38);
	insert(21);
	insert(36);
	insert(111);
	insert(102);
	ances(48);
	cout<<"------------------------"<<endl;
	ances(11);
	cout<<"------------------------"<<endl;
	ances(102);
	cout<<"------------------------"<<endl;
	cout<<"Leaf Nodes:"<<endl;
	leaf();
}


