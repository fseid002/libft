/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fseid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:58:15 by fseid             #+#    #+#             */
/*   Updated: 2025/10/15 00:22:18 by fseid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Print to standard output (screen)
    ft_putchar_fd('H', 1);
    ft_putchar_fd('3', 1);
    ft_putchar_fd('!', 1);
    ft_putchar_fd('\n', 1);  // New line
    
    // Print to standard error (usually also screen, but separate channel)
    ft_putchar_fd('E', 2);
    ft_putchar_fd('r', 2);
    ft_putchar_fd('r', 2);
    ft_putchar_fd('\n', 2);
    
    return (0);
}*/
