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
#include <stdlib.h>

#include <stdio.h>

/* function to initialise an array */
int * initArray(int n) {
	static int* ptr;
	int i;
	
	ptr = (int*)calloc(n,sizeof(int));
	
	for ( i = 0; i < n; ++i) {
		scanf("%d", ptr+i);
	}
	
	return (ptr);
}

/* function to insert an element at a given in to the passed array */
int * insertElement(int *p, int element, int size, int pos) {
	int i;
	
	if(pos <= size) {
		for(i=size-1; i>= pos-1; i--)
		{
			*(p+(i+1)) = *(p+i);
		}
	} 
	else {
		printf("\n Position out of bound");
	}
	*(p+(pos-1)) = element;
	return p;
}

/* function to delete an element from the passed array to the provided index */
int * deleteElement(int *p, int pos, int size) {
	int i=pos;
	
	while( i<size) {
		*(p+(i-1)) = *(p+i);
		printf("\n %d at %d", *(p+(i-1)), i);
		i++;
	}
	
	return p;
}


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
		printf("\n arr[%d] = %d", i, *(ptr + i));
	}

	printf("\n Please make a choice:");
	printf("\n Press 1 to insert an element at a given index");
	printf("\n Press 2 to delete an element at a given index");
	printf("\n Press 0 to exit");
	//printf("\n Press 3 to update an element");
	//printf("\n Press 4 to search an element");
	printf("\n Your choice: ");
	scanf("%d", &ch);
	
	switch(ch) 
	{
		case 0:
			printf("\n BYE :) ");
			
		break;
			
		case 1: 
			printf("\n Enter the element to insert: ");
			scanf("%d", &ele);
			printf("\n Enter the position where element should be inserted: ");
			scanf("%d", &pos);
			
			ptr = insertElement(ptr, ele, n, pos);
			n+=1;
			
			printf("\n Array elements after insertion: ");
			
			for ( i = 0; i < n; i++ ) {
				printf("\n arr[%d] = %d", i, *(ptr + i));
			}
		break;
		
		case 2:
			printf("\n Enter the position at which element should be deleted: ");
			scanf("%d", &pos);
			
			ptr = deleteElement(ptr, pos, n);
			n-=1;
			
			printf("\n Array elements after deletion: ");
			
			for ( i = 0; i < n; i++ ) {
				printf("\n arr[%d] = %d", i, *(ptr + i));
			}
		break;
		
		default:
			printf("\n Invalid selection");
			printf("\n Please choose either 1 or 2");
		break;
	}
		

	return 0;
}