#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int j;

	i = 0;
	j = 0;

	while ((i < len) && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j])
			{
				if ((needle[j] != haystack[i]));
				i++;
				break;
			}
			
		}
	}
	
}

// int main()
// {
// 	my_putnbr_fd(12345, 1);
// 	return 0;
// }
