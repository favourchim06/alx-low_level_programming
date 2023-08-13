#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n";
	ssize_t len = strlen(quote);
	ssize_t written = write(2, quote, len);

	if (written != len) {
		perror("write");
		return 1;
	}

	return 1;
}
