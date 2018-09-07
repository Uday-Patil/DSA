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


#include <stdlib.h>
#include "arr.h"
#include <stdio.h>



/* main function to call various Data Structure algorithms */
int main () {

   /* a pointer to an int */
	int *ptr;
	int i, n, ele, pos, ch;
	
	printf("\n --> Welcome to Data structure algorithms using Array operations and Dynamic memory allocation in C <-- ");
	printf("\n Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("\n Enter the array elements: ");
	ptr = initArray(n);
	
	printf("\n You entered the following elements: ");
	for ( i = 0; i < n; i++ ) {
		printf("\n arr[%d] = %d", i+1, *(ptr + i));
	}

	printf("\n Please make a choice:");
	printf("\n Press 0 to exit");
	printf("\n Press 1 to insert an element at a given index");
	printf("\n Press 2 to delete an element at a given index");
	printf("\n Press 3 to update an element");
	//printf("\n Press 4 to search an element");
	printf("\n Your choice: ");
	scanf("%d", &ch);
	
	switch(ch) 
	{
		case 0:
			printf("\n BYE :) ");
			
		break;
			
		case 1: 
			ptr = insertElement(ptr, n);
			n+=1;
			
			printf("\n Array elements after insertion: ");
			
			for ( i = 0; i < n; i++ ) {
				printf("\n arr[%d] = %d", i+1, ptr[i]);
			}
		break;
		
		case 2:
			ptr = deleteElement(ptr, n);
			n-=1;
			
			printf("\n Array elements after deletion: ");
			
			for ( i = 0; i < n; i++ ) {
				printf("\n arr[%d] = %d", i+1, ptr[i]);
			}
		break;
		
		case 3:
			ptr = updateElement(ptr, n);
			
			printf("\n Array elements after update are: ");
			
			for ( i = 0; i < n; i++ ) {
				printf("\n arr[%d] = %d", i+1, ptr[i]);
			}
		break;
		
		default:
			printf("\n Invalid selection");
			printf("\n Please choose either 1 or 2");
		break;
	}
		

	return 0;
}