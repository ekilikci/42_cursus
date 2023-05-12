#include <stdlib.h>
#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	*ptr = malloc(count * size); // Allocate memory using

	if (ptr != NULL)
		ft_memset(ptr, 0, count * size); //set all bytes to zero

	return ptr;
}
