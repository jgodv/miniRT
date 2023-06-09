/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghwal <sanghwal@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:11:58 by jgo               #+#    #+#             */
/*   Updated: 2023/06/30 19:34:51 by sanghwal         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_BONUS_H
# define CONST_BONUS_H

# include "color_bonus.h"

# define FOCAL_LENGTH		1.0
# define LUMEN				3
# define SAMPLES_PER_PIXEL	10
# define THD_NUM			6

# define ERR_ARGS			"Incorrect number of arguments"
# define ERR_AMB			"Invalid ambient information in file"
# define ERR_LIGHT			"Invalid light information in file"
# define ERR_CAM			"Invalid camera information in file"
# define ERR_SP				"Invalid sphere information in file"
# define ERR_PL				"Invalid plane information in file"
# define ERR_CY				"Invalid cylinder information in file"
# define ERR_CO				"Invalid cone information in file"
# define ERR_POINT			"Invalid point information in file"
# define ERR_VEC			"Invalid vector information in file"
# define ERR_RGB			"Invalid RGB information in file"
# define ERR_OPEN			"Unable to open the specified file"
# define ERR_PATH_OPEN		"Unable to open the file for that path"
# define ERR_LINE_LEN		"Each line has a different length"
# define ERR_ALLOCATE		"Memory allocation failed"
# define ERR_INVALID_EX		"Invalid file Extension"
# define ERR_INVALID_TYPE	"Invaild type in file"
# define ERR_THD			"Error occured during pthread function"
# define ERR_OPT			"Invaild option in file"

#endif
