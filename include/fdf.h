/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 19:11:51 by mpinson           #+#    #+#             */
/*   Updated: 2017/09/02 19:11:52 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"
# define IMG_WIDTH (2560)
# define IMG_HEIGHT (1440)

typedef	struct		s_gen
{
	int				**ad_x;
	int				**ad_y;
	int				**ad_z;
	int				**bd_x;
	int				**bd_y;
	int				larg_x;
	int				larg_y;
	void			*win;
	void			*mlx;
	void			*img;
	char			*img_ptr;
	int				bpp;
	int				s_l;
	int				endian;
	int				x0;
	int				y0;
	int				x1;
	int				y1;
	float			zoom;
	int				x;
	int				y;
	int				color;
	float			xrot;
	float			yrot;
	int				test;
	int				red;
	int				green;
	int				blue;
}					t_gen;

typedef	struct		s_bresenham
{
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	int				err;
	int				e2;
}					t_bresenham;

void				ft_clear(t_gen *g);
int					ft_strlen_s(char *str);
int					ft_strlen_tab(char **tab);
int					ft_check(char *str);
int					ft_pars(t_gen *g, char *pass);
void				bresenham(t_gen *g, int color);
int					key_pressed(int kc, t_gen *g);
int					red_cross(t_gen *g);
void				ft_test(t_gen *g);
void				bresenham_2(t_gen *g);
void				ft_free_tab(char **tab);
long				ft_atol(const char *str);
void				ft_putpixel_in_img(int x, int y, t_gen *g, int color);
int					init(t_gen *g);
void				ft_free_tab2(char **tab, t_gen *g);
void				bmp_write(t_gen *g);

#endif
