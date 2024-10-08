#include "libft.h"

static void	ft_backword(unsigned char *s1, unsigned char *s2, size_t n)
{
	if (s1 >= s2)
	{
		s1 += n;
		s2 += n;
		while (n > 0)
		{
			*(--s1) = *(--s2);
			n--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s1 == s2 || n == 0)
		return (dest);
	if (s1 < s2)
	{
		while (n > 0)
		{
			*s1++ = *s2++;
			n--;
		}
	}
	ft_backword(s1, s2, n);
	return (dest);
}
