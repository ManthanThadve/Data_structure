#include<stdio.h>
#include<stdlib.h>

struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

struct Tree* newnode(int data)
{
    struct Tree* node = (struct Tree*)malloc(sizeof(struct Tree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(struct Tree* node)
{
    if(node == NULL)
        return;

    inorder(node->left);
    printf("%d -> ",node->data);
    inorder(node->right);
}

void preorder(struct Tree* node)
{
    if(node == NULL)
        return;

    printf("%d -> ",node->data);
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Tree* node)
{
    if(node == NULL)
        return;


    postorder(node->left);
    postorder(node->right);
    printf("%d -> ",node->data);
}

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
