#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
} Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  // TODO: add fields here for major and year
} Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case 0:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
    case 1:
      printf("%s %s %s\n", s.major, s.first_name, s.last_name);
      break;
    case 2:
      printf("%i %s %s\n", s.year, s.first_name, s.last_name);
      break;
	// TODO: handle other cases
  }
}

/*
	argv[1] will be the Mode integer
	argv[2...] will be student info in the form [first_name, last_name, major, year]
	the fields are all strings (char[])
	except year is a number (int)
*/
int main(int argc, char *argv[]) {
  // TODO: parse argv to populate student structs 
  // for now, here's two hardcoded students:
  Student s1;
  int i = 0;
  while(i < argc - 2) {
    s1.first_name = argv[i+2];
    s1.last_name = argv[i+3];
    s1.major = argv[i+4];
    s1.year = atoi(argv[i+5]);
    i = i + 4;
  print_student(atoi(argv[1]), s1);
}
  return 0;

}
