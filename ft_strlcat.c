/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 23:56:52 by fseid             #+#    #+#             */
/*   Updated: 2025/10/13 22:10:15 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d_size;
	size_t	s_size;

	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	if (dstsize <= d_size)
		return (dstsize + s_size);
	i = d_size;
	j = 0;
	while ((i + j) < (dstsize - 1) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (d_size + s_size);
}
/*int	main(void)
{
	char	dst[20] = "Hello";  // Destination buffer
	char	src[] = " World";   // Source string
	size_t	result;

	// Test strlcat with size 15
	result = ft_strlcat(dst, src, 15);
	
	printf("Destination: %s\n", dst);    // Should print "Hello World"
	printf("Return value: %zu\n", result); // Should print 11 (5 + 6)
	
	// Test with smaller size (truncation)
	char dst2[10] = "Hello";
	result = ft_strlcat(dst2, src, 10);
	
	printf("Truncated: %s\n", dst2);     // Might be "Hello Wo" 
	printf("Return value: %zu\n", result); // Should print 11 (5 + 6)
	
	return (0);
}*/
