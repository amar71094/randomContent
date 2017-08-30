#include<iostream>
extern "C" {
	int printf(const char *format,...);
}
int main(){
        int i = 2;
	printf("%d",i);
	return 0;
}
