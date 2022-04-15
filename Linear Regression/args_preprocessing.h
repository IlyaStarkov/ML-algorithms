#ifndef ARGS_PREPROCESSING_H_
#define ARGS_PREPROCESSING_H_


typedef struct
{
	char *method;
	char *path_to_csv;
	char *target_name;
	char *sep;
}Arguments;

Arguments argsPreprocesed(char **argv);
int cheekFormat(char *file_name);

#endif /*ARGS_PREPROCESSING_H_*/