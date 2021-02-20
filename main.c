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

char		*tst(char *dest, const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
	return (dest);
}

int main()
{
    char *dest;
    char *str;
    dest = malloc(100);

    str = ft_strcpy(dest,"Hello");
    printf("%s\n",str);
    free(dest);
    return(0);
}