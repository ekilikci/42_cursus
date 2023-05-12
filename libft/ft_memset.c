void	*ft_memset(void *s, int c, unsigned int size)
{
	/* The parentheses (unsigned char *)s and (unsigned char)c in the code (unsigned char *)s and (unsigned char)c are used for explicit type casting.

In the line unsigned char *ptr = (unsigned char *)s;, we cast the pointer s to an unsigned char *. This is done because s is of type void *, and we need to cast it to the specific type unsigned char * to perform byte-level operations.

Similarly, in the line unsigned char value = (unsigned char)c;, we cast the variable c to an unsigned char. This is necessary because the memset function expects the value to be an unsigned char, and casting c ensures that it is properly interpreted as an unsigned char.

The explicit type casting allows us to convert pointers and values from one type to another, ensuring compatibility and preventing potential warnings or errors during compilation.*/
	unsigned char *ptr = (unsigned char *)s;
	unsigned char value = (unsigned char)c;

	while (size > 0)
    	{
        	*ptr = value;
        	ptr++;
        	size--;
    	}

    	return s;
// The memset function fills the first n bytes (size) of memory pointed by s with the constant byte c and it returns pointer to memory area s
}
