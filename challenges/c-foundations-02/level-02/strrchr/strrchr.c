#include <unistd.h>

char *gm_strrchr(const char *str, int c)
{
    char *last;

    last = NULL;
    while (1)
    {
        if (*str == (char)c)
            last = (char *)str;
        if (*str == '\0')
            break;
        str++;
    }
    return (last);
}