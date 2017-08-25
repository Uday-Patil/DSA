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
#define MAX_SIZE 10 //Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; //Declares an array of MAX_SIZE
    int i, N, pos, j=0, item = 5;

    /* Input size of the array */
	a:
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
	
    printf("Enter %d elements in the array (<=10) : ", N);
	
	if(N <= MAX_SIZE) {
		for(i=0; i<N; i++){
			scanf("%d", &arr[i]);
		} else {
			printf("\n No. of elements out of bounds, please enter a value <=10");
			goto a;
		}
	}
    /*
     * Print all elements of array
     */
	printf("\nElements in array are: ");
	for(i=0; i<N; i++) {
		printf("%d, ", arr[i]);
	}
	b:
	printf("\n At what position should %d be inserted: ", item);
	scanf("%d",&pos);

	if(pos <=n){
		j = N;
	
		while( j >= pos) {
			arr[j+1] = arr[j];
			j = j - 1;
		}
	
		arr[pos] = item;
	} else {
		printf("\n Position %d does not exist", pos);
		goto b;
	}

	printf("\n Array elements after adding ITEM are: ");
	for(int i=0; i<=N; i++) {
		printf(" %d",arr[i]);
	}
}