#include "stdio.h"
#include "stdlib.h"

char	decal(char c, int i)
{
	if (c + i <= 122)
		return(c + i);
	return(c - 122 + i + 96);
}

char	*ft_rot(char *str, int i)
{
	char *rot_str;
	rot_str = malloc(sizeof(char) * 15);
	int j = 0;
		while (j < 14)
		{
			rot_str[j] = decal(str[j], i);
			j++;
		}
	return (rot_str);
}

int main()
{
	char *str = "cdiiddwpgswtgt";
	int i = 1;
	while (i < 27)
	{
		printf("%s\n",ft_rot(str ,i));
		i++;	
	}
	return 0;
}