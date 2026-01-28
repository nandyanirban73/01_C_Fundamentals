#include <stdio.h>
#include "app.h"
#include "math_utils.h"
#include "string_utils.h"

void run_app(void)
{
    int x = 5, y = 3;

    printf("Add: %d\n", add(x, y));
    printf("Multiply: %d\n", multiply(x, y));

    print_length("Makefile Demo");
}
