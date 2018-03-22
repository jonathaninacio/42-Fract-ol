/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:25:47 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:27:44 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/*
** ____________________________________________________________
**                                                             |
**                     multi_hook(t_data)                      |
**                                                             |
**    launch multiple mlx_hook :                               |
**                 - KeyPress -> KeyRelease                    |
**                 - DestroyNotify -> NoEventMask              |
**                 - MotionNotify -> NoEventMask               |
**                 - ButtonPress -> ButtonRelease              |
*/

void	multi_hook(t_data *z)
{
	mlx_hook(z->win, 2, 3, key, z);
	mlx_hook(z->win, 17, 0L, destroy, z);
	mlx_hook(z->win, 6, 0L, motion, z);
	mlx_hook(z->win, 4, 0L, button, z);
	mlx_expose_hook(z->win, ft_expose, z);
}
