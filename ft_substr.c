/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:38:01 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:38:01 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_handle_index(char *ptr, char const *s)
{
	ptr = (char *)malloc(sizeof(*s) * 1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
	
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	char				*ptr;
	unsigned int		size;

	if (!s)
		return (NULL);
	i = 0;
	ptr = NULL;
	size = ft_strlen(s);
	if (start >= size)
		return ((char *)ft_handle_index(ptr, s));
	if (len > size - start)
		ptr = (char *)malloc(sizeof(char) * (size - start + 1));
	else
		ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>
int main()
{
	printf(ft_substr("finan", 4 , 5));

	return (0);
}