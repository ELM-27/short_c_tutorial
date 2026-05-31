#C_Sample is the primary starting point and is dependent on
#  The 2 .o files. If they have changed, then
#  they are checked below. Once updated, the gcc executes
#  and compiles the program into the file C_Sample.

C_Sample: C_Sample.o C_Sample_Functions.o
		gcc C_Sample.o C_Sample_Functions.o -o C_Sample

#C_Sample.o is dependent on C_Sample.c and C_Sample.h.
#  If they have been changed, then the gcc executes.

C_Sample.o: C_Sample.c C_Sample.h
	 gcc -c -ansi -pedantic -Wall -g C_Sample.c -o C_Sample.o

#C_Sample_Functions.o is dependent on C_Sample_Functions.c and C_Sample.h
#  If they have changed, the gcc executes.

C_Sample_Functions.o: C_Sample_Functions.c C_Sample.h
	 gcc -c -ansi -pedantic -Wall -g C_Sample_Functions.c -o C_Sample_Functions.o
