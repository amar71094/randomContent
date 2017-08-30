#include <stdio.h>
#include <unistd.h>
int main()
{
   static int i = 0;	
   fork();
   fork() && fork() || fork();
   fork();
   printf("forked\n");
   return 0;
}
