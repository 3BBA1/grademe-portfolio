#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		count;
	char	c;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		c = argv[1][i];
		if (c >= 'a' && c <= 'z')
			count = c - 'a';
		else if (c >= 'A' && c <= 'Z')
			count = c - 'A';
		else
			count = 1;
		while (count > 0)
		{
			write(1, &c, 1);
			count--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}