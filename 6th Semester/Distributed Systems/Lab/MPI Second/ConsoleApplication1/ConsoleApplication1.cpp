#include <mpi.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    if (world_rank == 0)
    {
        int b[5];
        MPI_Recv(b, 5, MPI_INT, 1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        for (int i = 0;i < 5;i++)
            cout << b[i] << ",";
    }
    else
    {
        int a[10] = { 1,3,4,2,8,6,10,100,500 };
        MPI_Send(a, 5, MPI_INT, 0, 0, MPI_COMM_WORLD);
    }
    MPI_Finalize();
}
