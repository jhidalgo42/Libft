#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h" 
#include <ctype.h> //Para las funciones is;

int		main(void)
{
	void	*s1;
	void	*s2;
	char str[50] = "This is string.h library function";
	int		c;
	size_t	n;

	s1 = &str[0];
	s2 = &str[20];
	n = 7;
	c = 45;
	s1 = memset(s1 ,c ,n);
	s2 = memset(s2, c, n);

	printf("\nMEMSET:\n");
	printf("%s\n", s1);
	printf("%s\n", s2);
	
	bzero(s1, n);
	ft_bzero(s2, n);
	printf("\nBZERO:\n");
	printf("%s\n", s2);
	printf("%s\n", (s2 + 6));

	const char src[50] = "http://www.tutorialspoint.com";
	char dest1[50] = "Helloooooooo!!";
	char dest2[50] = "Helloooooooo!!";

	s1 = memcpy(dest1, src, 50);
	s2 = ft_memcpy(dest2, src, 50);

	printf("\nMEMCPY:\n");
	printf("%s\n", dest1);
	printf("%s\n", dest2);
/*
	printf("\nMEMCPY:\n");
	printf("%s\n", s1);
	printf("%s\n", s2);

	printf("\nMEMMOVE:\n");
	printf("%s\n", s1);
	printf("%s\n", s2);
	*/
	return (0);	
}