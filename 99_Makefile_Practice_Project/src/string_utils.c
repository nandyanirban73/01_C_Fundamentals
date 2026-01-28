#include <stdio.h>
#include <string.h>
#include "string_utils.h"

void print_length(const char *str)
{
    printf("Length of \"%s\" is %lu\n", str, strlen(str));
}
