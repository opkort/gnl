#include "get_next_line.h"

int main()
{
    //int ac, char **av
	int fd;
	char *line;
	int retgnl;

	//if (!av)
	//	return (0);
	fd = open("text.txt", O_RDONLY);
	while ((retgnl = get_next_line(fd, &line)))
    {
        ft_putstr(line);
        ft_putstr("\n\n");
		printf("%d", retgnl);
    }
	ft_putstr(line);
	ft_putstr("\n\n");
	printf("%d", retgnl);
    /*while(*line)
	{
		ft_putstr(*line);
		*line++;
	}*/
}