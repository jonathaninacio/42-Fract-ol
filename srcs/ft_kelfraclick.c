/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kelfraclick.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:17:09 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:37:43 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                     ft_kelfraclick()                        |
**                                                             |
**  if kelfrac == 0 materialize all the buttons from the menu  |
*/

void	ft_kelfraclick(int click, int x, int y, t_data *z)
{
	if (click == 1 && x >= 0 && x <= 265 && y >= 200 && y <= 400)
		z->kelfrac = 1;
	if (click == 1 && x >= 266 && x <= 530 && y >= 200 && y <= 400)
		z->kelfrac = 2;
	if (click == 1 && x >= 531 && x <= FULLHDX && y >= 200 && y <= 400)
		z->kelfrac = 3;
	if (click == 1 && x >= 0 && x <= 265 && y >= 401 && y <= FULLHDY)
		z->kelfrac = 4;
	if (click == 1 && x >= 266 && x <= 530 && y >= 401 && y <= FULLHDY)
		z->kelfrac = 5;
	if (click == 1 && x >= 531 && x <= FULLHDX && y >= 401 && y <= FULLHDY)
		z->kelfrac = 6;
}
