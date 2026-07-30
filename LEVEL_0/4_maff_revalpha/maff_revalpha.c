#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char c;
    int i;

    c = 'z';
    i = 0;
    while (i < 26){
        if(i % 2 != 0)
            ft_putchar(c - 32);
        else
            ft_putchar(c);
        i++;
        c--;
    }
    return 0;
}