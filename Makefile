# Makefile
# Specify what I need in the end. One single executable
test.exe : all_test.o
# Read this as test.exe depends on test.c testing_functions.h
# But how is it produced??? Hmm...using the below statement
    gcc all_test.o -o test.exe
# starts with tab, I repeat tab

#-----------------------------------------------------------------

# But test.o is not there? So specify how it is produced.
all_test.o : test.c testing_functions.h
		gcc -c test.c
# Same for test.o
# test.o : test.cpp test.h
    # cc -c test.cpp
