/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:47:31 by lguedes           #+#    #+#             */
/*   Updated: 2022/06/23 15:47:35 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *string, ...);

int	ft_isplaceholder(char c);

int	ft_push_right(char c, va_list args);

int	ft_digit_count(long long int num, int base);

int	ft_unsigned_digit_count(unsigned long int num, int base);

int	ft_push_char(va_list args);

int	ft_push_string(va_list args);

int	ft_push_decimal(va_list args);

int	ft_push_pointer(va_list args);

int	ft_push_hex_lower(va_list args);

int	ft_push_hex_upper(va_list args);

int	ft_push_percent(void);

int	ft_push_unsigned_decimal(va_list args);

#endif // FT_PRINTF_H
