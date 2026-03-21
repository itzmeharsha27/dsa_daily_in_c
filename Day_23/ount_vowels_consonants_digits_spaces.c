#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check empty input
    if(str[0] == '\0')
    {
        printf("Empty string\n");
        return 0;
    }

    // Traverse string
    for(i = 0; str[i] != '\0'; i++)
    {
        // Count vowels
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
        // Count consonants
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonants++;
        }
        // Count digits
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        // Count spaces
        else if(str[i]==' ')
        {
            spaces++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);

    return 0;
}