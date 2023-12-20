#ifndef MAIN_H
#define MAIN_H
#define BUFSIZE 1024
/* Standard Library */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>


/* Function Prototype */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copyFile(const char *file_from, const char *file_to);

#endif
