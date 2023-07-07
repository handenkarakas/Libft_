/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <hankarak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:56:48 by hankarak          #+#    #+#             */
/*   Updated: 2023/07/07 21:38:24 by hankarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bir karakter dizisi içinde belirli bir karakterin ilk kez nerede bulunduğunu bulur

char	*ft_strchr(const char *str, int c)
{
	while ((char)c != *str)
	{
		if (!*str)
			return (0);
		str++;
	}
	return ((char *)str);
}