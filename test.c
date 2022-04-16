#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

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
    printf ("Success!\n");
  } else if (try_it < 1) {
    printf ("Success, kind of\n");
  } else {
    printf ("Something weird happened, but I'm not smart enough to know what - try_it(%d)\n", try_it);
  }


  // The "*" after "char" means the following variable can only be used for reading
  char * first_name = "Like I would tell you";

  // These ones can be manipulated
  char second_name[] = "Like I would tell you second";

  /* Pay attention to this possible example of a misunderstanding, this is exactly how NOT to do it */
  if (first_name == "Charles, you?" && second_name == "James, you?") {
    printf ("This goes against my example if this works/prints\n");
  } else if (first_name == "Like I would tell you" && second_name == "James, you?") {
    printf ("See? It can't be manipulated\n");
  } else if (first_name != "Like I would tell you" && second_name == "Jame, you?") {
    printf ("Don't know what happened with first_name, but it shows weird shit happens if you modify a variable created with char *\n");
  } else {
    printf ("I swear I don't know what's going on either!\n");
    printf ("I wanted to use this for %c purposes, but it doesn't even work!\n", 'X');
  }


  /* This is the GOOD example */
  int yes = 1;
  int age = 10;
  float exact_age = 10.3;
  char * time = "years";

  // strncmp is the secure version of strcmp apparently, which is used to compare or manipulate strings if I understood correctly
  if (yes == 1 && strncmp(time, "years", 5) == 0) {
    printf ("I am now %d or exactly %f %s old! (I'm not, this is an example)\n", age, exact_age, time);
  } else if (strncmp(time, "years", 5) != 0) {
    printf ("Your time unit is invalid\n");
  } else {
    printf ("%d doesn't equals 1 which = the int yes variable\n", yes);
  }


  return 0;


}

// I am experimenting with this, I don't know what I am doing here yet
// void main2(main == 0) {
  // printf ("This test program should have been run to the end\n");
// }
