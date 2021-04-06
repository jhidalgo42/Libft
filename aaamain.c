#include <string.h>
#include <stdio.h>

int		main(void)
{
	void	*s1;
	void	*s2;
	char	string[50];
	int		c;
	size_t	n;

	s1 = &string[0];
	s2 = &string[25];
	n = 4;
	c = 48;
	s1 = memset(s1 ,c ,n);
	s2 = memset(s2, c, n);

	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}