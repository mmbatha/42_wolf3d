/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <mmbatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 10:49:52 by mmbatha           #+#    #+#             */
/*   Updated: 2018/08/24 17:26:40 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void			ft_putendl(char const *str)
{
	if (str)
	{
		ft_putstr(str);
		ft_putchar('\n');
	}
}
