#include <unistd.h>
#include <stdlib.h>

int main() {
    while(1) {
        fork(); // Esto crea un nuevo proceso hijo
    }
    return 0;
}
