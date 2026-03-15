#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
  #include <windows.h>
  #include <process.h>
#else
  #include <unistd.h>
#endif

int main() {
    while(1) {
        #ifdef _WIN32
            // Versión para Windows: Crea un proceso nuevo de sí mismo
            system("start fork.exe"); 
        #else
            // Versión para Linux: Clona el proceso actual
            fork();
        #endif
    }
    return 0;
}
