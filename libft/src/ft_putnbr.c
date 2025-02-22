#include "../includes/libft.h"

void ft_putnbr(int n) {
	if (n < 0) {
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
