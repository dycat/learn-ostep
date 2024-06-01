// Copy a string in c using strdup
#include <string.h>
#include <stdio.h>

int main () {
    char initial[] = "string to be copy";
    char *b;
    b = strdup(initial);
    printf("%s\n",b);
}