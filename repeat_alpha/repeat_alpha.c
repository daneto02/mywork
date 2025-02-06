#include <unistd.h>

int character(char *str)
{
	int i;
	int total_print;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			total_print = str[i] - 65 + 1;
		else if(str[i] >= 'a' && str[i] <= 'z')
			total_print = str[i] - 97 + 1;
		else
			total_print = 1;
		while(total_print)
		{
			write(1, &str[i], 1);
			total_print--;
		}
		total_print = 0;
		i++;
	}
}

int main(int argc, char *argv[])
{
	int j;

	j = 1;
	if(j < argc)
	{
		character(argv[j]);
		write(1, "\n", 1);
	}
	else(write(1, "\n", 1));
	return(0);
}