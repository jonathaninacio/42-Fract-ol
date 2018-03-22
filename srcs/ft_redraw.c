/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redraw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:20:40 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:35:30 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                     ft_redraw(t_data)                       |
**                                                             |
**            functon that restart a fresh drawing             |
**                     of the main image                       |
*/

void	ft_redraw(t_data *z)
{
	ft_memset(z->modifiable, 0, FULLHDX * FULLHDY * 4);
	if (z->kelfrac == 1 || z->kelfrac == 3)
		ft_mandelbrot(*z);
	if (z->kelfrac == 2 || z->kelfrac == 4 || z->kelfrac == 5 || \
			z->kelfrac == 6)
		ft_julia(*z);
}
