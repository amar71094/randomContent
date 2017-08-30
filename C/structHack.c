#include<stdio.h>

struct Hack {
	int id;
	int nameLen;
	char name[0];
 
};
int main() {
	struct Hack Obj;
	printf("%lu Bytes\n",sizeof(Obj));
return 0;
}
