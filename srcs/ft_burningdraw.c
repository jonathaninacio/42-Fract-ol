/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_burningdraw.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:14:02 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 02:36:40 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**              ft_mandeldraw(t_fractol *, t_data)             |
**                                                             |
**  				       iterate and draw a pixel            |
**         only if iter is inferior of max iteration           |
*/

void	ft_burningdraw(t_fractol *fr, t_data z)
{
	while (fr->z_r * fr->z_r + fr->z_i * fr->z_i < 4 && fr->i < fr->max)
	{
		fr->tmp = fr->z_r;
		fr->z_r = fr->z_r * fr->z_r - fr->z_i * fr->z_i + fr->c_r;
		fr->z_i = 2 * fabs(fr->z_i * fr->tmp) + fr->c_i;
		fr->i++;
		ft_rainbowshit(&z, 15);
	}
	if (fr->i != fr->max && z.rainbow == 0)
		drawpixel(z.modifiable, fr->x, fr->y, set_color(0, fr->i * \
					(255 / fr->max), fr->i * (255 / fr->max), \
					fr->i * (255 / fr->max)));
	if (fr->i != fr->max && z.rainbow == 1)
		drawpixel(z.modifiable, fr->x, fr->y, set_color(0, z.red, \
					z.gre, z.blu));
}
