/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankarak <hankarak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:49:37 by hankarak          #+#    #+#             */
/*   Updated: 2023/07/07 18:55:59 by hankarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_toupper(int s)
{
    if(s>= 'a' && s<= 'z')
    s -= 32;
    return (s);
}