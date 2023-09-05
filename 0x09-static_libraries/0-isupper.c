#include "main.h"

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return (1); /* Return 1 if 'c' is an uppercase letter. */
    } else {
        return (0); /* Return 0 if 'c' is not an uppercase letter. */
    }
}	
