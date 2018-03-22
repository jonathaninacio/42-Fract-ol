/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:25:09 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:27:06 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                          motion()                           |
**                                                             |
**        used to associate mouse movement with events         |
*/

int		motion(int x, int y, t_data *z)
{
	if (z->freeze == 0)
	{
		z->move_x = (double)(x - FULLHDX / 2) / 1000;
		z->move_y = (double)(y - FULLHDY / 2) / 1000;
	}
	if (z->rainbow == 1)
		ft_rainbowshit(z, 15);
	if (z->kelfrac == 0)
	{
		if (x >= 0 && x <= 265 && y >= 200 && y <= 400)
			z->fracmouse = 1;
		if (x >= 266 && x <= 530 && y >= 200 && y <= 400)
			z->fracmouse = 2;
		if (x >= 531 && x <= FULLHDX && y >= 200 && y <= 400)
			z->fracmouse = 3;
		if (x >= 0 && x <= 265 && y >= 401 && y <= FULLHDY)
			z->fracmouse = 4;
		if (x >= 266 && x <= 530 && y >= 401 && y <= FULLHDY)
			z->fracmouse = 5;
		if (x >= 531 && x <= FULLHDX && y >= 401 && y <= FULLHDY)
			z->fracmouse = 6;
		ft_menu(z);
	}
	ft_redraw(z);
	return (0);
}
