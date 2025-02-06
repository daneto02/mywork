#include <unistd.h>

int main()
{
	int n;

	n = 57;
	while (n >= 48)
	{
		write(1, &n, 1);
		n--;
	}
	write(1, "\n", 1);
}