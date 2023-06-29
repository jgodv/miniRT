/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:09:46 by jgo               #+#    #+#             */
/*   Updated: 2023/06/29 13:48:52 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

# include "defs_bonus.h"

void		destroy(t_meta *meta);

// color.c
t_rgb		rgb_init_int(const int r, const int g, const int b);
uint32_t	rgba_to_color(t_rgb rgb);
t_rgb		color_to_rgba(uint8_t *color);
t_rgb		rgba_min(t_rgb a, t_rgb b);

// atod.c
double		atod(char *str);

// error.c
void		error_handler(t_error_type type);

// objs.c
void		objsadd_back(t_obj **objs, t_obj *new);
void		objs_clear(t_obj **objs, void (*del)(void *));

// number.c
double		clamp(const double x, const double min, const double max);
float		float_modulo(const float x);

#endif
