void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
/* The memcpy() function returns a pointer to dest.
we have to cast because dest and src was type of void *, it has to be specific type to perform byte-level operations
*/
	unsigned char	*d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return dest; 
}
