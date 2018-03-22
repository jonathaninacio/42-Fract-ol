/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:12:21 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 02:30:47 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                          button()                           |
**                                                             |
**         used to associate mouse clicks with events          |
*/

int	button(int click, int x, int y, t_data *z)
{
	z->fracmouse = 0;
	if (z->kelfrac != 0 && click == 2 && z->rainbow == 1)
		z->rainbow = 0;
	else if (z->kelfrac != 0 && click == 2)
		z->rainbow = 1;
	if (z->kelfrac != 0 && click == 1 && x >= 5 && x <= 35 && y >= 5 && y <= 35)
		ft_menu(z);
	if (z->kelfrac == 0)
		ft_kelfraclick(click, x, y, z);
	if (click == 7 || click == 4)
		z->scrollzoom = z->scrollzoom * 1.5;
	if ((click == 6 || click == 5) && z->scrollzoom > 1)
		z->scrollzoom = z->scrollzoom / 1.5;
	if (z->scrollzoom > 3)
		z->freeze = 1;
	ft_redraw(z);
	return (0);
}
