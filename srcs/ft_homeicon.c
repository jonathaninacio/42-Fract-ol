/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_homeicon.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:15:29 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:38:44 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**              		  ft_homeicon(t_data *)                |
**                                                             |
**                 graphical back to menu icon                 |
*/

void	ft_homeicon(t_data *z)
{
	int w;
	int h;
	int a;

	w = 30;
	h = 30;
	a = 0;
	z->home = mlx_xpm_file_to_image(z->mlx, "img/homeicon.xpm", &w, &h);
	mlx_put_image_to_window(z->mlx, z->win, z->home, 5, 5);
	mlx_destroy_image(z->mlx, z->home);
}
