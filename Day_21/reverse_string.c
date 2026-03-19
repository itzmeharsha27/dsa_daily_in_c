#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i;
    int start = 0;
int end = i - 1;
char temp;

 if(str[0] == '\0')
    {
        printf("Empty string\n");
        return 0;
    }

for(i = 0; str[i] != '\0'; i++)
{
  
    if(str[i-1] == '\n')
{
    str[i-1] = '\0';
    i--;
}

}
while(start < end)
{
temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
printf("Reversed string: %s\n", str);
    return 0;
}