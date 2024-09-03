#include "minitalk.h"

void action(int sig)
{
    static int i = 0;
    static unsigned char c = 0;

    if(sig == SIGUSR2)
        c = c << 1;
    else if(sig == SIGUSR1)
        c = (c << 1) | 0b00000001;
    i++;
    if(i == 8)
    {
        ft_printf("%c", c);
        i = 0;
        c = 0;
    }
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, action);
		signal(SIGUSR2, action);
        pause();
	}
	return (0);
}
