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
		printf("(Enter a value\n");
		scanf("%d",&x);
		MPI_Send(&x,1,MPI_INT,1,0,MPI_COMM_WORLD);
	}
	else if(rank == 1)
	{
		MPI_Recv(&x,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
		printf("Process %d - Received number %d from master process \n",rank,x);
	}
	MPI_Finalize();
}
		
