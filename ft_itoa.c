/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 08:36:11 by ysonmez           #+#    #+#             */
/*   Updated: 2021/10/13 15:05:22 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	get_char(unsigned int n)
{
	char	c;

	c = n % 10 + 48;
	return (c);
}

static char	*get_s(size_t digit, unsigned int number, char *s)
{
	int	i;

	i = digit - 1;
	while (i >= 0)
	{
		s[i] = get_char(number);
		number /= 10;
		i--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	size_t			digit;
	unsigned int	number;

	if (n < 0)
	{
		number = n * (-1);
		digit = count_digit(number) + 1;
	}
	else
	{
		number = n;
		digit = count_digit(number);
	}
	s = (char *)malloc(sizeof(char) * (digit + 1));
	if (s == NULL)
		return (NULL);
	get_s(digit, number, s);
	if (n < 0)
		s[0] = 45;
	s[digit] = 0;
	return (s);
}
