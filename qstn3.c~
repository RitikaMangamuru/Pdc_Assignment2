#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    
	MPI_Init(NULL, NULL);
	int rank,size;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	int x;
	if(rank == 0)
	{		
		printf("Enter a value\n");
		scanf("%d",&x);		
	}	
	MPI_Bcast(&x, 1, MPI_INT, 0, MPI_COMM_WORLD);
	if(rank != 0)
	{
		printf("Process %d's value %d\n",rank,x);
	}
	MPI_Finalize();
}
		
