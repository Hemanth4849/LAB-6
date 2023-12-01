#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
   char string1[] = {"tutorials point"};
   char string2[] = {"tutorials point"};
   //using function strcmp() to compare the two strings
   if (strcmp(string1, string2) == 0)
      printf("Yes 2 strings are same");
   else
      printf("No, 2 strings are not same" );
      return 0;
}

