#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if(argc != 2)
	{
		write(1, "e", 1);
	}
	if(argc == 2)
	{
		while(argv[1][i])
		{
			i++;	
		}
		while(i--)
		{
			if(argv[1][i] == 'e')
			{
				write(1, "e\n", 2);
				return 0;
			}
		}
		
	}
	write(1, "\n", 1);
}
