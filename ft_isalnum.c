/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:10:28 by fseid             #+#    #+#             */
/*   Updated: 2025/10/11 18:05:28 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*#include <stdio.h>

int	main()
{
	printf("%d %d %d\n", ft_isalnum('A'), ft_isalnum('5'), ft_isalnum('@'));
}*/
