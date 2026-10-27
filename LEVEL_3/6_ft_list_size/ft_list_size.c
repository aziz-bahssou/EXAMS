#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *prev;
	int count;

	if(begin_list == NULL)
		return(0);
	
	prev = begin_list;
	count = 0;
	while(prev != NULL)
	{
		prev = prev->next;
		count++;
	}
	return (count);
}