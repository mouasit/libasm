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
#include <string.h>
#include <stdlib.h>

int		tst(char *s1, const char *s2)
{
	int x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	return (s1[x] - s2[x]);
}

int main()
{
    printf("%d\n",strcmp("Hello","Hellod"));
	printf("%d\n",ft_strcmp("Hello","Hellod"));
    return(0);
}