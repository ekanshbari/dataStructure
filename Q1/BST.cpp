#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
struct node
{
    int info;
    struct node *left, *right;
};
 
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->info = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->info);
        inorder(root->right);
    }
}
 
struct node* insert(struct node* node, int info)
{
    if (node == NULL) return newNode(info);

    if (info < node->info)
        node->left  = insert(node->left, info);
    else if (info > node->info)
        node->right = insert(node->right, info);   

    
    return node;
}
 

int main()
{
    
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // print inoder traversal of the BST
    inorder(root);
 getch();
    return 0;
}
