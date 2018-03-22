/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kelfracdraw.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:16:15 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:38:21 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**            ft_beastdraw(t_fractol *, t_data *)              |
**                                                             |
**  				    choose wich fractal is to draw         |
*/

void	ft_kelfracdraw(t_fractol *fr, t_data *z)
{
	if (z->kelfrac == 1)
		ft_mandeldraw(fr, *z);
	if (z->kelfrac == 3)
		ft_burningdraw(fr, *z);
	if (z->kelfrac == 2)
		ft_mandeldraw(fr, *z);
	if (z->kelfrac == 4)
		ft_burningdraw(fr, *z);
	if (z->kelfrac == 5)
		ft_beastdraw(fr, *z);
	if (z->kelfrac == 6)
		ft_heartdraw(fr, *z);
}
