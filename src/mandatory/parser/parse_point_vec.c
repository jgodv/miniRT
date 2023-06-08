/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_point_vec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghwal <sanghwal@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:24:25 by sanghwal          #+#    #+#             */
/*   Updated: 2023/06/08 15:24:57 by sanghwal         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"
#include "parser.h"

static double	get_point(char *str, int *i)
{
	int		len;
	char	*tmp;
	int		j;

	if (str[*i] == '\0')
		return (0);
	len = 0;
	while (str[*i] != ',' && str[*i] != '\0')
	{
		len++;
		(*i)++;
	}
	if (len == 0)
		return (0);
	tmp = ft_malloc(len + 1);
	tmp[len] = '\0';
	j = 0;
	while (len > 0)
		tmp[j++] = str[(*i) - (len--)];
	return (check_to_double(tmp));
}

t_point3	parse_point3(char *str)
{
	t_point3	point;
	int			i;

	if (!check_comma(str))
		parser_error("Invaild information in point\n");
	i = 0;
	point.x = get_point(str, &i);
	i++;
	point.y = get_point(str, &i);
	i++;
	point.z = get_point(str, &i);
	return (point);
}

t_vec3	parse_vec3(char *str)
{
	t_vec3	vec;
	int		i;

	if (!check_comma(str))
		parser_error("Invaild information in vector\n");
	i = 0;
	vec.x = get_point(str, &i);
	i++;
	vec.y = get_point(str, &i);
	i++;
	vec.z = get_point(str, &i);
	return (vec);
}