/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouassit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:05:35 by mouassit          #+#    #+#             */
/*   Updated: 2021/02/19 11:05:38 by mouassit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

char	*ft_strdup(const char *s1)
{
	char		*dst;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	dst = (char*)malloc(sizeof(*dst) * (i + 1));
	if (!dst)
		return (NULL);
	while (s1[j])
	{
		dst[j] = s1[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

int main(int argc, char **argv)
{
	char *str;

    return(0);
}