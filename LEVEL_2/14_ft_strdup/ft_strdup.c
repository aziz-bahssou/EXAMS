#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dep;
	int i;
	int leen;

	leen = 0;
	while(src[leen])
		leen++;
	dep = malloc((leen + 1) * sizeof(char));
	if(!dep)
		return (NULL);
	dep[leen] = '\0';
	i = 0;
	while(src[i])
	{
		dep[i] = src[i];
		i++;
	}
	return(dep);
}
