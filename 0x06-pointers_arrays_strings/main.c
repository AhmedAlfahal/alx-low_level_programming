#include "main.h"

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr = NULL;

    printf("%s", str);
    ptr = string_toupper(str);
    printf("%s", ptr);
    return (0);
}