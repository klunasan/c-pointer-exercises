//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

struct my_structure {
    int a;
    char b;
};

struct my_structure struct_array[10];

void run_global_array() {

    for (int i=0; i < ((sizeof(struct_array))/(sizeof(struct_array[0]))); ++i) {
        struct_array[i].a = i;
        struct_array[i].b = 'a' + i;
        printf("Running_global_array/n");
    }
}


    // YOUR CODE HERE


