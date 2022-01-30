#include <stdio.h>
#include<iostream>
#include <mpi.h>


#define send_data_tag 2001
#define return_data_tag 2002

int array[50];
int array2[50];

int main(int argc, char** argv)
{
    int sum, partial_sum;
    MPI_Status status;
    int id, an_id;
    int i;
    int procs;
    int rows, rows_receive, avg_row_process;
    int rows_received, start_row, end_row;
    int rows_send, sender;


    MPI_Init(&argc, &argv);




    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    MPI_Comm_size(MPI_COMM_WORLD, &procs);

    if (id == 0) {



        scanf_s("%i", &rows);

        avg_row_process = rows / procs;


        for (i = 0; i < rows; i++) {
            array[i] = (i + 1)*(i+1);
        }


        for (an_id = 1; an_id < procs; an_id++) {
            start_row = an_id * avg_row_process + 1;
            end_row = (an_id + 1) * avg_row_process;

            if ((rows - end_row) < avg_row_process)
                end_row = rows - 1;

            rows_send = end_row - start_row + 1;

            MPI_Send(&rows_send, 1, MPI_INT,
                an_id, send_data_tag, MPI_COMM_WORLD);

            MPI_Send(&array[start_row], rows_send, MPI_INT,
                an_id, send_data_tag, MPI_COMM_WORLD);
        }



        sum = 0;
        for (i = 0; i < avg_row_process + 1; i++) {
            sum += array[i];
        }

        printf("the sum %i calculated by root process is \n", sum);


        for (an_id = 1; an_id < procs; an_id++) {

            MPI_Recv(&partial_sum, 1, MPI_LONG, MPI_ANY_SOURCE,
                return_data_tag, MPI_COMM_WORLD, &status);

            sender = status.MPI_SOURCE;

            printf("The Partial sum %i returned from process is %i\n", partial_sum, sender);

            sum += partial_sum;
        }

        printf("The total sum  is: %i\n", sum);
    }

    else {

   

            MPI_Recv(&rows_receive, 1, MPI_INT,
                0, send_data_tag, MPI_COMM_WORLD, &status);

        MPI_Recv(&array2, rows_receive, MPI_INT,
            0, send_data_tag, MPI_COMM_WORLD, &status);

        rows_received = rows_receive;



        partial_sum = 0;
        for (i = 0; i < rows_received; i++) {
            partial_sum += array2[i];
        }


        MPI_Send(&partial_sum, 1, MPI_LONG, 0,
            return_data_tag, MPI_COMM_WORLD);
    }
    MPI_Finalize();
}
