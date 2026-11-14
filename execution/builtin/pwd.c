
#include "../../smash.h"

void	execute_builtin_pwd(t_shell *shell)
{
	if (shell->pwd)
	{
		printf("%s\n", shell->pwd);
		shell->exit_code = 0;
		return ;
	}
	printf("pwd: error retrieving current directory\n");
	shell->exit_code = 1;
}
