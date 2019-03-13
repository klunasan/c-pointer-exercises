//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
ptr = (int*) malloc(100 * sizeof(int));
void run_monolithic_array() {
    printf("Running monolithic array\n");
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;

}