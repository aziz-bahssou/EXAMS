#include <stdlib.h>
#include <stdio.h>



int	*ft_rrange(int start, int end)
{
	int size;
	int *arr;
	int i = 0;

	if(start == 0 && end == 0)
		size = 1;
	
	size = (end - start) + 1;

	arr = malloc (size);

	while(start <= end)
	{
		arr[i] = start;
		start++;
		i++;
	}

	return(arr);
}

