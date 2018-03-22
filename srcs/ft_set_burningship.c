/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_burningship.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:21:22 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:34:48 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                 ft_set_julia(t_fractol *)                   |
**                                                             |
**  				       set the t_fractol struct            |
*/

void		ft_set_burningship(t_fractol *fr, t_data *z)
{
	fr->i = 0;
	fr->x = 0;
	fr->y = 0;
	fr->zoom = 190 * z->scrollzoom;
	fr->x1 = -500;
	fr->y1 = -400;
	fr->max = 30 + z->iter;
}
