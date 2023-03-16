#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void **ptr1;
	int i = 0;

	if (ptr == NULL)
	{
		*ptr1 = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		*ptr1 == NULL;
	}
	if (new_size >= old_size)
	{
		*ptr1 = malloc(new_size);

		while (i < old_size)
		{
			*ptr1[i] = ptr[i];
			i++;
		}
	}
	ptr = *ptr1;
	return (ptr);
}
