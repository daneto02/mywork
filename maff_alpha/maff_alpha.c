#include <unistd.h>

int	main()
{
	int	i;
	int res;

	i = 97;
	res = 0;
	while (i <= 122)
	{
		if (i % 2 == 0)
		{
			res = i - 32;
			(write(1, &res, 1));
		}
		else
		{
			 (write(1, &i, 1));
		}
		i++;
	}
	write(1, "\n", 1);
}