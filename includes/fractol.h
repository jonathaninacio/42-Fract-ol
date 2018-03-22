/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 03:09:24 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/06 03:26:00 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define FULLHDX 800
# define FULLHDY 600

# include </usr/local/include/mlx.h>
# include <math.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_fractol
{
	int				x;
	int				y;
	double			x1;
	double			y1;
	double			zoom;
	double			max;
	double			c_r;
	double			c_i;
	double			z_r;
	double			z_i;
	double			i;
	double			tmp;
}				t_fractol;

typedef	struct	s_data
{
	void			*mlx;
	void			*win;
	int				color;
	unsigned char	red;
	unsigned char	gre;
	unsigned char	blu;
	void			*imgbg;
	int				*modifiable;
	double			move_x;
	double			move_y;
	int				kelfrac;
	double			scrollzoom;
	int				freeze;
	int				rainbow;
	int				fracmouse;
	void			*menu;
	int				*menum;
	void			*home;
	int				iter;
	int				xmov;
	int				ymov;
}				t_data;

void			ft_redraw(t_data *z);
int				button(int click, int x, int y, t_data *z);
void			ft_kelfraclick(int click, int x, int y, t_data *z);
void			drawpixel(int *z, int x, int y, int color);
int				set_color(unsigned char a, unsigned char r, \
				unsigned char v, unsigned char b);
void			ft_set_data(t_data *z);
void			ft_set_mandelbrot(t_fractol *fr, t_data *z);
void			ft_mandeldraw(t_fractol *fr, t_data z);
void			ft_burningdraw(t_fractol *fr, t_data z);
void			ft_heartdraw(t_fractol *fr, t_data z);
void			ft_beastdraw(t_fractol *fr, t_data z);
void			ft_kelfracdraw(t_fractol *fr, t_data *z);
void			ft_mandelbrot(t_data z);
void			ft_set_julia(t_fractol *fr, t_data *z);
void			ft_set_burningship(t_fractol *fr, t_data *z);
void			ft_julia(t_data z);
int				key(int keycode, t_data *z);
int				motion(int x, int y, t_data *z);
void			ft_fracmouse1(t_data *z);
void			ft_fracmouse2(t_data *z);
void			ft_fracmouse3(t_data *z);
void			ft_fracmouse4(t_data *z);
void			ft_fracmouse5(t_data *z);
void			ft_fracmouse6(t_data *z);
int				destroy(t_data *z);
void			ft_rainbowshit(t_data *z, int x);
void			ft_menu(t_data *z);
void			ft_multifracmouse(t_data *z);
int				ft_expose(t_data *z);
void			multi_hook(t_data *z);
void			ft_homeicon(t_data *z);
void			ft_kelfrac(t_data z);

/*
** ____________________________________________________________
**                                                             |
**                       minilibft.c                           |
*/

void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);

#endif
