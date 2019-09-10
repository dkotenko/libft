#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>

/* part 1 */
int ft_atoi (const char *s);
void bzero(void *destination, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int isascii(int c);
int ft_isdigit(int c);
int isprint(int c);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memchr (const void *arr, int c, size_t n);
int ft_memcmp( const void * memptr1, const void * memptr2, size_t num );
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void* dst, const void* src, unsigned int n);
void    *ft_memset(void *destination, int c, size_t n);
char *strcat (char *dest, const char *app);
char *strchr (const char *str, int ch);
int	ft_strcmp(char *s1, char *s2);
char *strcpy(char *str1, char *str2);
char	*ft_strdup(char *src);
char *strlcat (char *dest, const char *app, size_t n);
int		ft_strlen(char *str);
char *strncat (char *dest, const char *app, size_t n);
int strncmp(const char *s1, const char *s2, size_t n);
char *strncpy(char *str1, char *str2, size_t n);
char *strnstr(const char *str, const char *substr, size_t n);
char *strrchr (const char *str, int ch);
char *strstr(const char *str, const char *substr);
int ft_tolower(int c);
int ft_toupper(int c);
/* part 1 end */
/* part 2 */

















#endif
