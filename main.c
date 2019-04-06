#include "libft.h"

int		main(int ac, char **av)
{
	int fd;
	char *line;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	ft_printf("test de %s : ok\n", "printf");
	ft_printf("test de GNL :\n");
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	ft_printf("ok\n");
	close(fd);
	return (0);
}
