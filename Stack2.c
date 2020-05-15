#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack{
    struct Stack* next;
    int data;
};

struct Stack* newnode( int data)
{
    struct Stack* node = (struct Stack*)malloc(sizeof(struct Stack));
    node ->data = data;
    node->next = NULL;
    return node;
}

int isEmpty(struct Stack *root)
{
    return !root;
}

void push(struct Stack** root, int data)
{
    struct Stack* node = newnode(data);
    node->next = *root;
    *root = node;
    printf("\n%d is the pushed data\n", data);
}

int pop(struct Stack** root)
{
    if(isEmpty(*root))
        return INT_MIN;
    struct Stack *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int peek(struct Stack** root)
{
    if(isEmpty(*root))
        return INT_MIN;
    return (*root)->data;
}

int traverser(struct Stack** root)
{
    struct Stack* temp = *root;
    if(isEmpty(*root))
    {
        printf("Stack Underflow");
    }
    else
    {
    while(temp != NULL)
    {
        printf("\n%d ",temp->data);
        temp = temp->next;
    }
    }
}

int main()
{
    struct Stack *root = NULL;
    int D;

    for(int i=0; i<=2; i++)
        {
        printf("\nEnter data:");
        scanf("%d",&D);
        push(&root,D);
    }

     printf("\nData is : ");
     traverser(&root);
     printf("\n%d is the popped number\n",pop(&root));
     printf("\nData is : ");
     traverser(&root);
     printf("\nTop number is %d",peek(&root));
}

