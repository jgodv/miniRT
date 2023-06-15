/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:08:43 by jgo               #+#    #+#             */
/*   Updated: 2023/06/14 16:58:54 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include "enum.h"
# include "minirt.h"

typedef struct s_mlx_assets	t_mlx_assets;
typedef struct s_rgba		t_rgba;
typedef struct s_ambient	t_ambient;
typedef struct s_ray		t_ray;
typedef struct s_canvas		t_canvas;
typedef struct s_camera		t_camera;
typedef struct s_scene		t_scene;
typedef struct s_spot_light	t_spot_light;
typedef struct s_sphere		t_sphere;
typedef struct s_plane		t_plane;
typedef struct s_cylinder	t_cylinder;
typedef struct s_vec3		t_point3;
typedef struct s_meta		t_meta;
typedef struct s_record		t_record;
typedef struct s_obj		t_obj;
typedef struct s_quad_coeff	t_quad_coeff;

struct						s_quad_coeff
{
	double					a;
	double					b;
	double					c;
};

struct						s_rgba
{
	double					r;
	double					g;
	double					b;
	double					a;
};

struct						s_mlx_assets
{
	mlx_t					*mlx;
	mlx_image_t				*img;
};

struct						s_ambient
{
	t_object_type			type;
	double					ratio;
	t_rgba					rgba;
};

struct						s_camera
{
	t_object_type			type;
	t_point3				view_point;
	t_vec3					normal_vec3;
	t_vec3					x;
	t_vec3					y;
	t_vec3					z;
	double					fov;
	double					viewport_h;
	double					viewport_w;
	t_vec3					horizontal;
	t_vec3					vertical;
	double					focal_len;
	t_point3				left_bottom;
	double					pitch;
	double					yaw;
	t_vec3					front;
	t_vec3					pos;
	t_vec3					up;
};

struct						s_spot_light
{
	t_object_type			type;
	t_point3				light_point;
	double					ratio;
	t_rgba					rgba;
};

struct						s_sphere
{
	t_object_type			type;
	t_point3				center_point;
	double					diameter;
	double					radius;
	t_rgba					rgba;
};

struct						s_plane
{
	t_object_type			type;
	t_point3				point;
	t_vec3					normal_vec3;
	t_rgba					rgba;
};

struct						s_cylinder
{
	t_object_type			type;
	t_point3				center_point;
	t_vec3					normal_vec3;
	double					diameter;
	double					height;
	t_rgba					rgba;
};

struct						s_ray
{
	t_point3				origin;
	t_vec3					direction;
};

struct						s_record
{
	t_point3				point;
	t_vec3					normal_vec3;
	bool					front_face;
	double					t;
	t_rgba					rgba;
	t_obj					*obj;
};

struct						s_canvas
{
	int						width;
	int						height;
	double					aspect_ratio;
};

struct						s_scene
{
	t_canvas				canvas;
	t_ray					ray;
};

union						u_obj
{
	t_sphere				sphere;
	t_plane					plane;
	t_cylinder				cylinder;
};

struct						s_obj
{
	t_object_type			type;
	union u_obj				content;
	t_obj					*next;
};

struct						s_meta
{
	t_mlx_assets			mlx_assets;
	t_ambient				ambient;
	t_scene					scene;
	t_camera				camera;
	t_list					*spot_lights;
	t_obj					*objs;
};

#endif
