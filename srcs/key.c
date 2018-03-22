/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:22:55 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:30:10 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                        key(), key2()                        |
**                                                             |
**       function used to associate keypress with events       |
*/

int		key(int keycode, t_data *z)
{
	if (keycode == 53)
		destroy(z);
	if (z->freeze == 0 && keycode == 49)
		z->freeze = 1;
	else if (z->freeze == 1 && keycode == 49 && z->scrollzoom < 3)
		z->freeze = 0;
	if (keycode == 34)
		z->iter++;
	if (keycode == 123)
		z->xmov = z->xmov - (50 / (z->scrollzoom / 20) + 10);
	if (keycode == 124)
		z->xmov = z->xmov + (50 / (z->scrollzoom / 20) + 10);
	if (keycode == 126)
		z->ymov = z->ymov - (50 / (z->scrollzoom / 20) + 10);
	if (keycode == 125)
		z->ymov = z->ymov + (50 / (z->scrollzoom / 20) + 10);
	ft_redraw(z);
	return (0);
}
