#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main (void)
{
	int		i;
	char	x[20];
	char	y[30];
	char	*z;
	char	*mem;
	char	**test;
	
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
	
	ft_strcpy(x, "ft_strcat");
	ft_strcat(x, " = Ok");
	ft_putstr(x);
	ft_putchar('\n');
	
	ft_strcpy(x, "ft_strncat");
	ft_strncat(x, " = Ok", 10);
	ft_putstr(x);
	ft_putchar('\n');
	
	ft_strcpy(x, "ft_strlcat");
	ft_strlcat(x, " = Ok", 15);
	ft_putstr(x);
	ft_putchar('\n');
	
	ft_strcpy(x, "xyzabft_strchr = OK");
	ft_putstr(ft_strchr(x, 'f'));
	ft_putchar('\n');
	
	ft_strcpy(x, "fyzabft_strrchr = OK");
	ft_putstr(ft_strrchr(x, 'f'));
	ft_putchar('\n');
	
	ft_strcpy(x, "ftyzabft_strstr = OK");
	ft_putstr(ft_strstr(x, "ft_"));
	ft_putchar('\n');
	
	ft_strcpy(x, "ftyzabft_strnstr = OK");
	ft_putstr(ft_strnstr(x, "ft_", 15));
	ft_putchar('\n');
	
	if (ft_strcmp("sorin", "sorin") == 0)
		ft_putstr("ft_strcmp = Ok");
	ft_putchar('\n');
	
	if (ft_strncmp("sorinut", "sori", 4) == 0)
		ft_putstr("ft_strncmp = Ok");
	ft_putchar('\n');
	
	if (ft_atoi("012ab5d") == 12)
		ft_putstr("ft_atoi = Ok");
	ft_putchar('\n');
	
	if (ft_isalpha('s') != 0)
		ft_putstr("ft_isalpha = Ok");
	ft_putchar('\n');
	
	if (ft_isdigit('9') != 0)
		ft_putstr("ft_isdigit = Ok");
	ft_putchar('\n');
	
	if (ft_isalnum('s') != 0)
		ft_putstr("ft_isalnum = Ok");
	ft_putchar('\n');
	
	if (ft_isascii('?') != 0)
		ft_putstr("ft_isascii = Ok");
	ft_putchar('\n');	

	if (ft_isprint(' ') != 0)
		ft_putstr("ft_isprint = Ok");
	ft_putchar('\n');
	
	if (ft_toupper('a') == 'A')
		ft_putstr("ft_toupper = Ok");
	ft_putchar('\n');
	
	if (ft_tolower('A') == 'a')
		ft_putstr("ft_tolower = Ok");
	ft_putchar('\n');
	
	mem = ft_memalloc(100);
	if (mem[99] == '0')
		ft_putstr("ft_memalloc = Ok");
	ft_putchar('\n');
	
	ft_memdel((void*)&mem);
	if (mem == NULL)
		ft_putstr("ft_memdel = Ok");
	ft_putchar('\n');
	
	mem = ft_strnew(100);
	if (ft_strcmp(mem + 99, "") == 0)
		ft_putstr("ft_strnew = Ok");
	ft_putchar('\n');
	
	ft_strdel(&mem);
	if (mem == NULL)
		ft_putstr("ft_strdel = Ok");
	ft_putchar('\n');
	
	ft_strcpy(x, "Sorin este:");
	ft_strclr(x);
	if (x[10] == '\0')
		ft_putstr("ft_strclr = Ok");
	ft_putchar('\n');
	
	void down (char *c)
	{
		if(ft_isalpha(*c) != 0)
			*c = *c + 32;
	}
	ft_strcpy(x, "FT_STRITER = OK");
	ft_striter(x, &down);
	ft_putstr(x);
	ft_putchar('\n');
	
	void downi (unsigned int i, char *c)
	{
		if(ft_isalpha(*c) != 0 && i < 11)
			*c = *c + 32;
	}
	ft_strcpy(x, "FT_STRITERI = OK");
	ft_striteri(x, &downi);
	ft_putstr(x);
	ft_putchar('\n');
	
	char map (char c)
	{
		if(ft_isalpha(c) != 0)
			return (c + 32);
		else
			return (c);
	}
	ft_strcpy(x, "FT_STRMAP = OK");
	ft_putstr(ft_strmap(x, &map));
	ft_putchar('\n');
	
	char mapi (unsigned int i, char c)
	{
		if(ft_isalpha(c) != 0 && i < 10)
			return (c + 32);
		else
			return (c);
	}
	ft_strcpy(x, "FT_STRMAPI = OK");
	ft_putstr(ft_strmapi(x, &mapi));
	ft_putchar('\n');
	
	if (ft_strequ("sorin", "sorin") == 1)
		ft_putstr("ft_strequ = Ok");
	ft_putchar('\n');
	
	if (ft_strnequ("sorin", "sor12", 3) == 1)
		ft_putstr("ft_strnequ = Ok");
	ft_putchar('\n');
	
	
	ft_strcpy(x, "ftyzabft_strsub = OK");
	ft_putstr(ft_strsub(x, 6, 14));
	ft_putchar('\n');
	
	ft_strcpy(x, "ft_strjoin ");
	ft_strcpy(y, "= OK");
	ft_putendl(ft_strjoin(x, y));

	
	ft_strcpy(x, "	 	ft_strtrim = OK     	");
	ft_putendl(ft_strtrim(x));

	ft_putnbr(-123456789);
	ft_putchar('\n');
	
	ft_putendl(ft_itoa(-123456789));
	
	ft_strcpy(x, "unu** doi***  trei*ft_strsplit = Ok");
	test = ft_strsplit(x, '*');
	i = 0;
	while (test[i])
	{
		ft_putendl(test[i]);
		i++;
	}
		

	return (0);
}