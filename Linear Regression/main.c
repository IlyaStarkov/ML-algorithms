#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "args_preprocessing.h"
#include "work_csv.h"
#include "general_functions.h"


int main(int args, char **argv)
{
	if (args > 5)
	{
		error("too many arguments");
	}
	else if (args < 5)
	{
		error("too few arguments");
	}
	else if (args == 5)
	{
		
		Arguments input = argsPreprocesed(argv);
		FILE *dataset = connectToFile(input.path_to_csv);
		int res;
		if(cheekTarget(dataset, input.target_name, input.sep))
		{
			error("this target not found");
		}
		else
		{
			printf("%s\n", "start regression");
		}

		fclose(dataset);

	}

	return 0;
}
