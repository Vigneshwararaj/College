// MPI1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "mpi.h"
#include<stdio.h>

int main()
{
    int commsize;
    int rank;

    MPI_Init(NULL, NULL);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &commsize);

    //printf("Hello World");

    std::cout << "Hello World!\n";
    MPI_Finalize();
}
