/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilibft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:24:53 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:27:31 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*z;
	size_t	i;

	z = b;
	i = 0;
	while (i < len)
		z[i++] = c;
	b = z;
	return (b);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		ft_putchar(s[i++]);
}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
