#include <stdlib.h>

int main() {
    int *data = (int *) malloc(100 * sizeof(int));

    for (int i=0; i<100; i++) {
        data[i] = 0;
    }
}
