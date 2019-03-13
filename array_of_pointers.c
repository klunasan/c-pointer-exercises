//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>

void run_array_of_pointers() {
    printf("Running array of pointers\n");
    const int MAX = 3;

    int  var[] = {10, 100, 200};
    int i;

    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, var[i] );
    }

    return 0;

}