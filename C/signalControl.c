/* A C program that does not terminate when Ctrl+C is pressed */
#include <stdio.h>
#include <signal.h>
#include<stdlib.h>
#include<unistd.h>
 
/* Signal Handler for SIGINT */
void sigintHandler(int sig_num)
{
    /* Reset handler to catch SIGINT next time.
       Refer http://en.cppreference.com/w/c/program/signal */
//    signal(SIGINT, sigintHandler);
    printf("\n Cannot be terminated using Ctrl+C \n");
    fflush(stdout);
}
 
int main ()
{
    /* Set the SIGINT (Ctrl-C) signal handler to sigintHandler 
       Refer http://en.cppreference.com/w/c/program/signal */
    signal(SIGINT, sigintHandler);
 
    /* Infinite loop */
    while(1)
    { 
	printf("*");       
	sleep(1000);
    }
    return 0;
}
