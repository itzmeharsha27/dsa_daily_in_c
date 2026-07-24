#include <stdio.h>

struct Cache
{
    int key;
    int value;
};

int main()
{
    int capacity = 2;
    int size = 0;

    struct Cache cache[10];

    cache[size].key = 1;
    cache[size].value = 1;
    size++;

    cache[size].key = 2;
    cache[size].value = 2;
    size++;

    return 0;
}