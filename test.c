// This website https://www.educba.com/hash-include-in-c/, goes into details what #include do.
// For the printf function
#include <stdio.h>
// To manipulate strings, like using the strncmp function
#include <string.h>
// To include the main2 and test3 functions coded in the testing_functions.h file
#include "testing_functions.h"
// Example where a certain keywork equals something you defined, like an int, float, char or whatever variable, or even a funtion, though I don't know how or if it can be changed or if I understood correctly, if not, raise an Issue on Github.
#define FALSE 0
#define TRUE 1
// There are no boolean variables in C
#define BOOL char
// This is to be a reference to beginners in C programming language like me, and it is not made to be optimised, if you want optimised code go look at source code for small applications built from C. You'll probably learn a lot, I fixed the two-dimensional array, but if you still discover something wrong or think it could be better, alert it on the Issues section on Github.

 // Ici, c'est pour tester tous les concepts que je connais

 // English: Here, is to test every concept I learned so far

int main() {


  int target;
  int target_divided_2 = 5;
  int bother = 5 * 2;
  target = target_divided_2 + target_divided_2;

  if (target == 10 && target_divided_2 == bother / 2) {
    printf ("Hello World!\n");
  } else {
    printf ("Hello Bugged World! - target(%d) target_divided_2(%d) bother(%d)\n", target, target_divided_2, bother);
  }


  // Something is wrong with my implementation of two-dimensional arrays, but I don't know what (Fixed)
  int average = 238427.000000;
  int things[1][4] = {01110100,01100101,01110011,01110100};
  float thing = (things[0][0] + things[0][1] + things[0][2] + things[0][3]) / 5;

  if (thing == 4430312 / 5 || thing == average) {
    printf ("Bye Cherished World! Note: Made/started in 2022 thirteenth of April\n");
  } else {
    printf ("Bye Cherished Bugged World! Note: Made/started in 2022 thirteenth of April - thing(%f)\n", thing);
  }


  // Try changing the value of the variable, see what comes out
  int try_it = 1;

  if (try_it == 1) {
    printf ("Success!\n\n");
  } else if (try_it < 1) {
    printf ("Success, kind of\n\n");
  } else {
    printf ("Something weird happened, but I'm not smart enough to know what - try_it(%d)\n\n", try_it);
  }


  // The "*" after "char" means the following variable can only be used for reading
  char * first_name = "Like I would tell you";

  // These ones can be manipulated
  char second_name[] = "Like I would tell you second";

  /* Pay attention to this possible example of a misunderstanding, this is exactly how NOT to do it */
  printf ("Example of a misunderstanding: \n\n");

  if (first_name == "Charles, you?" && second_name == "James, you?") {
    printf ("This goes against my example if this works/prints\n\n");
  } else if (first_name == "Like I would tell you" && second_name == "James, you?") {
    printf ("See? It can't be manipulated\n\n");
  } else if (first_name != "Like I would tell you" && second_name == "James, you?") {
    printf ("Don't know what happened with first_name, but it shows weird shit happens if you modify a variable created with char *\n\n");
  } else {
    printf ("I swear I don't know what's going on either!\n");
    printf ("I wanted to use this for %c purposes, but it doesn't even work!\n\n", 'X');
  }


  /* This is the GOOD example */
  printf ("This is a good example: \n\n");

  int yes = 1;
  int age = 10;
  float exact_age = 10.3;
  char * time = "years";

  // strncmp is the secure version of strcmp apparently, which is used to compare or manipulate strings if I understood correctly
  if (yes == 1 && strncmp(time, "years", 5) == 0) {
    // When you add for example %1.4f,
    // it will only show the first digit before the period
    // and four digits after the period.
    // %1d, the same principle, only the first digit is shown.
    printf ("I am now %d or exactly %.1f %s old! (I'm not, this is an example)\n\n", age, exact_age, time);
  } else if (strncmp(time, "years", 5) != 0) {
    printf ("Your time unit is invalid\n\n");
  } else {
    printf ("%3.2d doesn't equals 1 which = the int(yes) variable\n\n", yes);
  }


  // test of functions, go into the testing_functions.h file to see what they do.
  printf ("Functions test: \n\n");

  if (main2() == 0) {
    printf ("The main2 function went as expected\n");
  } else {
    printf ("The main2 function didn't work as expected\n");
  }

  int num = test3();

  if (num == 4) {
    printf ("Everything went as expected in the test3 function\n");
  } else {
    printf ("Something went wrong in the test3 function\n");
  }

  if (test4() == 9) {
    printf ("Everything went as expected in the function test4, for loop\n");
  } else {
    printf ("Something went wrong in the function test4, for loop - num2(%d)\n", test4());
  }

  if (test5() == 10) {
    printf ("The test5 function went as expected\n");
  } else {
    printf ("The test5 function didn't go as expected - test5(%d)\n", test5());
  }

  if (test6() == 8) {
    printf ("The test6 function went as expectted\n");
  } else {
    printf ("The test6 function didn't go as expected - test6(%d)\n", test6());
  }

 return 0;


}
