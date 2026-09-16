#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *res;
	int i;
	int size;

	size = (end - start) + 1;
	res = malloc(size * sizeof(int));
	if(!res)
		return(NULL);

	i = 0;
	while(i < size)
		res[i++] = start++;
	return(res);
}
