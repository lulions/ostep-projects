#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Reading files...\n");

    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file");
	exit(1);
    }

    char buffer[11];

    fgets(buffer, 10, fp);

    printf("%s", buffer);

    fclose(fp);
    
    return 0;
}
