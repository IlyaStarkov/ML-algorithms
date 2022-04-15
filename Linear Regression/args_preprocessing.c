#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <regex.h>
#include <sys/types.h>
#include "args_preprocessing.h"
#include "general_functions.h"


int cheekFormat(char *file_name)
{
	int status;
	int cflag = REG_EXTENDED;
	regmatch_t pmatch[1];
	const size_t nmatch = 1;
	regex_t regex;
	const char *pattern = "^\\w+([-+.]\\w+)*.csv";
	regcomp(&regex, pattern, cflag);
	return regexec(&regex, file_name, nmatch, pmatch,0);
}

Arguments argsPreprocesed(char **argv)
{
	Arguments input;

	if (strcmp(argv[1], "LSA") && strcmp(argv[1], "grad"))
	{
		error("incorrect method name");
	}
	else
	{
		input.method = argv[1];
	}
	if (cheekFormat(argv[2]))
	{
		error("CSV-file is expected");
	}
	else
	{
		input.path_to_csv = argv[2];
	}
	input.target_name = argv[3];
	input.sep = argv[4];

	return input;

}