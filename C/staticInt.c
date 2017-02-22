#include<stdio.h>
static int assignValue(){
   return 50;
}
int main(void){
	static int i = assignValue();
	printf("%d",i);
	return 0;
}
