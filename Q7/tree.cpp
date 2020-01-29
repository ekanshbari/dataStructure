#include <iostream>
#include <conio.h>
#include <malloc.h>
using namespace std;
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *tree;
void create_tree(struct node *x);
struct node *insertElement(struct node *x, int a);
void preorderTraversal(struct node *x);
void inorderTraversal(struct node *x);
void postorderTraversal(struct node *x);
struct node *findSmallestElement(struct node *x);
struct node *findLargestElement(struct node *x);
struct node *deleteElement(struct node *x, int b) ;
struct node *mirrorImage(struct node *x);
int totalNodes(struct node *x);
int totalExternalNodes(struct node *x);
int totalInternalNodes(struct node *x);
int Height(struct node *x);
struct node *deleteTree(struct node *x);
int main()
{
int option, val;
struct node *ptr;
create_tree(tree);
clrscr();
do
{
cout<<"\n ******MAIN MENU******* \n";
cout<<"\n 1. Insert Element";
cout<<"\n 2. Preorder Traversal";
cout<<"\n 3. Inorder Traversal";
cout<<"\n 4. Postorder Traversal";
cout<<"\n 5. Find the smallest element";
cout<<"\n 6. Find the largest element";
cout<<"\n 7. Delete an element";
cout<<"\n 8. Count the total number of nodes";
cout<<"\n 9. Count the total number of external nodes";
cout<<"\n 10. Count the total number of internal nodes";
cout<<"\n 11. Determine the height of the tree";
cout<<"\n 12. Find the mirror image of the tree";
cout<<"\n 13. Delete the tree";
cout<<"\n 14. Exit";
cout<<"\n\n Enter your option : ";
cin>>option;
switch(option)
{
case 1:
cout("\n Enter the value of the new node : ");
cin>>val;
tree = insertElement(tree, val);
break;
case 2:
cout<<"\n The elements of the tree are : \n";
preorderTraversal(tree);
break;
case 3:
cout<<"\n The elements of the tree are : \n";
inorderTraversal(tree);
break;
case 4:
cout<<"\n The elements of the tree are : \n";
postorderTraversal(tree);
break;
case 5:
ptr = findSmallestElement(tree);
cout<<"\n Smallest element is :"<<ptr–>data;
break;
case 6:
ptr = findLargestElement(tree);
cout<<"\n Largest element is : "<< ptr–>data;
break;
case 7:
cout<<"\n Enter the element to be deleted : ";
cin>>val;
tree = deleteElement(tree, val);
break;
case 8:
cout<<"\n Total no. of nodes = "<<totalNodes(tree);
break;
case 9:
cout<<"\n Total no. of external nodes = ";
totalExternalNodes(tree));
break;
case 10:
cout<<"\n Total no. of internal nodes = ";
totalInternalNodes(tree));
break;
case 11:
cout<<"\n The height of the tree = "<<Height(tree);
break;
case 12:
tree = mirrorImage(tree);
break;
case 13:
tree = deleteTree(tree);
break;
}
}while(option!=14);
getch();
return 0;
}
void create_tree(struct node *tree)
{
tree = NULL;
}
struct node *insertElement(struct node *tree, int val)
{
struct node *ptr, *nodeptr, *parentptr;
ptr = (struct node*)malloc(sizeof(struct node));
ptr–>data = val;
ptr–>left = NULL;
ptr–>right = NULL;
if(tree==NULL)
{
tree=ptr;
tree–>left=NULL;
tree–>right=NULL;
}
else
{
parentptr=NULL;
nodeptr=tree;
while(nodeptr!=NULL)
{
parentptr=nodeptr;
if(val<nodeptr–>data)
nodeptr=nodeptr–>left;
else
nodeptr = nodeptr–>right;
}
if(val<parentptr–>data)
parentptr–>left = ptr;
else
parentptr–>right = ptr;
}
return tree;
}
void preorderTraversal(struct node *tree)
{if(tree != NULL)
{
cout<<"\t"<< tree–>data);
preorderTraversal(tree–>left);
preorderTraversal(tree–>right);
}
}
void inorderTraversal(struct node *tree)
{
if(tree != NULL)
{
inorderTraversal(tree->left);
cout<<"\t"<<tree->data;
inorderTraversal(tree->right);
}
}
void postorderTraversal(struct node *tree)
{
if(tree != NULL)  
{
postorderTraversal(tree->left);
postorderTraversal(tree->right);
cout<<"\t"<< tree->data;
}
}
struct node *findSmallestElement(struct node *tree)
{
if( (tree == NULL) || (tree->left == NULL))
return tree;
else
return findSmallestElement(tree ->left);
}
struct node *findLargestElement(struct node *tree)
{
if( (tree == NULL) || (tree->right == NULL))
return tree;
else
return findLargestElement(tree->right);
}
struct node *deleteElement(struct node *tree, int val)
{
struct node *cur, *parent, *suc, *psuc, *ptr;
if(tree–>left==NULL)
{
cout<<"\n The tree is empty ";
return(tree);
}
parent = tree;
cur = tree–>left;
while(cur!=NULL && val!= cur–>data)
{
parent = cur;
cur = (val<cur–>data)? cur–>left:cur–>right;
}
if(cur == NULL)
{
cout<<"\n The value to be deleted is not present in the tree";
return(tree);
}
if(cur–>left == NULL)
ptr = cur–>right;
else if(cur–>right == NULL)
ptr = cur–>left;
else
{
// Find the in–order successor and its parent
psuc = cur;
cur = cur–>left;
while(suc–>left!=NULL)
{
psuc = suc;
suc = suc–>left;
}
if(cur==psuc)
{
// Situation 1
suc–>left = cur–>right;
}
else
{
// Situation 2
suc–>left = cur–>left;
psuc–>left = suc–>right;
suc–>right = cur–>right;
}
ptr = suc;
}
// Attach ptr to the parent node
if(parent–>left == cur)
parent–>left=ptr;
else
parent–>right=ptr;
free(cur);
return tree;
}
int totalNodes(struct node *tree)
{
if(tree==NULL)
return 0;
else
return(totalNodes(tree–>left) + totalNodes(tree–>right) + 1);
}
int totalExternalNodes(struct node *tree)
{
if(tree==NULL)
return 0;
else if((tree–>left==NULL) && (tree–>right==NULL))
return 1;
else
return (totalExternalNodes(tree–>left) +
totalExternalNodes(tree–>right));
}
int totalInternalNodes(struct node *tree)
{
if( (tree==NULL) || ((tree–>left==NULL) && (tree–>right==NULL)))
return 0;
else
return (totalInternalNodes(tree–>left)
+ totalInternalNodes(tree–>right) + 1);
}
int Height(struct node *tree)
{
int leftheight, rightheight;
if(tree==NULL)
return 0;
else
{
leftheight = Height(tree–>left);
rightheight = Height(tree–>right);
if(leftheight > rightheight)
return (leftheight + 1);
else
return (rightheight + 1);
}
}
struct node *mirrorImage(struct node *tree)
{
struct node *ptr;
if(tree!=NULL)
{
mirrorImage(tree–>left);
mirrorImage(tree–>right);
ptr=tree–>left;
ptr–>left = ptr–>right;
tree–>right = ptr;
}
}
struct node *deleteTree(struct node *tree)
{
if(tree!=NULL)
{
deleteTree(tree–>left);
deleteTree(tree–>right);
free(tree);
}
}
