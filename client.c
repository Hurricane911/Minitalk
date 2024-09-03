#include "minitalk.h"

void	signal_action(int pid, char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*str)
	{
		c = *(str);
		while (i < 8)
		{
			if (c << i & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(500);
		}
		str++;
		i = 0;
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