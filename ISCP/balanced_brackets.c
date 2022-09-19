#include <stdio.h>
#define n 1000000
char s[n];
int top = -1;
void push(char);
void pop();
int size();
int main()
{
    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        char str[1000000];
        scanf("%s", str);
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == '{' || str[i] == '[' || str[i] == '(')
            {
                push(str[i]);
            }
            else
            {
                if ((str[i] == '}' && s[top] == '{') || (str[i] == ']' && s[top] == '[') || (str[i] == ')' && s[top] == '('))
                {
                    pop();
                }
            }
        }
        if (size() == 0)
        {
            top = -1;
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        top = -1;
    }

    return 0;
}
void push(char ch)
{
    if (top < n - 1)
    {
        top++;
        s[top] = ch;
    }
}
void pop()
{
    if (top != -1)
    {
        top--;
    }
}
int size()
{
    return top + 1;
}
