#include<iostream>
using namespace std;
typedef struct TREE
{
	int info;
	TREE *left;
	TREE *right;
}TREE;
TREE *start=NULL,*PAR=NULL;
typedef struct STACK
{
	TREE *n=NULL;
	int sign;
}STACK;
TREE *create()
{
	TREE *p=new TREE();
	//cout<<"Enter info\n";
	p->left=NULL;
	p->right=NULL;
	return p;
}
void insert(TREE *p,int item)
{
	p->info=item;
	if(start==NULL)
	{
		start=p;
		//cout<<"Root :"<<start->info<<endl;
	}
	else
	{
		TREE *n=start;
		while(1)
		{
			if((n->info)<item)
			{
				//cout<<"Right side of Tree\n";
				if((n->right)==NULL)
				{
					//cout<<"Right side of :"<<n->info<<endl;
					n->right=p;
					break;
				}
				else
				{
					//cout<<"INFO : "<<n->info<<endl;
					n=n->right;
				}
			}
			else
			{
				//cout<<"left side of Tree\n";
				if((n->left)==NULL)
				{
					//cout<<"Left side of :"<<n->info<<endl;
					n->left=p;
					break;
				}
				else
				{
					//cout<<"INFO : "<<n->info<<endl;
					n=n->left;
				}
			}
		}
	}
}
void PreorderRecursion(TREE *p)
{
	if(p==NULL)
	{
		return;
	}
	cout<<p->info<<" ";
	PreorderRecursion(p->left);
	PreorderRecursion(p->right);
}
void Preorder(TREE *p)
{
	int top=-1;
	STACK arr[100]; 
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		if(p->right!=NULL)
		{
			top=top+1;
			arr[top].n=p->right;
		}
		p=p->left;
		if(p==NULL)
		{
			if(top!=-1)
			{
				p=arr[top].n;
				top=top-1;
			}
		}
		
	}
}
void InorderRecursion(TREE *p)
{
	if(p==NULL)
	{
		return;
	}
	InorderRecursion(p->left);
	cout<<p->info<<" ";
	InorderRecursion(p->right);
}
void Inorder(TREE *p)
{
	int top=0;
	STACK ar[100];
	STEP1:
	while(p!=NULL)
	{
		top=top+1;
		ar[top].n=p;
		p=p->left;
	}
	p=ar[top].n;
	top=top-1;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		if(p->right!=NULL)
		{
			p=p->right;
			goto STEP1;
		}
		p=ar[top].n;
		top=top-1;
	}
}
void PostorderRecursion(TREE *p)
{
	if(p==NULL)
	{
		return;
	}
	PostorderRecursion(p->left);
	PostorderRecursion(p->right);	
	cout<<p->info<<" ";
}
void Postorder(TREE *p)
{
	int top=0;
	STACK ary[100];
	step2:
	while(p!=NULL)
	{
		top=top+1;
		ary[top].n=p;
		ary[top].sign=0;
		//cout<<"items "<<p->info<<endl;;
		if(p->right!=NULL)
		{
			top=top+1;
			TREE *k;
			ary[top].n=p->right;
			ary[top].sign=1;
			k=ary[top].n;
			//cout<<" Right Side "<<k->info<<endl;
			//cout<<"Sign of Addresss :"<<ary[top].sign<<endl;
		}
		p=p->left;
	}
	p=ary[top].n;
	int z=top;
	top=top-1;
	while(ary[z].sign==0)
	{
		//cout<<" sign 0 Block"<<endl;
		//cout<<"Sign of Addresss :"<<ary[z].sign<<endl;
		cout<<p->info<<" ";
		p=ary[top].n;
		z=top;
		top=top-1;
	}
	while(ary[z].sign==1)
	{
		//cout<<" sign 1 Block"<<endl;
		//cout<<"Sign of Addresss :"<<ary[z].sign<<endl;
		ary[top].sign=0;
		goto step2;
	}
}
TREE *search(TREE *p,int *find)
{
	int level=1,flag=0;
	while(p!=NULL)
	{
		if(*find==p->info)
		{
			flag=1;
			//cout<<"Element Found at height of : "<<level<<endl;
			return p;
			break;
		}
		if(*find>(p->info))
		{
			PAR=p;
			p=p->right;
			level++;
		}
		else
		{
			PAR=p;
			p=p->left;
			level++;
		}
	}
	if(flag==0)
	{
		cout<<"Element not found \n";
		return NULL;
	}
}
TREE *Successor(TREE *p)
{
	if(p->right!=NULL)
	{
		p=p->right;
		while(p->left!=NULL)
		{
			p=p->left;
		}
		return p;
	}
	else
	{
		return NULL;
	}
}
void deletion(TREE *p)
{
	if(p->left==NULL && p->right==NULL)
	{
		if(PAR->left==p)
		{
			PAR->left=NULL;
			p=NULL;
			delete p;
			cout<<"Deletion Successful\n";
			return;
		}
		else
		{
			PAR->right=NULL;
			p=NULL;
			delete p;
			cout<<"Deletion Successful\n";
			return;
		}
	}
	else if(p->left!=NULL && p->right==NULL)
	{
		if(PAR->left==p)
		{
			PAR->left=p->left;
			p->left=NULL;
			p=NULL;
			delete p;
			cout<<"Deletion Successful\n";
			return;
		}
		else
		{
			PAR->right=p->left;
			p->left=NULL;
			p=NULL;
			delete p;
			cout<<"Deletion Successful\n";
			return;
		}
	}
	else if(p->left==NULL && p->right!=NULL)
	{
		if(PAR->left==p)
		{
			PAR->left=p->right;
			p->right=NULL;
			p=NULL;
			delete p;
			cout<<"Deletion Successful\n";
			return;
		}
		else
		{
			PAR->right=p->right;
			p->right=NULL;
			p=NULL;
			delete p;
			cout<<"Deletion Successful\n";
			return;
		}
	}
	else
	{
		TREE *child=Successor(p);
		cout<<"Successor Element "<<child->info<<endl;
		//p->info=child->info;
		int find=child->info;
		TREE *k=search(start,&find);
		deletion(k);
		p->info=child->info;
	}
}
int main()
{
	TREE *p,*loc;
	while(1)
	{
		int ch;
		cout<<"      BINARY SEARCH TREE    \n";
		cout<<"1.  Insert Element in Tree\n";
		cout<<"2.  Exit \n";
		cout<<"3.  Preorder Recursion\n";
		cout<<"4.  Preorder Without Recursion\n";
		cout<<"5.  Inorder Recursion\n";
		cout<<"6.  Inorder Without Recursion\n";
		cout<<"7.  Postorder Recursion\n";
		cout<<"8.  Postorder Without Recursion\n";
		cout<<"9.  Find/Search Element\n";
		cout<<"10. Inorder Successor of Searched Element\n";
		cout<<"11. Deletion of Element\n";
		cout<<"12. Root of Tree\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				int a,item;
				cout<<"How many Elements Want to insert\n";
				cin>>a;
				cout<<"Enter items :\n";
				while(a--)
				{
					cin>>item;
					p=create();
					insert(p,item);
				}
				break;
			}
			case 2:
			{
				exit(1);
				break;
			}
			case 3:
			{
				PreorderRecursion(start);
				cout<<endl;
				break;
			}
			case 4:
			{
				Preorder(start);
				cout<<endl;
				break;
			}
			case 5:
			{
				InorderRecursion(start);
				cout<<endl;
				break;
			}
			case 6:
			{
				Inorder(start);
				cout<<endl;
				break;
			}
			case 7:
			{
				PostorderRecursion(start);
				cout<<endl;
				break;
			}
			case 8:
			{
				Postorder(start);
				cout<<endl;
				break;
			}
			case 9:
			{
				int find;
				cout<<"Enter item to Search \n";
				cin>>find;
				loc=search(start,&find);
				if(loc)
				{
					cout<<"Location of Element is : "<<loc<<endl;
					cout<<"Location of Parent  is : "<<PAR;
				}
				cout<<endl;
				break;
			}
			case 10:
			{
				int find;
				cout<<"Enter Element \n";
				cin>>find;
				loc=search(start,&find);
				TREE *ak;
				ak=Successor(loc);
				cout<<"Successor Element is : "<<ak->info<<endl;
				cout<<"Location of Successor  is : "<<ak<<endl;
				break;
			}
			case 11:
			{
				int find;
				cout<<"Enter item to delete\n";
				cin>>find;
				loc=search(start,&find);
				if(loc)
				{
					deletion(loc);
				}
				else
				{
					cout<<"Element Not present\n";
				}
				break;
			}
			case 12:
			{
				cout<<"Root of Tree is :"<<start->info<<endl;
				break;
			}
			default:
			{
				cout<<"Invalid Enter\n";
				break;
			}
		}
	}
	return 0;
}