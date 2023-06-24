#include "variadic_functions.h"
/**
 * format_char - format character
 * @seprator: the string seprator
 * @ap: argument pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - formats integer
 * @seprator: the string seprator
 * @ap: argument pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - format float
 * @seprator: the string seprator
 * @ap: argument pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string - format string
 * @seprator: the string seprator
 * @ap: argument pointer
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

switch ((int)(!str)
case 1:
str = "(nil)";

printf("%s%s", separator, str);
}
/**
 * print_all - prints anything
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
int i = 0, j;
char *separator = "";
va_list ap;

token_t[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}
};
va_start(ap, format);
while (format && format[i])
{
	j = 0;
	while (token[j].token)
	{
		if (format[i] == token[j].token[0])
		{
			token[j].f(separator, ap);
			separator = ", ";
		}
		j++;
	}
	i++;
}
printf("\n");
va_end(ap);
}
