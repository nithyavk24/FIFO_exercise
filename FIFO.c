/* Whoop Firmware interview */
/* The following code is expected to be in proper C sytnax.  pseudo code not accepted*/
/* If you are making an assumption please state it in your response */
/* It does not need to compile */

/* in C, fill in the implementation of these functions*/
/* dont forget to allocate memory for the fifo */
/* feel free to fill in any gaps that were neglected in this template */
/* dynamic memory allocation is permitted */
#include "fifo.h"
/* associates the fifo with memory in the system
/* clears the FIFO and sets the fifo size */

NODE* createNode(int32_t x){
  NODE* temp = (NODE*) malloc (sizeof(NODE));
  temp->data = x;
  temp->next = NULL;
  return temp;
}

void fifo_init()
{
  q = (FIFO*) malloc(sizeof(FIFO));
  q->front = q->rear = NULL;
  size=0;
}

/* remove all elements from the FIFO but maintains memory allocation*/
void fifo_clear()
{
  if(IsEmpty())
    printf("list empty \n");

  NODE* temp = q->front;
  while(temp != NULL){
    temp->data = 0;
    temp = temp->next;
  }
}

/* deallocate the FIFO from memory */
void fifo_delete()
{
  if(IsEmpty())
    printf("list empty \n");

  NODE* temp = q->front;
  while(temp != NULL){
    q->front = temp->next;
    free(temp);
    temp = q->front;
    size--;
  }
  free(q);
}

/* push a new value into the FIFO */
void fifo_push(uint32_t val)
{
  size++;
  NODE* newNode = createNode(val);
  if(IsEmpty()){
    q->front = q->rear = newNode;
  }
  else{
    q->rear->next = newNode;
    q->rear = newNode;
  }
}

/* remove and return the oldest value in the FIFO*/
uint32_t fifo_pop()
{
  uint32_t num;
  if(IsEmpty())
    return 0;
  else {
    num = q->front->data;
    NODE* temp = q->front->next;
    free(q->front);
    q->front = temp;
    size--;
  }
  return num;
}

// returns true if the value passed is in the FIFO
bool fifo_find(uint32_t val)
{
  if(IsEmpty())
  printf("list empty \n");

  NODE* temp = q->front;
  while(temp != NULL){
  if(temp->data == val)
    return true;
  temp = temp->next;
  }
  return false;
}

//prints the list
void printfifo(){
  NODE* temp = q->front;
  if(IsEmpty())
    printf("list empty \n");
  else
  {
    printf("FIFO List: ");
    while(temp != NULL){
      printf("%d,  ",temp->data);
      temp = temp->next;
    }
    printf("\n");
  }
}

//returns the first element in the queue
uint32_t fifo_front()
{
   if(IsEmpty())
    return -1;
   else
    return q->front->data;
}
/*end question 4*/
