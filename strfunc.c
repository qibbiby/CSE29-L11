
#include <string.h>
#include <stdio.h>

// Find the first occurrence of the full string needle in haystack
// char *strstr(const char *haystack, const char *needle)
//
// Find the first occurrence of *any* character in str2 within str1
// char *strpbrk(const char *str1, const char *str2)

int main(int argc, char** argv) {

  printf("arg 1: %p (%s) \t arg2: %p (%s)\n", argv[1], argv[1], argv[2], argv[2]);

  char* r1 = strstr(argv[1], argv[2]);
  char* r2 = strpbrk(argv[1], argv[2]);

  printf("r1: %p (%s)\n", r1, r1);
  printf("r2: %p (%s)\n", r2, r2);
}
