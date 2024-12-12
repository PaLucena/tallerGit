#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main(void)
{
	char c = "a";
	ft_putstr(c);
}*/
