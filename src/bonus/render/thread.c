/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:35:56 by jgo               #+#    #+#             */
/*   Updated: 2023/06/20 15:55:32 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include "defs.h"
#include "render.h"
#include "utils.h"

void	start_thread_render(t_meta *meta)
{
	int	i;

	i = -1;
	while (++i < THD_NUM)
	{
		if (pthread_create(meta->thd_pool.tids + i, NULL, render, meta->thd_pool.rendrer + i))
			return (error_handler(THD_ERR));
	}
	while (i >= 0)
		pthread_join(meta->thd_pool.tids[i--], NULL);
	printf("finish thread render!\n");
}