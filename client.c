#include "minitalk.h"

void    signal_action(int pid, char *str)
{
    int count = 0;
    int i;
    int c;

    i = 0;
    while(str[count])
    {
        c = str[count];
        while(i < 8)
        {
            if (c << i & 0b100000)
                kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
            i++;
            usleep(100);
        }
        i = 0;
        count++;
    }
}

int main(int ac, char **av)
{
    if(ac != 3)
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        signal_action(ft_atoi(av[1]), av[2]);
    }
    return 0;
}