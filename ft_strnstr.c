/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 01:24:14 by fseid             #+#    #+#             */
/*   Updated: 2025/10/11 18:57:19 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;

	if (*little == '\0')
		return ((char *)big);
	llen = ft_strlen(little);
	while (*big && len >= llen)
	{
		if (ft_strncmp(big, little, llen) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
