/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:38:15 by jgo               #+#    #+#             */
/*   Updated: 2023/07/10 11:25:55 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include "defs.h"
#include "utils.h"

void	destroy(t_meta *meta)
{
	mlx_delete_image(meta->mlx_assets.mlx, meta->mlx_assets.img);
	mlx_close_window(meta->mlx_assets.mlx);
	mlx_terminate(meta->mlx_assets.mlx);
	ft_lstclear(&meta->spot_lights, free);
	objs_clear(&meta->objs, free);
	free(meta);
	exit(EXIT_SUCCESS);
}
