#include <stdlib.h>
#include <stdio.h>

int main() {
    int *data = (int *) malloc(100 * sizeof(int));
    for (int i=0; i<100; i++) {
        data[i] = i;
    }
    free(data);
    for (int i=0; i<100;i++) {
        printf("%d\n", data[i]);
    }
    
}