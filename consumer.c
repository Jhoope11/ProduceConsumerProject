/* consumer.c  */
#include "buffer.h"

int main(){
	struct item nextConsumed;
	while(true){
		wait(counter);
		nextConsumed.spot = 0;
		buffer[out] = nextConsumed;
		out = (out + 1) % BUFFER_SIZE;
		signal(counter);
		printf("consumed\n");
	}
}
