int	ft_isdigit(int arg)
{
	if (arg >= 47 && arg <= 58)
		 return (1);
	else
		return (0);
}

#include <stdio.h>

int	main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	if (ft_isdigit(c) == 0)
		printf("%c is not a digit.", c);
	else
		printf("%c is a digit.", c);
	return 0;
}
