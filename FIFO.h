/* Whoop Firmware interview */
/* The following code is expected to be in proper C sytnax.  pseudo code not accepted */
/* If you are making an assumption please state it in your response */
/* It does not need to compile */
#ifndef FIFO_H
#define FIFO_H

#include <stdbool.h>
#include<stdlib.h>
#include <stdio.h>
#include<stdint.h>
#include <assert.h>
/* associates the fifo with memory in the system */
/* clears the FIFO and sets the fifo size */

typedef struct Node{
  int32_t data;
  struct Node* next;
}NODE;

typedef struct Fifo {
    struct Node *front, *rear;
}FIFO;

FIFO *q;
int32_t size;
void fifo_init();


/* remove all elements from the FIFO but maintains memory allocation */
void fifo_clear();


/* deallocate the FIFO from memory */
void fifo_delete();

/* push a new value into the FIFO */
void fifo_push(uint32_t val);


/* remove and return the oldest value in the FIFO */
uint32_t fifo_pop();


/* returns true if the value passed is in the FIFO */
bool fifo_find(uint32_t val);

/* checks if the list is empty*/
bool IsEmpty();

/* prints the list*/
void printfifo();

/* returns the first element in the list */
uint32_t fifo_front();
#endif
