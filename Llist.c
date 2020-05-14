#include<stdio.h>
#include<conio.h>

struct node
{
    struct node* next;
    int data;
}*start;

int main()
{
    int d;
    struct node *temp, *ptr, *n;
    for(int i = 0; i <=3; i++)
    {
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("No Memory");
        exit(0);
    }
    printf("Enter data:");
    scanf("%d",&d);
    temp ->data = d;
    temp ->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr ->next != NULL)
        {
          ptr = ptr ->next;
        }
        ptr ->next = temp;
    }
    }

    while(start != NULL)
    {
        printf("%d " ,start->data);
        start = start->next;
    }
}
