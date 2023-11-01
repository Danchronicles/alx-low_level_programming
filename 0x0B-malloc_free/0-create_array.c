#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptrarray;
	unsigned int i;
	ptrarray = malloc(size*sizeof(char));
	for(i = 0; i < size; i++)
		ptrarray[i] = c;
	return(ptrarray);
}
