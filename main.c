/* Whoop Firmware interview */
/* The following code is expected to be in proper C sytnax.  pseudo code not accepted */
/* If you are making an assumption please state it in your response */
/* It does not need to compile */

/* in C, fill in the implementation of the FIFO */
/* dont forget to allocate memory for the fifo */
/* feel free to fill in any gaps that were neglected in this template */
/* dynamic memory allocation is permitted */

#include fifo.h

/*
fill in some code in main to use the FIFO
first initialize the fifo
then clear it, the push and pop some data
*/

main()
{
  fifo_init();

printf("Inserting 100 elements\n");
for(int32_t i=0;i<100;i++)
{
  fifo_push(i);
}

printf("Asserting the size to be 100\n");
assert(size == 100);

assert(fifo_front() == 0);
fifo_pop();
assert(fifo_front() == 1);
assert(size == 99);
for(int i=0;i<50;i++)
{
  fifo_pop();
}

assert(size == 49);
assert(fifo_front() == 51);

fifo_delete();
assert(size == 0 );

return 0;

}
