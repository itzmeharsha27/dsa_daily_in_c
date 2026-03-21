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
else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
    consonants++;
}
else if(str[i]>='0' && str[i]<='9')
{
    digits++;
}
else if(str[i]==' ')
{
    spaces++;
}

}


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    return 0;
}