#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "general_functions.h"

void error(char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

char **split(char *str, char *splitter)
{
	char *istr;
	char **array = NULL;
	
	array = (char**)malloc(peiceNumber(str, splitter[0])*sizeof(char*));
	istr = strtok(str, splitter);

	int i = 0;
	while(istr != NULL)
	{
		array[i] = istr;
		istr = strtok(NULL, splitter);
		i++;
	}

	return array;
}

int peiceNumber(char *str, char sep)
{
	int peice = 0;
	while(*str)
	{
		if(*str == sep)
		{
			peice++;
		}

		str++;
	}

	if (peice == 0)
	{
		error("this splitter not found");
	}

	return peice+1;
}