#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if(ptr == NULL)
	{
		printf("Allocation failed. Exiting with status 98.\n");
		exit(98);
	}
	return(ptr);
}
