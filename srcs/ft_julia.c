/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:15:47 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:39:09 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                       ft_julia(t_data)                      |
**                                                             |
**  				                julia algo                 |
*/

void	ft_julia(t_data z)
{
	t_fractol fr;

	ft_set_julia(&fr, &z);
	while (fr.x < FULLHDX)
	{
		fr.y = 0;
		while (fr.y < FULLHDY)
		{
			fr.c_r = 0.0 + z.move_x;
			fr.c_i = 0.0 + z.move_y;
			fr.z_r = (fr.x + fr.x1 + z.xmov) / fr.zoom;
			fr.z_i = (fr.y + fr.y1 + z.ymov) / fr.zoom;
			fr.i = 0;
			ft_kelfracdraw(&fr, &z);
			fr.y++;
		}
		fr.x++;
	}
	mlx_put_image_to_window(z.mlx, z.win, z.imgbg, 0, 0);
	ft_homeicon(&z);
}
