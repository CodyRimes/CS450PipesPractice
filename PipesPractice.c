#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void syserror(const char *);

int main(void)
{

	//create an array that will store process file descriptor calls
	int pfd[2];
	//Create a variable that holds a process type
	pid_t pid;


	if (pipe(pfd) == -1)

	switch (pid = fork())
	{
		//If we receive a -1 return value from the fork() function we...
		case -1:
			//print the error
			perror("The first fork operation has failed");
			//Break out of the switch statement 
			break;
		case 0:
			//This is our standard case if the child gets created and everything goes right 
			//exec() is a funciton that will make our process (which right now is essentially a clone of the parent)
			//into a usable process that can execute another command
			

			//If we hit this line, we know we have a problem
			/fprintf(stderr, "Could not execute a command with our child process");
			//Give an exit code to the program
			exit(-1);
			//Break out of the switch statement
			break;

	}

	//reap all childen processes
	while (wait(NULL) != -1)
	{
		//run until we break out of while loop to reap all children, run the bogus semi-colon
		;
	}
