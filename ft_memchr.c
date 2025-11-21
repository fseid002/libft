/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 00:05:00 by fseid             #+#    #+#             */
/*   Updated: 2025/10/13 20:54:07 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		t;

	p = s;
	t = (unsigned char)c;
	while (n--)
	{
		if (*p == t)
			return ((void *)p);
		++p;
	}
	return (NULL);
}
/*Searches for a specific byte value in 
 * a memory block and returns a pointer to the first occurrence.
 unsigned char   t; Store the byte value we're searching for*/
