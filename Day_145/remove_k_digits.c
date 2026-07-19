#include <stdio.h>
#include <string.h>

int main()
{
    char num[] = "10200";
    int k = 1;

    char stack[100];
    int top = -1;
    int n = strlen(num);

    for(int i=0;i<n;i++)
    {
        while(top>=0 && k>0 && stack[top]>num[i])
        {
            top--;
            k--;
        }

        stack[++top]=num[i];
    }

    while(k>0)
    {
        top--;
        k--;
    }

    stack[top+1]='\0';

    printf("Smallest Number = %s\n",stack);

    return 0;
}