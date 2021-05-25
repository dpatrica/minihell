#include "../../includes/minishell.h"

void	pwd_builtin(void)
{
	char buf[PATH_MAX + 1];

	getcwd(buf, PATH_MAX + 1);
	ft_putstr_fd(buf, OUT);
	ft_putstr_fd("\n", OUT);
	g_status = 0;
}
