#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void list_main(NodePtr *startPtr, tower array[]) // Inserts the whole Array into the List
{
	printf("\n-- Inserting into List --\n");
	BS_A_INT(array);
	int i;
	for (i = 0; i < count; ++i)
	{
		insert(startPtr, array[i]); 
	}
}

void insert( NodePtr *sPtr, tower value ) // Inserts a new Tower Node into the List
{
	NodePtr newPtr; 
	NodePtr previousPtr; 
	NodePtr currentPtr; 
	newPtr = malloc( sizeof( Node ));	
	if ((*sPtr) == NULL)
	{
		newPtr->data = value;
		newPtr->nextPtr = currentPtr;
		(*sPtr) = newPtr;
	}
	else{
		if ( newPtr != NULL )  
		{
			newPtr->data = value; 
			newPtr->nextPtr = NULL; 
			previousPtr = NULL;
			currentPtr = *sPtr;

			while ( currentPtr != NULL && value.height > currentPtr->data.height)
			{
				previousPtr = currentPtr; 
				currentPtr = currentPtr->nextPtr; 
			} 

			if ( previousPtr == NULL )
			{
				newPtr->nextPtr = *sPtr;
				*sPtr = newPtr;
			} 
			else   
			{
				previousPtr->nextPtr = newPtr;
				newPtr->nextPtr = currentPtr;
			} 
		} 
		else
		{
			printf( "Data not inserted. No memory available.\n");
		} 
	}
}

void print_list(NodePtr *startPtr) // Prints the List
{
	NodePtr currentPtr;
	currentPtr = (*startPtr)->nextPtr;
	printf("\n");
	while(currentPtr != NULL)
	{
		print_tower((currentPtr)->data);
		printf("\n");
		currentPtr = (currentPtr)->nextPtr;
	}
}