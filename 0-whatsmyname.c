#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
