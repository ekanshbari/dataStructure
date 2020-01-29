#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	string info;
	node *left,*right;
};
node *root=NULL,*loc,*par;
void find(string item,node *root);
void insertion();
void preorder(node *root);
void leaf(node *root);

int main()
{
	int k;
	while(1)
	{
		cout<<"1 for Insertion"<<endl;
		cout<<"2 for preorder"<<endl;
		cout<<"3 for leaf"<<endl;
		cout<<"4 for Exit"<<endl;
		cout<<endl<<endl;
		cout<<"Enter the number"<<endl;
		cin>>k;
		switch(k)
		{
			case 1:
				insertion();
				break;
			case 2:
				preorder(root);
				break;
			case 3:
			    leaf(root);
				break;
			case 4:
				exit(0);
		}
	}
}
void find(string item, node *root)
{
     node *ptr,*save;
          if(root==NULL)
          {
               loc=NULL;
               par=NULL;
               return;
           }
         else if(item==root->info)
           {
               loc=root;
               par=NULL;
               return;
           }
         else 
         {
              if(item<root->info)
                {
                   ptr=root->left;
                   save=root;
                }
             else
               {
                   ptr=root->right;
                   save=root;
               }
             while(ptr!=NULL)
               {
                    if(item==ptr->info)
                      {
                          loc=ptr;
                          par=save;
                          return;
                      }
                    else 
                    {
                     if(item<ptr->info)
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
                    }
                    }
               loc=NULL;
               par=save;
        }

void insertion()
{
node *newNode;
string item;
cout<<"Enter the item: ";
cin>>item;
find(item,root);
if(loc!=NULL)
{
      cout<<endl<<"Already exist ";
      return;
}
 else
{
newNode=new node;
newNode->info=item;
loc=newNode;
newNode->left=NULL;
newNode->right=NULL;
if(par==NULL)
root=newNode;
else if(item<par->info)
par->left=newNode;
else
par->right=newNode;
}
}
void preorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
    if(root!=NULL)
	{
	cout<<root->info<<endl;
	preorder(root->left);
	preorder(root->right);
    }
}
void leaf(node *root)
{
	if(root==NULL)
	{
		return;
	}	   
	else
	{
		leaf(root->left);
		if(root->left==NULL&&root->right==NULL)
		{
		  cout<<root->info<<endl;	
		}
		leaf(root->right);
	}
}
