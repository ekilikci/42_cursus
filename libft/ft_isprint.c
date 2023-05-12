int	isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}


#include <ctype.h>
#include <stdio.h>
int main()
{
   int c;
   for(c = 1; c <= 127; ++c)
   	if (isprint(c)!= 0)
             printf("%c ", c);
   return 0;
}
