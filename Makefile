# Makefile
# Specify what I need in the end. One single executable
test.exe : test.o
# Read this as test.exe depends on test.o
# But how is it produced??? Hmm...using the below statement
	gcc test.o -o test.exe
# starts with tab, I repeat tab

#-----------------------------------------------------------------

# But test.o is not there? So specify how it is produced.
test.o : test.c testing_functions.h
# Read this as test.o depends on test.c and testing_functions.h
	gcc -c test.c

#-----------------------------------------------------------------
# Cleans up the test.o remnant
clean:
		-rm test.o
# Cleans up the test.o remnant and the test.exe executable
cleanall:
		-rm test.o
		-rm test.exe
# Create a new bin directory in the home directory and installs the executable in the new ~/bin directory.
install:
		-mkdir ~/bin
		cp test.exe ~/bin/test.exe
		-echo 'export PATH="$PATH":~/bin' >> ~/.bashrc
		-@echo "Done! Just reset the terminal and the next time you type 'test.exe' this executable will execute, it is in the ~/bin directory if you want to remove it"
