/* Whoop Firmware interview */
/* The following code is expected to be in proper C sytnax.  pseudo code not accepted */
/* If you are making an assumption please state it in your response */
/* It does not need to compile */

/* associates the fifo with memory in the system */
/* clears the FIFO and sets the fifo size */
void fifo_init(uint32_t size);


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
