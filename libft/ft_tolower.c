/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <hankarak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:56:11 by hankarak          #+#    #+#             */
/*   Updated: 2023/07/07 18:56:36 by hankarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_tolower(int s)
{
    if(s>= 'A' && s<= 'Z')
    s += 32;
    return (s);
}