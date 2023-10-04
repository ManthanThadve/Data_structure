#include<stdio.h>
#include<stdlib.h>

// tree structure
struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

// intialization
struct Tree* newnode(int data)
{
    struct Tree* node = (struct Tree*)malloc(sizeof(struct Tree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// function to perform inorder
void inorder(struct Tree* node)
{
    if(node == NULL)
        return;

    inorder(node->left);
    printf("%d -> ",node->data);
    inorder(node->right);
}

// function to perform preorder
void preorder(struct Tree* node)
{
    if(node == NULL)
        return;

    printf("%d -> ",node->data);
    preorder(node->left);
    preorder(node->right);
}

// function to perform postorder
void postorder(struct Tree* node)
{
    if(node == NULL)
        return;


    postorder(node->left);
    postorder(node->right);
    printf("%d -> ",node->data);
}

// entry-point
int main()
{
    struct Tree *root = newnode(1);
    root->left = newnode(12);
    root->right = newnode(9);
    root->left->left = newnode(15);
    root->left->right = newnode(6);

    printf("\nInorder :");
    inorder(root);

    printf("\nPreorder :");
    preorder(root);

    printf("\nPostorder :");
    postorder(root);
}
