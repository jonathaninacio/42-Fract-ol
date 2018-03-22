/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fracmouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:14:35 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:13:01 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                       ft_fracmouse()                        |
**                                                             |
**        draw an highlight around the fractal thumbnail       |
*/

void	ft_fracmouse1(t_data *z)
{
	int i;
	int j;

	i = 3;
	while (i <= 261)
	{
		j = 200;
		while (j <= 393)
		{
			if (i % 2 == 0 && j % 2 == 0)
				drawpixel(z->menum, i, j, set_color(0, 0, 200, 30));
			j++;
		}
		i++;
	}
}

void	ft_fracmouse2(t_data *z)
{
	int i;
	int j;

	i = 272;
	while (i <= 529)
	{
		j = 200;
		while (j <= 393)
		{
			if (i % 2 == 0 && j % 2 == 0)
				drawpixel(z->menum, i, j, set_color(0, 0, 200, 30));
			j++;
		}
		i++;
	}
}

void	ft_fracmouse3(t_data *z)
{
	int i;
	int j;

	i = 538;
	while (i <= 797)
	{
		j = 200;
		while (j <= 393)
		{
			if (i % 2 == 0 && j % 2 == 0)
				drawpixel(z->menum, i, j, set_color(0, 0, 200, 30));
			j++;
		}
		i++;
	}
}
