#include "main.h"
int main(void)
{
	char *name = __BASE_FILE__;
	int i;

	for (i = 0; name[i] != '0'; i++)
		_putchar(name[i]);
	_putchar('\n');
	return (0);
}
