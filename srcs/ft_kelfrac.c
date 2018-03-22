/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kelfrac.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:16:03 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:39:28 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**              		  ft_kelfrac(t_data )                  |
**                                                             |
**           draw a fractal from the main function             |
*/

void	ft_kelfrac(t_data z)
{
	if (z.kelfrac == 0)
		ft_menu(&z);
	else if (z.kelfrac == 1)
		ft_mandelbrot(z);
	else if (z.kelfrac == 2)
		ft_julia(z);
	else if (z.kelfrac == 3)
		ft_mandelbrot(z);
	else if (z.kelfrac == 4)
		ft_julia(z);
	else if (z.kelfrac == 5)
		ft_julia(z);
	else if (z.kelfrac == 6)
		ft_julia(z);
}
