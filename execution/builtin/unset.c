
#include "../../smash.h"

void	execute_builtin_unset(t_shell *shell)
{
	t_dll	*current;

	if (!shell->ast->arguments)
	{
		shell->exit_code = 0;
		return ;
	}
	current = shell->ast->arguments;
	while (current)
	{
		if (is_valid_identifier(current->value))
			unset_env_var(shell, current);
		current = current->next;
	}
	shell->exit_code = 0;
}
