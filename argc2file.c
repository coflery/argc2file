#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fpWrite = fopen("argc.txt", "w");
    if (fpWrite == NULL)
        return -1;

    fprintf(fpWrite, "argc len:%d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        fprintf(fpWrite, "argc%d:%s\n", i, argv[i]);
    }
    fclose(fpWrite);
    return 0;
}
