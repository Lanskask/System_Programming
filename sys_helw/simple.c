#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fb;
    fb = open("foo.txt", O_WRONLY | O_CREAT, 0644);

    if (fb < 0) {
    	printf("error number %d\n", errno);
    	perror("foo.txt");
    	exit(1); 
    }

    write(fb, "hello world", 11);
    close(fb);
}