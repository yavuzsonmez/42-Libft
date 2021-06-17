/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 08:36:11 by ysonmez           #+#    #+#             */
/*   Updated: 2021/06/17 11:44:53 by ysonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include <stdio.h>

void *malloc(size_t size);

static int	count_digit(unsigned int n)
{
	size_t i;

	i = 1;
	while(n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	get_char(unsigned int n)
{
	char c;

	c = n % 10 + 48;
	//printf("get_char : %c\n", c);
	return (c);
}

char		*ft_itoa(int n)
{
	char			*s;
	size_t			i;
	size_t			digit;
	unsigned int	number;

	s = NULL;
	if (n < 0)
		number = n * (-1);
	else
		number = n;
	digit = count_digit(number) + 1;
	if(!(s = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	if (n < 0)
		s[0] = 45;
	i = digit - 1;
	while(i > 0)
	{
		s[i] = get_char(number);
		printf("%c\n", s[i]);
		number /= 10;
		i--;
	}
	s[digit] = 0;
	return (s);
}

int main (void)
{
	printf("itoa return = %s\n", ft_itoa(247));
	return (0);
}

