#include <stdlib.h>
#include <stdio.h>
void OpenFile(FILE **fp, char *fileName, char *fileType)
{
    if ((*fp = fopen(fileName, fileType)) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.\n", fileName);
        exit(1);
    }
}