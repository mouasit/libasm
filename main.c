#include "libasm.h"
#include <stdio.h>
int main()
{
    char *str;
    str = malloc(100);
    char buff[20];
    printf("ft_strlen : %zu\n",ft_strlen("Hello"));
    printf("ft_strcpy : %s\n",ft_strcpy(buff,"Hello"));
    free(str);
    printf("ft_strcmp : %d\n",ft_strcmp("Hello","Hello"));
    printf("ft_strdup : %s\n",ft_strdup("Hello"));
    ft_write(1,"ft_write : Hello\n",17);
    ft_read(1,buff,10);
    return(0);
}