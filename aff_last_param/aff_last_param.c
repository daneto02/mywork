#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
int main(int argc, char *argv[])
{
	int j;

	j = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(argc > j)
	{
		j++;
	}
	ft_putstr(argv[j - 1]);
	write(1, "\n", 1);
}