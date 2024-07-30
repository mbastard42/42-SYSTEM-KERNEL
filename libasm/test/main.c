#include "header.h"

int main() {

    printf("\ntesting ft_strlen:\n\n");

    printf("strlen(\"test\") = %d\n", strlen("test"));
    printf("ft_strlen(\"test\") = %d\n", ft_strlen("test"));

    printf("strlen(\"\") = %d\n", strlen(""));
    printf("ft_strlen(\"\") = %d\n", ft_strlen(""));
    
    // printf("strlen(NULL) = %d\n", strlen(NULL));
    // printf("ft_strlen(NULL) = %d\n", ft_strlen(NULL));

    printf("\ntesting ft_strcpy:\n\n");

    char * dst1 = calloc(5, sizeof(char));

    printf("strcpy(dst1, \"test\") = %s\n", strcpy(dst1, "test"));
    printf("ft_strcpy(dst1, \"test\") = %s\n", ft_strcpy(dst1, "test"));

    printf("strcpy(dst1, \"\") = %s\n", strcpy(dst1, ""));
    printf("ft_strcpy(dst1, \"\") = %s\n", ft_strcpy(dst1, ""));

    // printf("strcpy(dst1, NULL) = %s\n", strcpy(dst1, NULL));
    // printf("ft_strcpy(dst1, NULL) = %s\n", ft_strcpy(dst1, NULL));

    return 0;
}