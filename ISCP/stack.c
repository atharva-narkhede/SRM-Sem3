#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;
void push(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    if (top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

///////////pop operation

void pop()
{
    if (top = NULL)
    {
        printf("Invalid\n");
    }
    else
    {
        struct node *temp = top;
        top = top->next = NULL;
        free(temp);
    }
}