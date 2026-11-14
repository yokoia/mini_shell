
#include "../../smash.h"

void	handle_child1(t_shell *shell, int pipefd[2], t_ast *original_ast)
{
	reset_signal_handlers();
	close(pipefd[0]);
	dup2(pipefd[1], STDOUT_FILENO);
	close(pipefd[1]);
	shell->ast = original_ast->left;
	execute_ast(shell);
	clean_exit(shell, shell->exit_code);
}

void	handle_child2(t_shell *shell, int pipefd[2], t_ast *original_ast)
{
	reset_signal_handlers();
	close(pipefd[1]);
	dup2(pipefd[0], STDIN_FILENO);
	close(pipefd[0]);
	shell->ast = original_ast->right;
	execute_ast(shell);
	clean_exit(shell, shell->exit_code);
}
