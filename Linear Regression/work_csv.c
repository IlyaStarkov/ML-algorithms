#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "work_csv.h"
#include "general_functions.h"



FILE *connectToFile(char *file_name)
{
	FILE *fp;
	fp = fopen(file_name, "r");
	if (fp == NULL)
	{
		error("could not open the file");
	}

	return fp;
}

int cheekTarget(FILE *fp, char *target_name, char *sep)
{
	char str[MAXLEN];
	fgets(str, MAXLEN, fp);
	char cut[MAXLEN];
	strncpy(cut, str, (strlen(str)-1));
	char **array = split(cut, sep);
	while(*array)
	{
		if(strcmp(*array, target_name)==0)
		{
			return 0;
		}

		array++;
	}
	return 1;
}