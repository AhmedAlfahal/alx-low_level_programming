#include "main.h"

int main(void)
{
    char str[] = "[] hello[][]u[][]\n";
    char *ptr;

    printf("%s", str);
    ptr = cap_string(str);
    printf("%s", ptr);
    return (0);
}