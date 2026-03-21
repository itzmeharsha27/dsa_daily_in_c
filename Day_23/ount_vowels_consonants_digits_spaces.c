#include <stdio.h>

int main()
{
    char str[200];
    int i;
int vowels = 0, consonants = 0, digits = 0, spaces = 0;

for(i = 0; str[i] != '\0'; i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
{
    vowels++;
}

}

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    return 0;
}