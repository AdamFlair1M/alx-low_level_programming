#include <unistd.h>
/**
* _putcha - writes character C to stdout
* @c: the character to print
* Return: on success 1.
* On error, -1 is returned, and errno is set approximately.
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
