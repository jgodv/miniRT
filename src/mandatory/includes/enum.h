/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:12:08 by jgo               #+#    #+#             */
/*   Updated: 2023/05/27 23:27:06 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUM_H
# define ENUM_H

typedef enum e_object_type	t_object_type;

enum						e_win
{
	WIN_WIDTH = 1280,
	WIN_HEIGHT = 720
};

enum						e_object_type
{
	SP
};

#endif