/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_symbols.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:09:38 by pgenesis          #+#    #+#             */
/*   Updated: 2019/09/24 23:10:11 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	count_symbols(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
