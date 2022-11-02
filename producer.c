/*producer.c*/
#include "buffer.h"

int main(){
	struct item nextProduced;
	while(true){
		wait(counter);
		nextProduced.spot = rand();
		buffer[in] = nextProduced;
		in = (in + 1) % BUFFER_SIZE;
		signal(counter);
		printf("produced\n"); 
	}
}

