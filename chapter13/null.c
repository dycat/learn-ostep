#include <stdlib.h>

int main() {
    int *i = NULL;
    int dereferencedInt = *i; //segmentation fault
}