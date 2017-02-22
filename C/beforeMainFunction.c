#include<stdio.h>

void startFun1(void) __attribute__ ((constructor));
void startFun2(void) __attribute__ ((constructor));
void endFun(void) __attribute__ ((destructor));

void startFun1(void) {
	printf("Start fun 1 execution before main()\n");
}

void startFun2(void) {
	printf("Start fun 2 execution before main()\n");
}
void endFun(void) {
	printf("End function after main()\n");
}
int main(void) {
	printf("main() is executing\n");
	return 0; 
}
