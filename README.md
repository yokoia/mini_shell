# Minishell

A minimalist Unix shell written in C as part of the 42 School curriculum, inspired by Bash.

## Features
- Command execution using PATH
- Built-in commands (`echo`, `cd`, `pwd`, `export`, `unset`, `env`, `exit`)
- Pipes and redirections
- Heredocs
- Environment variable expansion
- Command history
- Signal handling
- Logical operators (`&&`, `||`)
- Subshells and wildcards
- Advanced quote handling

## Installation

```bash
git clone <repository-url>
cd minishell
make
```

## Usage

```bash
./minishell
```

Type `exit` or press `Ctrl+D` to quit.

## Cleanup

```bash
make clean
make fclean
make re
```

## Author

**ykoia**

42 School