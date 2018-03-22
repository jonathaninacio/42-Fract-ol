/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fracmouse_suite.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:14:55 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:42:03 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_fracmouse4(t_data *z)
{
	int i;
	int j;

	i = 3;
	while (i <= 261)
	{
		j = 403;
		while (j <= 596)
		{
			if (i % 2 == 0 && j % 2 == 0)
				drawpixel(z->menum, i, j, set_color(0, 0, 200, 30));
			j++;
		}
		i++;
	}
}

void	ft_fracmouse5(t_data *z)
{
	int i;
	int j;

	i = 272;
	while (i <= 529)
	{
		j = 403;
		while (j <= 596)
		{
			if (i % 2 == 0 && j % 2 == 0)
				drawpixel(z->menum, i, j, set_color(0, 0, 200, 30));
			j++;
		}
		i++;
	}
}

void	ft_fracmouse6(t_data *z)
{
	int i;
	int j;

	i = 538;
	while (i <= 797)
	{
		j = 403;
		while (j <= 596)
		{
			if (i % 2 == 0 && j % 2 == 0)
				drawpixel(z->menum, i, j, set_color(0, 0, 200, 30));
			j++;
		}
		i++;
	}
}
