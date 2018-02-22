/*
 ============================================================================
 Name        : ArrDSOperations.c
 Author      : Uday Patil
 Version     :
 Copyright   : Your copyright notice
 Description : Array Data Structure Operations:
				i. 	Initialization of array using Dynamic memory allocation technique.
			   ii.	Insert operation is to insert a data element into an array. 
					Based on the requirement, a new element can be added at the beginning,
					end, or any given index of array. Here, we see a practical implementation
					of insertion operation, where we add data at the end of the array.
			  iii.	Delete operation is to delete a data element from an array. 
					Based on the requirement, an element can be deleted
					at the beginning, end, or any given index of array. Here, we
					see a practical implementation of deletion operation, where
					we delete data from an array.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
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
int * insertElement(int *p,int size) {
	int i, pos, ele;
	
	back:
	printf("\n Enter the element to insert: ");
	scanf("%d", &ele);
	
	printf("\n Enter the position where element should be inserted: ");
	scanf("%d", &pos);
			
	if(pos <= size) {
		for(i=size-1; i>= pos-1; i--)
		{
			*(p+(i+1)) = *(p+i);
		}
	*(p+(pos-1)) = ele;
	} 
	else {
		printf("\n Position out of bound");
		goto back;
	}
	return p;
}

/* function to delete an element from the passed array to the provided index */
int * deleteElement(int *p, int size) {
	int i, pos;
	
	again:
	printf("\n Enter the position at which element should be deleted: ");
	scanf("%d", &pos);
	
	if(pos < size){
		i = pos;
	
		while( i<size) {
			*(p+(i-1)) = *(p+i);
			printf("\n %d at %d", *(p+(i-1)), i);
			i++;
		}
	} else {
		printf("\n Invalid position, please enter a valid position");
		goto again;
	}
	
	return p;
}

/* function to update an element from the passed array at the provided index */
int * updateElement(int *p, int size) {
	int ele, pos;
	
	again:
	printf("\n Enter the position at which element should be updated: ");
	scanf("%d", &pos);
	
	printf("\n Enter the element to update: ");
	scanf("%d", &ele);
	
	if(pos < size){
		*(p+(pos-1))=ele;
		
	} else {
		printf("\n Invalid position, please enter a valid position");
		goto again;
	}
	
	return p;
}