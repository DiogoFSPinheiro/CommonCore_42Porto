#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	is_string_digit(char *str)
{
	int i = 0;

	// Check string empty
	if (str[0] == '\0')
		return (0);

	// Check characters
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int c = 1;
	
	if (argc < 2)
		return write(1, "Error\n", 6);
	else
	{
		while (c < argc)
		{
			if (!is_string_digit(argv[c]))
				return write(1, "Error\n", 6);
			printf("number = %s\n", argv[c]);
			c++;
		}
	}
	return 0;
}

