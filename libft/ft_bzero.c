void	ft_bzero(void *s, size_t n)
{
	char	*remove;
	
	remove = s;
	while (n != 0)
	{
		*remove++ = 0;
		n--;
	}
}
