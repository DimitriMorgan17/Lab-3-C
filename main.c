// Author: Dimitri Morgan dpm5792@psu.edu
// Collaborator: Karen Moreau kqm5753@psu.edu
// Collaborator: Jacob Dally jed5801@psu.edu
// Collaborator: Emily Hamrick eeh5387@psu.edu
// Section: 003
// Breakout: 15

#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int sum_n(int x){
    if (x >= 1){
      return (x+(sum_n(x-1)));
    }
    else 
      return x;
}
//void print_n(const char *s, int n){
 // if (n > 0){
  //  printf ("s");
  //  print_n(s,n-1);
  //}
 // else{}
//}


int main() {
  int n;
  printf ("Enter an int: ");
  scanf("%d",&n);
  printf("sum is %d.", sum_n(n));
  //char *s = readline("Enter a string: ");
  //printf("%a", print_n(s));
}