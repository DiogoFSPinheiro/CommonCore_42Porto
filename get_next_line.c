#include <stdio.h>

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;
	int		t;

	t = n * size;
	mem = malloc(t);
	if (!mem)
		return (NULL);
	ft_bzero(mem, t);
	return (mem);
}

void    str_join(char *stack, char *buffer)
{
    char    *join;
    int c;
    int i;
    
    join = ft_calloc(sizeof(char) * (str_len(stack) + str_len(buffer) +1);
    c = 0;
    i = 0;
    while (stack[c])
    {
        join[c] = stack[c];
        c++;
    }
    while (buffer[i])
    {
        join[c] = buffer[i];
        c++;
        i++;
    }
    join[c] = '\0';
}

int    find_line(char *stack)
{
    if (!stack)
        return (0);
    
    
     
    
}

void    read_file(int fd, char *stack);
{
    char    *buffer;
    int     fim;
    
    while(!find_line(stack))
    {
        buffer = ft_calloc(sizeof(char) * BUFFER_SIZE + 1);
        if (!buffer)
            return (NULL);
        fim = read(fd, buffer, BUFFER_SIZE)
        
        buffer[fim] = '\0'
        str_join(stack, buffer);
    }
}


char	*get_next_line(int fd)
{
    static char     *stack;
    char    *line;
    
    
    read_file(fd, stack); // vai ler até encontrar o "\n" 
    
    line = get_end_line(stack);
    
    polish(stack);
    
    return (line);
}




int main() {
    // Write C code here
    printf("Hello world");

    return 0;
}
