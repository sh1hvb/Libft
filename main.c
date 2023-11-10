#include "libft.h"

int	main(void)
{
	/*printf("%d",ft_isdigit('0'));
	printf("%d",ft_isalnum(49));
	printf("%d",ft_isprint(3));*/
	// char *ptr = ft_strrchr("te\0st", '\0');
	// char *ptr2 = strrchr("te\0st", '\0');
	// printf("%s\n", ptr + 1);
	// printf("%s\n", ptr2 + 1);
	// printf("%s\n", ft_strrchr("test", 'o'));
	// printf("%s\n", strrchr("test", 'o'));
	// printf("%s\n", ft_strrchr("test", 't'));
	// printf("%s\n", strrchr("test", 't'));
	// printf("%d\n", (int)NULL);
	// char *p=malloc(10);
	// p[0] = 'a';
	// free(p);
	// char *d = malloc(10);
	// printf("%c",*d);
	char t[] = "bonjour";
	printf("%s", (char *)memchr(t, 'b', 0));
}
