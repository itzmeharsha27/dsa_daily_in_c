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

    cache[size++] = (struct Cache){1,1};
    cache[size++] = (struct Cache){2,2};

    if(size == capacity)
        size--;

    for(int i = size; i > 0; i--)
        cache[i] = cache[i-1];

    cache[0] = (struct Cache){3,3};
    size++;

    printf("Current Cache:\n");

    for(int i = 0; i < size; i++)
        printf("Key=%d Value=%d\n", cache[i].key, cache[i].value);

    return 0;
}