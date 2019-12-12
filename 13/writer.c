#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *poem = "望天门山\n天门中断楚江开\n碧水东流至此回\n两岸青山相对出\n孤帆一片日边来\n";

    FILE *fp;
    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "w")) == NULL) {
        printf("Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    size_t count = strlen(poem);
    while (i < count) {
        putc(poem[i++], fp);
    }
    fclose(fp);
    printf("\nWrite done\n");
    return 0;
}