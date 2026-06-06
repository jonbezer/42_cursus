/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonbezer <jonbezer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 20:24:23 by jonbezer          #+#    #+#             */
/*   Updated: 2026/06/02 20:50:43 by jonbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * SYNOPSIS
 * void *ft_calloc(size_t count, size_t size);
 *
 * DESCRIPTION
 * The ft_calloc() function contiguously allocates memory in the Heap for
 * 'count' elements, each of 'size' bytes. It then zero-initializes the
 * entire allocated block using ft_memset(), wiping out any memory garbage.
 * SPECIAL CASE:
 * If either 'count' or 'size' is 0, ft_calloc() triggers malloc(0), returning
 * a unique, non-null valid pointer that can be safely passed to free() later
 * without crashing the program.
 *
 * RETURN VALUE
 * - Upon success, ft_calloc() returns a generic pointer (void *) pointing to 
 *   the beginning of the newly allocated and cleared memory block.
 * - If the allocation fails due to insufficient system memory, or if an 
 *   integer overflow is detected during the multiplication (count * size), 
 *   the function safely stops and returns a NULL pointer (0).
 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
