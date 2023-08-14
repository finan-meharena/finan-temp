/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:32:41 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:32:41 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number_digits(int n)
{
	int	count;

	count = 0;
	n <= 0 && count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_convert(char *str, long nb, int index)
{
	while (nb > 0)
	{
		str[index] = 48 + (nb % 10);
		nb = nb / 10;
		index--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*result;
	int		digit;
	long	num;

	digit = ft_number_digits(nb);
	num = nb;
	result = (char *)malloc(sizeof(char) * (digit + 1));
	if (!result)
		return (NULL);
	result[digit--] = '\0';
	if (num == 0)
	{
		result[0] = 48;
	}
	if (num < 0)
	{
		result[0] = '-';
		num = num * -1;
		ft_convert(result, num, digit);
	}
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	int n = -1234;
// 	char *pointer = ft_itoa(n);
// 	printf("Integer : %d\n", n);
// 	printf("String : %s\n", pointer);
// 	free(pointer);
// }