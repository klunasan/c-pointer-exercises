//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_local_array(int arr[], int n) {
    int i;
    for(i=0; i < n; i++) {
        arr[i] = i;
    }
    printf("Running local array\n");



}