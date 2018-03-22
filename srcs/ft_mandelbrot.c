/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandelbrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:17:28 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:32:29 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                    ft_mandelbrot(t_data)                    |
**                                                             |
**  				             mandelbrot algo               |
*/

void	ft_mandelbrot(t_data z)
{
	t_fractol fr;

	if (z.kelfrac == 1)
		ft_set_mandelbrot(&fr, &z);
	if (z.kelfrac == 3)
		ft_set_burningship(&fr, &z);
	while (fr.x < FULLHDX)
	{
		fr.y = 0;
		while (fr.y < FULLHDY)
		{
			fr.c_r = (fr.x + fr.x1 + z.xmov) / fr.zoom;
			fr.c_i = (fr.y + fr.y1 + z.ymov) / fr.zoom;
			fr.z_r = 0.0 + z.move_x;
			fr.z_i = 0.0 + z.move_y;
			fr.i = 0;
			ft_kelfracdraw(&fr, &z);
			fr.y++;
		}
		fr.x++;
	}
	mlx_put_image_to_window(z.mlx, z.win, z.imgbg, 0, 0);
	ft_homeicon(&z);
}
