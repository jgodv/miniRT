/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:02:38 by jgo               #+#    #+#             */
/*   Updated: 2023/06/30 19:26:44 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tensor.h"

t_mat3	mat3_init(t_vec3 a, t_vec3 b, t_vec3 c)
{
	const t_mat3	mat3 = {a, b, c};

	return (mat3);
}
