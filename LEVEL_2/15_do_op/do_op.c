#include <stdio.h>
#include <stdlib.h>
typedef enum  { 
	add = '+',
	sbtr = '-',
	multi = '*',
	division = '/'
}operations;

int _atoi(char *str)  
{
	int res;
	int sing;
	int i;
	
	res = 0;
	sing = 1;
	i = 0;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sing = -1;
	}
	while(str[i] && (str[i] >= '0' && str[i] <= '9') )
		res = res * 10 + (str[i++] - '0');
	return(res * sing);
}

int	main(int ac, char **av)
{
	if(ac != 4)
	{
		printf("\n");
		return(0);
	}
	
	operations amaliyat = (operations) av[2][0];

	switch(amaliyat)
	{
		case  add:
			printf("%d \n", (_atoi(av[1]) + _atoi(av[3])));
		break;
		case sbtr:
			printf("%d \n", (_atoi(av[1]) - _atoi(av[3])));
		break;
		case  multi:
			printf("%d \n", (_atoi(av[1]) * _atoi(av[3])));
		break;
		case  division:
			printf("%d \n", (_atoi(av[1]) / _atoi(av[3])));
		break;
		default:
			printf("bro do it again!\n");
		break;
	}
	return(0);
}