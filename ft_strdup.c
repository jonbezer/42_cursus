/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonbezer <jonbezer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:41:27 by jonbezer          #+#    #+#             */
/*   Updated: 2026/06/02 20:50:58 by jonbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * SYNOPSIS
 * char	*ft_strdup(const char *s1)
 *
 * DESCRIPTION
 * Allocates sufficient memory for a copy of the string s1, does the
 * duplication, and returns a pointer to it. The memory for the new
 * string is obtained with ft_calloc, and can be freed with free().
 *
 * RETURN VALUE
 * - Returns a pointer to the duplicated string (char *).
 * - If the allocation fails due to insufficient memory, it returns NULL.
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ps1;

	len = ft_strlen(s1);
	ps1 = ft_calloc(len + 1, sizeof(char));
	if (!ps1)
		return (NULL);
	ft_strlcpy(ps1, s1, len + 1);
	return (ps1);
}
