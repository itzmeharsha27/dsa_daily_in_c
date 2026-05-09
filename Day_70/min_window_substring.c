#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
    char s[] = "ADOBECODEBANC";
    char t[] = "ABC";

    int freqT[MAX] = {0};
    int freqS[MAX] = {0};

    for(int i=0;t[i];i++)
        freqT[t[i]]++;

    return 0;
}