
#include <stddef.h>

size_t ft_strlen(const char *s) {
     int i;

     i = 0;
     while(s[i] != '\n'){
         i++;
     }
     return (i);
 }