#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *arr;

    arr = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!arr)
        return(NULL);
    i = 0;
    while(i < ft_strlen(s))
    {
        arr[i] = (*f)(i, s[i]);
        i++;
    }
    arr[i] = '\0';
    return (arr);
}
