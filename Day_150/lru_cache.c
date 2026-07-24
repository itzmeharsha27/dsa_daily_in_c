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

    int index = -1;

    for(int i = 0; i < size; i++)
    {
        if(cache[i].key == 1)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        struct Cache temp = cache[index];

        for(int i = index; i > 0; i--)
            cache[i] = cache[i - 1];

        cache[0] = temp;
    }

    return 0;
}