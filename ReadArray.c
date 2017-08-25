/*
 ============================================================================
 Name        : UPatil_Aug_160817.c
 Author      : Uday Patil
 Version     :
 Copyright   : Your copyright notice
 Description : Insertion Operation
			   Insert operation is to insert one or more data elements into
			   an array. Based on the requirement, a new element can be added
			   at the beginning, end, or any given index of array. Here, we
			   see a practical implementation of insertion operation, where
			   we add data at the end of the array
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 1000 //Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; //Declares an array of MAX_SIZE
    int i, N;

    /* Input size of the array */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Print all elements of array
     */
    printf("\nElements in array are: ");
    for(i=0; i<N; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}