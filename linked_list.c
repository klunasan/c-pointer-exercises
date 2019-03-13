//
// Created by Ivo Georgiev on 2019-03-07.
//
//If the list is empty then the head is a null reference.

#include <stdio.h>

void run_linked_list() {
    printf("Running linked list\n");
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
    void run_linked_list() {

    struct node {
        int data;
        struct node *next;
    };

    struct node *head = NULL;
    struct node *current = NULL;

//display the list
    void printList() {
        struct node *ptr = head;
        printf("\n[ ");

        //start from the beginning
        while(ptr != NULL) {
            printf("(%d,%d) ",ptr->data);
            ptr = ptr->next;
        }

        printf(" ]");
    }

        printf("Running linked list\n");// YOUR CODE HERE

}