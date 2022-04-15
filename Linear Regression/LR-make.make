main: main.o args_preprocessing.o work_csv.o general_functions.o
	gcc -Wall main.o args_preprocessing.o work_csv.o general_functions.o -o main

main.o: main.c
	gcc -g3 -c main.c

args_preprocessing.o: args_preprocessing.c
	gcc -g3 -c args_preprocessing.c

work_csv.o: work_csv.c
	gcc -g3 -c work_csv.c

general_functions.o: general_functions.c
	gcc -g3 -c general_functions.c