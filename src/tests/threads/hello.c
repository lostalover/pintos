#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

void


test_hello(void){
	printf("Hello 2012122256!! \n");
	int a, b, c, d;
	a = 1;
	b = 2;
	c = 3;
	d = a + b + c;
	printf("d = a + b + c is executed!! \n");
}
