/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aartamon <aartamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:58:58 by aartamon          #+#    #+#             */
/*   Updated: 2023/12/06 19:08:48 by aartamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifndef _LIBFT_H_
//# define _LIBFT_H_

extern int				ft_isalpha(int c);
extern int				ft_isalnum(int c);
extern int				ft_isdigit(int c);
extern int				ft_isascii(int c);
extern int				ft_isprint(int c);
extern int				ft_tolower(int c);
extern int				ft_toupper(int c);
extern unsigned long	ft_strlen(const char *c);
extern int				ft_atoi(const char *c);
extern char				*ft_strchr(char *s, int c);
extern char				*ft_strrchr(char *s, int c);
extern int				ft_strncmp(char *s1, \
						const char *s2, unsigned int n);
extern char				*ft_strnstr(const char *haystack, \
						const char *needle, unsigned int len);
extern void				ft_bzero(void *s, unsigned int n);
extern void				*ft_memset(void *b, int c, unsigned int len);
extern unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);

//#endif
