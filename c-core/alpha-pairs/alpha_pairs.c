#include <unistd.h>
#include <stdio.h>

void putstr(char c, int i) {
	while(i--)
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	char c = 'a';
	int i = 26;
	while(i--) {
		if (i % 2 == 1)
			putstr(c, 2);
		else 
			putstr(c - 32, 2);
		c++;
	}
	putstr('\n', 1);
	return (0);
}
