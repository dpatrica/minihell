#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		n_char;
	long int	n_long;

	n_long = n;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long *= -1;
	}
	if (n_long > 9)
		ft_putnbr_fd(n_long / 10, fd);
	n_char = n_long % 10 + '0';
	write(fd, &n_char, 1);
}
