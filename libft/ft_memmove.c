void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d < s)
    {
        while (n > 0)
        {
            *d = *s;
            d++;
            s++;
            n--;
        }
    }
    else if (d > s)
    {
        while (n > 0)
        {
            d[n - 1] = s[n - 1];
            n--;
        }
    }

    return dest;
}

/*
In this implementation, we cast the dest and src pointers to unsigned char * to perform byte-level operations. We check if the destination d is before or after the source s in memory.

If d is before s, we perform a forward copy. We iterate through each byte of the source, copying it to the destination, and then increment the pointers and decrement n with each iteration.

If d is after s, we perform a backward copy to avoid overwriting the data before it has been copied. We iterate from the last byte to the first byte of the source and copy them to the corresponding positions in the destination.

Finally, we return the dest pointer.

Please note that the provided implementation assumes that the memory regions pointed to by dest and src may overlap. The function handles this scenario correctly by performing a safe copy to avoid data corruption.
*/
