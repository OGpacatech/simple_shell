#include "shell.h"

/**
<<<<<<< HEAD
 * _exitf - exits the shell.
=======
 * _myexit - exits the shell.
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: exits with a given exit status
 *         (0) if info.argv[0] != "exit"
 */
<<<<<<< HEAD
int _exitf(info_t *info)
{
	int exitcheck;

	if (info->argv[1]) /* If there is an exit arguement */
=======
int _myexit(info_t *info)
{
	int exitcheck;

	if (info->argv[1])  /* If there is an exit arguement */
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
	{
		exitcheck = _erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
<<<<<<< HEAD
 * _cdf - changes the current directory of the process
=======
 * _mycd - changes the current directory of the process
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
<<<<<<< HEAD
int _cdf(info_t *info)
=======
int _mycd(info_t *info)
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = /* TODO: what should this be? */
				chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = /* TODO: what should this be? */
			chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}

/**
<<<<<<< HEAD
 * _helpf - changes the current directory of the process
=======
 * _myhelp - changes the current directory of the process
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
<<<<<<< HEAD
int _helpf(info_t *info)
=======
int _myhelp(info_t *info)
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works. Function not yet implemented \n");
	if (0)
		_puts(*arg_array); /* temp att_unused workaround */
	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> fbcab34875bdaf3551c7b22d99c9863960c2be68
