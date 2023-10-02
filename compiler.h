#ifndef __PEACH_COMPILER_H__
#define __PEACH_COMPILER_H__

#include <stdio.h>

enum {
        COMPILER_FILE_COMPILED_OK,
        COMPILER_FILE_FAILED_WITH_ERRORS,
};

struct compile_process {
        /* the flags in regards to how this file should be compiled */
        int flags;
        struct compile_process_input_file {
                FILE *fp;
                const char *abs_path;
        } cfile;
        FILE *ofile;
};

int compile_file(const char *filename, const char *out_filename, int flags);
struct compile_process *compile_process_create(const char *filename, 
                                               const char *filename_out,
                                               int flags);

#endif /* __PEACH_COMPILER_H__ */
