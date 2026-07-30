#include <unistd.h>

int	main(void)
{
	write(1, "4",1);
	write(1, "2\n",2);
	return(0);
}
