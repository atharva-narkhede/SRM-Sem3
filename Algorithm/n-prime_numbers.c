#include <stdio.h>
#include <time.h>
int main()
{
    int i = 3, j, n, count;
    printf("Enter the number ");
    scanf("%d", &n);
    clock_t begin = clock();
    if (n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }
    for (count = 2; count <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            printf("%d \n", i);
            count++;
        }
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nTime Taken = %f", time_spent);
    return 0;
}