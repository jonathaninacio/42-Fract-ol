/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:21:34 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:30:55 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                     set_data(t_data)                        |
**                                                             |
**    set the t_data struct, mlx_init, window, motion var,     |
**   3(rgb) colors from 0 -> 255, set it as the int color,     |
**                void* image and int* image                   |
*/

void		ft_set_data(t_data *z)
{
	int a;

	a = 0;
	z->mlx = mlx_init();
	z->win = mlx_new_window(z->mlx, FULLHDX, FULLHDY, "fractol");
	z->red = 0;
	z->gre = 0;
	z->blu = 15;
	z->color = set_color(0, z->red, z->gre, z->blu);
	z->imgbg = mlx_new_image(z->mlx, FULLHDX, FULLHDY);
	z->modifiable = (int *)mlx_get_data_addr(z->imgbg, &a, &a, &a);
	z->kelfrac = 0;
	z->scrollzoom = 1;
	z->freeze = 0;
	z->rainbow = 0;
	z->fracmouse = 0;
	z->iter = 0;
	z->xmov = 0;
	z->ymov = 0;
}
