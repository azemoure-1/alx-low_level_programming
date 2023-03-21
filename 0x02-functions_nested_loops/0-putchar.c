#include <unistd.h>

int main(void)
{
    char str[] = "_putchar\n";
    int i = 0;

    while (str[i] != '\0')
    {
        /* using the write function to print the character */
        write(1, &str[i], 1);
        i++;
    }

    return (0);
}
