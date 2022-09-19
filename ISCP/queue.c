#include <stdio.h>
#define N 5
int q[N], front = 0, rear = -1;

void enque(int x)
{
    if (rear == N - 1)
        printf("Queue is FULL\n\n");
    else
        q[++rear] = x;
}
void deque()
{
    if (rear == -1 || front == N)
        printf("Queue is EMPTY\n\n");
    else
        front++;
}
void display()
{
    for (int i = front; i <= rear; i++)
        printf("%d ", q[i]);
    printf("\n\n");
}
int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    display();
    deque();
    deque();
    deque();
    display();
    return 0;
}