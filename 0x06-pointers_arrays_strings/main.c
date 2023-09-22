#include "main.h"

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    printf("%s", str);
    ptr = cap_string(str);
    printf("%s", ptr);
    return (0);
}