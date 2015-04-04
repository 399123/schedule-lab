#include <stdio.h>
#include <unistd.h>



int main(int argc, char const *argv[])
{
	char* cheduler;
	char* function;
	int processes;
	int scan;


	printf ("Enter the scheduler, either SCHED_RR or SCHED_FIFO (Leave blank for default)\n");
	scanf("%c\n", cheduler);
	printf ("Enter the function, either pi or rw: \n");
	scanf("%c\n", function);
	printf ("Enter the number of processes\n");
	scanf("%c\n", processes);
	int pid[processes];
	for(int i=0; i<processes; i++)
	{
		pid[i]=fork();
	}
	if(*function == "pi"){
		char = iterations;
		printf ("Enter the number of iterations (leave blank for default)\n");
		scan = scanf("%c\n", &iterations);
		execl("pi-sched.c", iterations, cheduler);
	}
	else if(*function == "rw"){
		rw_scheduler(iterations, cheduler);
	}

	return 0;
};