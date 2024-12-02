/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:20:35 by opopov            #+#    #+#             */
/*   Updated: 2024/12/02 16:34:11 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	decimal_path(int x, int count)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_itoa(x);
	while (s[i] != '\0')
	{
		count += write(1, &s[i], 1);
		i++;
	}
	free(s);
	return (count);
}
