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
	params -> hasgtag_flag = 0;
	params -> zero_flag = 0;
	params -> minus_flag = 0;
	params -> width = 0;
	params -> percision = UNIT_MAX;
        params -> h_modifier = 0;
	params -> I_modifier = 0;
	(void) vals;
}
	
