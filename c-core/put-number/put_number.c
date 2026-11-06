#include <unistd.h>

// Print n in decimal on standard output, with no newline.
// n is between 0 and INT_MAX.
void	put_number(int n)
{
	int i;
	long nb;
	char str[11];

	i = 0;
	nb = n;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if(n < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while(n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	while(i--)
	write(1, &str[i], 1);
}
