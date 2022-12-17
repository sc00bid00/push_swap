#include "push_swap.h"

t_stk	*ft_makenw(char *s)
{
	t_stk	*tmp;

	tmp = malloc(sizeof(t_stk));
	if (tmp == NULL)
		exit(0);
	tmp->arg = s;
	tmp->next = NULL;
	return (tmp);
}

t_stk	*ft_makenx(char *s)
{
	t_stk	*tmp;

	tmp->next = malloc(sizeof(t_stk));
	tmp = tmp->next;
	if (tmp == NULL)
		exit(0);
	tmp->arg = s;
	tmp->next = NULL;
	return (tmp);
}

void	ft_init(int argc, char **argv, t_stk **arg)
{
	int		i;
	t_stk	*tmp;

	i = 1;
	tmp = *arg;
	while (i < argc)
	{
		if (tmp == NULL)
		{
			tmp = ft_makenw(argv[i]);
			*arg = tmp;
		}
		else
			tmp = ft_makenx(argv[i]);
		i++;
	}

}

void	ft_prtstk(t_stk *arg)
{
	while(arg)
	{
		ft_printf("%s\n", arg->arg);
		arg = arg->next;
	}
}

int main(int argc, char **argv)
{
	t_stk 	*arg;

	if (argc > 1)
	{
		arg = NULL;
		ft_init(argc, argv, &arg);
		ft_prtstk(arg);
	}
	return (0);
}
