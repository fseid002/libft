/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:32:31 by fseid             #+#    #+#             */
/*   Updated: 2025/10/13 23:03:56 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	while (len && ft_strchr(set, *s1))
	{
		--len;
		++s1;
	}
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, len);
	p[len] = '\0';
	return (p);
}
