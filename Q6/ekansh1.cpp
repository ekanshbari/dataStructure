#include<iostream>
using namespace std;
void insert(int);
void heapsort(int);
int tree[100];
int n=0;
int main()
{
	int i,a;
	cout<<"enter number of elements";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cin>>tree[i];
	}
	heapsort(a);
	for(i=1;i<=a;i++)
	cout<<tree[i]<<endl;
}
void heapsort(int b)
{
	int i,j,a[100];
	for(i=1;i<=b;i++)
	{
		a[i]=tree[i];
	}
	for (j=0;j<n;j++)
	insert(tree[j+1]);
	
}
void insert(int item)
{
	int n=n+1;
	int p=n,par;
	while(p>1)
	{
		par=int(p/2);
		if(item>=tree[par])
		{
	     tree[p]=item;
	    
        }	
        tree[p]=tree[par];
        p=par;
    }
    tree[1]=item;
}






























































































































































































/*


int isSibling(struct Node *root, struct Node *a, struct Node *b)
{
    // Base case
    if (root==NULL)  return 0;
 
    return ((root->left==a && root->right==b)||
            (root->left==b && root->right==a)||
            isSibling(root->left, a, b)||
            isSibling(root->right, a, b));
}
 
// Recursive function to find level of Node 'ptr' in a binary tree
int level(struct Node *root, struct Node *ptr, int lev)
{
    // base cases
    if (root == NULL) return 0;
    if (root == ptr)  return lev;
 
    // Return level if Node is present in left subtree
    int l = level(root->left, ptr, lev+1);
    if (l != 0)  return l;
 
    // Else search in right subtree
    return level(root->right, ptr, lev+1);
}
 
 
// Returns 1 if a and b are cousins, otherwise 0
int isCousin(struct Node *root, struct Node *a, struct Node *b)
{
    //1. The two Nodes should be on the same level in the binary tree.
    //2. The two Nodes should not be siblings (means that they should
    // not have the same parent Node).
    if ((level(root,a,1) == level(root,b,1)) && !(isSibling(root,a,b)))
        return 1;
    else return 0;
}
 
// Driver Program to test above functions
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->right = newNode(15);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
 
    struct Node *Node1,*Node2;
    Node1 = root->left->left;
    Node2 = root->right->right;
 
    isCousin(root,Node1,Node2)? puts("Yes"): puts("No");
 
    return 0;
}*/
