#include <unistd.h>

void print_digits(void)
{
    char d = '0';
    while(d <= '9') {
        write(1, &d, 1);
        d++;
    }
}
