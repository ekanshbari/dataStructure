#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct tree
{
	string data;
	tree *left,*right;
};
struct tree *root,*par,*hei,*loc,*newNode;
void insert(tree *root,tree *newNode);
void height(tree *hei);
void inorder(tree *root);
void find(string item, tree *root)
{
     tree *ptr,*save;
          if(root==NULL)
          {
               loc=NULL;
               par=NULL;
               return;
           }
         else if(item==root->data)
           {
               loc=root;
               par=NULL;
               return;
           }
         else 
         {
              if(item<root->data)
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
                    if(item==ptr->data)
                      {
                          loc=ptr;
                          par=save;
                          return;
                      }
                    else 
                    {
                     if(item<ptr->data)
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

void insert(tree *root,tree *newNode)
{
string item;
cout<<"ENTER THE ITEM : ";
cin>>item;
find(item,root);
if(loc!=NULL)
{
      cout<<endl<<"ITEM ALREADY PRESENT ";
      return;
}
else
{
newNode=new tree;
newNode->data=item;
loc=newNode;
newNode->left=NULL;
newNode->right=NULL;
if(root==NULL)
root->data=newNode->data;
else if(item<root->data)
root->left=newNode;
else
root->right=newNode;
}
}
void height(tree *hei)
{
	if(root==NULL)
	{
		cout<<"height of a tree := null";
		return;
	}
	else if(root->left==NULL && root->right==NULL)
	{
		cout<<"height of tree := 1";
	}
	else if(root->left>root->right)
	{
	    root->left=root->left+1;
		hei=root->left;	
		return;
	}
	else
	{
	root->right=root->right+1;
	hei=root->right;
	return;	
	}
}
void inorder(tree *root)
{
	if(root==NULL)
	{
		cout<<"empty";
		return;
	}
	else
	{
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);	
	}
}
int main()
{
	int ch;
	while(1)
	{
		cout<<"press /n 1.insert  /n  2. to get list sorted /n 3.height of a tree /n 4.exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
			
				insert(root,newNode);
		    case 2:
				inorder(root);
			case 3 :
				height(hei);
			case 4:
				exit(0);
		}
	}
}
