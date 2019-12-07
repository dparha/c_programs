#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char *first_name = "Zed";
  char *last_name = "Shaw";
  int bugs = 100;
  double bug_rate = 1.2;
  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  double expected_bugs = bugs * bug_rate;
  double part_of_universe = expected_bugs / universe_of_defects;
  
  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("My name is %s %c. %s.\n", first_name, initial, last_name);
  printf("You have %d bugs the the imaginary rae of %f.\n", bugs, bug_rate);
  printf("The entire universe has %ld bugs.\n", universe_of_defects);
  printf("You are expected to have %f bugs.\n", expected_bugs);
  printf("That is only a %e portion of the universe.\n", part_of_universe);
  
  return 0;

}
