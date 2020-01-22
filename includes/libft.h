/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 11:13:52 by vvaras            #+#    #+#             */
/*   Updated: 2019/01/11 15:52:51 by vvaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;


#define				MAX(a, b)						a > b ? a : b
#define				MIN(a, b)						a < b ? a : b

#define				LOG_INFO(str)					ft_printf("{#CCCCCC}[INFO]: '%s'\n{reset}", str)
#define				LOG_WARN(str)					ft_printf("{#EEEE00}[WARNING]: '%s'\n{reset}", str)
#define				LOG_ERROR(str)					ft_printf("{bold}{underline}{#FF2222}[ERROR]{reset}{#FF6666}: '%s'\n{reset}", str)

#define				LOG_STATUS_GREEN(str, status)	ft_printf("%s: {#22CC22}[%s]\n{reset}", str, status)
#define				LOG_STATUS_YELLOW(str, status)	ft_printf("%s: {#EEEE00}[%s]\n{reset}", str, status)
#define				LOG_STATUS_RED(str, status)		ft_printf("%s: {#FF2222}[%s]\n{reset}", str, status)


int					ft_ishexdigit(int c);
int					ft_abs(int n);
int					ft_max(int a, int b);
int					ft_min(int a, int b);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isupper(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strchrpos(const char *str, char c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strcontains(char c, char *str);
int					ft_strcountsplit(const char *s, char c);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strisalnum(char *str);
int					ft_strisdigit(char *str);
int					ft_strlento(const char *s, char c);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_printf(const char *format, ...);
int					ft_printfd(int fd, const char *format, ...);
int					ft_htoi(char *hex);
int					ft_htoi_char(char hex);
int					get_next_line(const int fd, char **line);
double				ft_power(double num, int pow);
double				ft_lerp(double first, double second, double p);
double				ft_clamp(double i, double a, double b);
char				*ft_itoa(int n);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *s1, const char*s2);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned in, char));
char				*ft_strncat (char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(char *s1, char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
size_t				ft_lstcount(t_list *lst);
size_t				ft_strlen(char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstrev(t_list **alst);
void				ft_strconcat(char **str, char *buf, int bsize);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc (size_t size);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				ft_memdel(void **ap);
void				*ft_memdup(const void *s, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_arr_free(char **array);

#endif
