#include "libft.h"

void	ft_putnbr(int n)
{
	char		n_char;
	long int	n_long;

	n_long = n;
	if (n_long < 0)
	{
		write(1, "-", 1);
		n_long *= -1;
	}
	if (n_long > 9)
		ft_putnbr(n_long / 10);
	n_char = n_long % 10 + '0';
	write(1, &n_char, 1);
}
