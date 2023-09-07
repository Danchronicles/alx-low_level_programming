#include <unistd.h>
#include <stdlib.h>

int main(void) {
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    ssize_t bytes_written = write(2, message, 59);

    if (bytes_written == -1) {
        return 1;
    }

    return 1; 
}

