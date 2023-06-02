/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekilikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:08:28 by ekilikci          #+#    #+#             */
/*   Updated: 2023/06/02 16:08:32 by ekilikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It tries to allocate enough memory to hold the old string (plus a '\0' character to mark the end of the string).*/

char *ft_strdup(const char *src) {
    char *dst = malloc(ft_strlen (src) + 1);  // Space for length plus nul
    if (dst == NULL) return NULL;          // No memory
    ft_strcpy(dst, src);                      // Copy the characters
    return dst;                            // Return the new string
}

/*
or
char *strdup(const char *src) {
    size_t len = strlen(src) + 1;       // String plus '\0'
    char *dst = malloc(len);            // Allocate space
    if (dst == NULL) return NULL;       // No memory
    memcpy (dst, src, len);             // Copy the block
    return dst;                         // Return the new string
}
*/