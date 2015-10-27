#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main (void)
{
	char	x[20];
	char	y[30];
	char	*z;
	
	ft_strcpy(x, "ft_strlen = Ok");
	if (ft_strlen("sorin") == ft_strlen("sorin"))
		ft_putstr(x);
	ft_putchar('\n');
	
	ft_memset(x, '$', 9);
	if (x[8] == '$')
		ft_putstr("ft_memset");
	ft_putstr(x + 9);
	ft_putchar('\n');
	
	ft_bzero(x, 9);
	if (x[8] == '\0')
		ft_putstr("ft_bzero");
	ft_putstr(x + 9);
	ft_putchar('\n');

	ft_memcpy(y, x, sizeof(x) + 1);
	if (y[8] == '\0')
		ft_putstr("ft_memcpy");
	ft_putstr(y + 9);
	ft_putchar('\n');
	
	ft_bzero(y, sizeof(y));
	ft_memccpy(y, x, 'k', sizeof(x) + 1);
	if (y[8] == '\0')
		ft_putstr("ft_memccpy");
	ft_putstr(y + 9);
	ft_putchar('\n');
	
	ft_bzero(y, sizeof(y));
	ft_memmove(y, x, sizeof(x) + 1);
	if (y[8] == '\0')
		ft_putstr("ft_memmove");
	ft_putstr(y + 9);
	ft_putchar('\n');

	z = (char*)ft_memchr(x, 'k', sizeof(x));
	if (z[0] == 'k')
		ft_putstr("ft_memchar");
	ft_putstr(x + 9);
	ft_putchar('\n');
	
	ft_strcpy(x, "Sorin 5");
	ft_strcpy(y, "Sorin 2");
	printf("Rezultatul ft_memcmp() este %d sau este %d\n", memcmp(x, y, 7), ft_memcmp(x, y, 7));
	
	ft_putstr(ft_strdup("ft_strdup = Ok"));
	ft_putchar('\n');
	
	ft_strncpy(x, "ft_strncpy = Ok", 20);
	ft_putstr(x);
	ft_putchar('\n');
	
	return (0);
}