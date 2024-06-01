#include <stdio.h>
#include <stdlib.h>

int main() {
    int *i = (int *) malloc(sizeof(int));
    *i = 100;
    printf("the int of the pointer point to is: %d\n", *i);
}