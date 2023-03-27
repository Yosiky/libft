#include <stdio.h>
#include "libft.h"

int main(void) {
    char dst[100];
    char src[] = "Hello, world!";
    int value = ft_strlen(src);

    ft_strlcat(dst, src, value);
    printf("%s\n", dst);
    return (0);
}
