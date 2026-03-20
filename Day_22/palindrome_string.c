#include <stdio.h>

int main()
{
    char str[100];
     int i;

for(i = 0; str[i] != '\0'; i++)
{




}
  if(str[i-1] == '\n')
{
    str[i-1] = '\0';
    i--;
}

int start = 0;
int end = i - 1;

 while(start < end)
    {
        if(str[start] != str[end])
        {
            printf("Not Palindrome\n");
            return 0;
        }

        start++;
        end--;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    return 0;
}