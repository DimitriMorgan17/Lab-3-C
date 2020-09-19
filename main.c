// Author: Dimitri Morgan dpm5792@psu.edu
// Collaborator: Karen Moreau kqm5753@psu.edu
// Collaborator: Jacob Dally jed5801@psu.edu
// Collaborator: Emily Hamrick eeh5387@psu.edu
// Section: 003
// Breakout: 15

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int x){
    if (x >= 1){
      return (x+(sum_n(x-1)));
    }

    return x;
}

void print_n(const char *s, int x) {
  if (x > 0){
    printf("%s\n", s);
    print_n(s, x-1);
  }
}

int main() {
  int n = 0;

  printf ("Enter an int: ");
  scanf("%d", &n);
  printf("sum is %d.\n", sum_n(n));
  print_n(readline("Enter a string: "), n);

  return 0;
}