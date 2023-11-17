#include "main.h"
/**
 * init_params - function
 * @params: the parameter to print
 * @vals: the list
 * @Return: void
 */
void init_params(params_t *params, va_list vals)
{
	params -> unsign = 0;
	params -> plus_flag = 0;
	params -> space_flag =0;
	params -> hashtag_flag = 0;
	params -> zero_flag = 0;
	params -> minus_flag = 0;
	params -> width = 0;
	params -> precision = UINT_MAX;
        params -> h_modifier = 0;
<<<<<<< HEAD
	params ->h_modifier = 0;
=======
	params -> l_modifier = 0;
>>>>>>> 50e9212a39f0611d49ae065716ce0c69948bde36
	(void) vals;
}
