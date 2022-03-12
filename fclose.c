#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    char *fname = "ssu_test.txt";
    FILE *fp;

    if ((fp = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "fopen error for %s\n", fname);
        exit(1);
    }
    else {
        printf("Success!\n");
        printf("Opening \"%s\" in \"r\" mode!\n", fname);
    }

    fclose(fp);
    exit(0);
}
