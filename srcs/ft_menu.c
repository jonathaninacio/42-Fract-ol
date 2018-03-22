/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:18:43 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:36:17 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                			  ft_menu(t_data)                  |
**                                                             |
**                    graphical fractol menu                   |
*/

void	ft_menu(t_data *z)
{
	int w;
	int h;
	int a;

	w = FULLHDX;
	h = FULLHDY;
	a = 0;
	z->kelfrac = 0;
	z->red = 0;
	z->gre = 0;
	z->blu = 15;
	z->rainbow = 0;
	z->iter = 0;
	z->scrollzoom = 1;
	z->xmov = 0;
	z->ymov = 0;
	z->menu = mlx_xpm_file_to_image(z->mlx, "img/fractol.xpm", &w, &h);
	z->menum = (int *)mlx_get_data_addr(z->menu, &a, &a, &a);
	ft_multifracmouse(z);
	mlx_put_image_to_window(z->mlx, z->win, z->menu, 0, 0);
	mlx_destroy_image(z->mlx, z->menu);
}
