
libmathEx.a: mathEx.c mathEx.h
	gcc -o mathEx.o -c mathEx.c
	ar rcs libmathEx.a mathEx.o
