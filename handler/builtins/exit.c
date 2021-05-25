#include "../../includes/minishell.h"

void	exit_builtin(char **args)
{
	int exit_code;

	exit_code = 0;
	ft_putstr_fd("exit\n", 1);
	if (ft_arrlen(args) > 0)
	{
		if (isdigitstr(args[0]))
			exit_code = ft_atoi(args[0]);
		else
		{
			ft_putstr_fd("minishell: exit: ", ERR);
			ft_putstr_fd(args[0], ERR);
			ft_putstr_fd(": numeric argument required\n", ERR);
			exit(exit_code);
		}
		if (ft_arrlen(args) > 1)
		{
			ft_putstr_fd("minishell: exit: too many arguments\n", ERR);
		}
	}
	exit(exit_code);
}
