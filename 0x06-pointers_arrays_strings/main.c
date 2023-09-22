#include "main.h"

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int a[] = {4242, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 424242, 42, 1337};

    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}