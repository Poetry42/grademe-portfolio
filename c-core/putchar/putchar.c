#include <unistd.h>

int	gm_putchar(int c)
{
	unsigned char cc = (unsigned char) c;
	write(1, &cc, 1);
	return (c);
}
