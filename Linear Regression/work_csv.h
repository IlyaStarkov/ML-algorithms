#ifndef WORK_CSV_H_
#define WORK_CSV_H_

#define MAXLEN 2048

FILE *connectToFile(char *file_name);
int cheekTarget(FILE *fp, char *target_name, char *sep);


#endif /*WORK_CSV_H_*/