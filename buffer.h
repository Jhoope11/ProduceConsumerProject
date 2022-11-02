/* buffer.h */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 2

struct item{
	int spot;
};

int in = 0;
int out = 0;
int counter = 1;//Semaphore
struct item buffer[BUFFER_SIZE];

void wait(int counter){
	while(counter <= 0);
	counter--;
}

void signal(int counter){
	counter++;
}
