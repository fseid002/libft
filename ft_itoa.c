/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:37:06 by fseid             #+#    #+#             */
/*   Updated: 2025/10/13 19:49:08 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_digitlen(int n)
{
	size_t	len;
	long	t;

	len = 1;
	t = n;
	if (n < 0)
	{
		++len;
		t = -t;
	}
	while (t >= 10)
	{
		t /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	i;
	int		len;
	char	*p_s;

	i = n;
	len = ft_digitlen(n);
	if (n < 0)
		i = -i;
	p_s = malloc(len + 1);
	if (!p_s)
		return (NULL);
	p_s[len] = '\0';
	if (i == 0)
		p_s[--len] = '0';
	while (i)
	{
		p_s[--len] = '0' + (i % 10);
		i /= 10;
	}
	if (n < 0)
		p_s[0] = '-';
	return (p_s);
}

/*#include <stdio.h>

int main(void)
{
    printf("0: '%s'\n", ft_itoa(0));           // "0"
    printf("123: '%s'\n", ft_itoa(123));       // "123"
    printf("-456: '%s'\n", ft_itoa(-456));     // "-456"
    printf("INT_MAX: '%s'\n", ft_itoa(2147483647));  // "2147483647"
    printf("INT_MIN: '%s'\n", ft_itoa(-2147483648)); // "-2147483648"

    return (0);
}*/
