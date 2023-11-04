#include "libft.h"
int main ()
{	
	/*printf("%d",ft_isdigit('0'));
	printf("%d",ft_isalnum(49));
	printf("%d",ft_isprint(3));*/



	char *ptr = ft_strrchr("te\0st", '\0');
	char *ptr2 = strrchr("te\0st", '\0');
	printf("%s\n", ptr + 1);
	printf("%s\n", ptr2 + 1);
	printf("%s\n", ft_strrchr("test", 'o'));
	printf("%s\n", strrchr("test", 'o'));
	printf("%s\n", ft_strrchr("test", 't'));
	printf("%s\n", strrchr("test", 't'));



}