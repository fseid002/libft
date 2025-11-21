/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:15:46 by fseid             #+#    #+#             */
/*   Updated: 2025/10/11 18:40:17 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;

	t = (char *)s;
	t += ft_strlen(s);
	while (t != s && *t != c)
		--t;
	if (*t == c)
		return ((char *)t);
	return (NULL);
}
