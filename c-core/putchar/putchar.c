#include <unistd.h>

int	gm_putchar(unsigned char c)
{
	write(1, &c, 1);
	return c;
}
