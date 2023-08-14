#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define STDERR_FD 2


int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n";
	size_t message_len = 43; // Length of the message

	// Write the message to standard error (file descriptor 2)
	if (write(STDERR_FD, message, message_len) != message_len) {
		// If write fails, return 1
		return 1;
	}

	// Return 0 to indicate success
	return 0;
}
