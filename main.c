#include <stdio.h>
#include "compiler.h"
int main()
{
        int res = compile_file("./test.c", "./test", 0);
        if (res == COMPILER_FILE_COMPILED_OK) {
                printf("everything compled fine\n");
        } else if (res == COMPILER_FILE_FAILED_WITH_ERRORS) {
                printf("Compile failed\n");
        } else {
                printf("Unkown response for compile file\n");
        }

        return 0;
}
