# How to use make in this repo

So, compiling this source code, just "cd" into the source code directory and type the command "make".

Thats it!

But there are three more options:

  1). make clean: which removes the remnant file test.o .

  2). make cleanall: which removes the remnant test.o but also the executable test.exe .

  3). (This option requires manual fidling) make install, no sudo permissions required, but what it does is more complex,

    What it does is it first tries to create a folder in the home directory called "bin",
    if it fails because a folder named as such already exists, it continues the operation.

    After that it copies the executable into the bin folder.

    And it adds a new line to the .bashrc file in the home directory, its tries to add this line at the end of the file:

      export PATH=$PATH:~/bin

    But due to limitations with make, this is added to the file:

      export PATH=ATH:~/bin

    So after doing that you must not close the terminal/console, type "nano ~/.bashrc",
    and add "$P" before "ATH", you can safely close the terminal after this.


# Panic!
  But, oh! You accidentaly closed the terminal before modifying ~/.bashrc !
  Don't panic, I have a simple method to repair your terminal.

  You just have to type into the bugged terminal:

    /bin/nano ~/.bashrc

  It will open the "nano" text editor to edit the .bashrc file of your home directory.
  After that you just have to do what I said in the "3)." section.
