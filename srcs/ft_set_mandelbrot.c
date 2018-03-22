/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_mandelbrot.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:21:56 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:31:17 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**               ft_set_mandelbrot(t_fractol *)                |
**                                                             |
**  				       set the t_fractol struct            |
*/

void		ft_set_mandelbrot(t_fractol *fr, t_data *z)
{
	fr->i = 0;
	fr->x = 0;
	fr->y = 0;
	fr->zoom = 250 * z->scrollzoom;
	fr->x1 = -550;
	fr->y1 = -300;
	fr->max = 30 + z->iter;
}
