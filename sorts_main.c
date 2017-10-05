#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void sorts_main(tower array[]) // Sorts the Array in various ways
{
	int choice1;
	printf("-- Sorting Data --\n");
	printf("Sort in 1. Ascending or 2. Descending?\n");
	scanf("%d", &choice1);

	printf("Sort by 1. Height (int) or 2. Weight (float)?\n");
	int choice2;
	scanf("%d", &choice2);

	printf("Choose a sorting method\n");
	printf("1. Bubble Sort 2. Selection Sort 3. Insertion Sort\n");
	int choice3;
	scanf("%d", &choice3);

	sorts_final(array, choice1, choice2, choice3);
}

void sorts_final(tower array[], int AorD, int HorW, int BorSorI) // Using templates would of been useful here but I did not know about them at the time
{
	//Bubble
		if(AorD == 1 && HorW == 1 && BorSorI == 1)
		{
			printf("- Ascending by Height (Int) Bubble Sort -\n");
			BS_A_INT(array);
		}
		if(AorD == 2 && HorW == 1 && BorSorI == 1)
		{
			printf("- Descending by Height (Int) Bubble Sort -\n");
			BS_D_INT(array);
		}
		if(AorD == 1 && HorW == 2 && BorSorI == 1)
		{
			printf("- Ascending by Weight (Float) Bubble Sort -\n");
			BS_A_FL(array);
		}
		if(AorD == 2 && HorW == 2 && BorSorI == 1)
		{
			printf("- Descending by Weight (Float) Bubble Sort -\n");
			BS_D_FL(array);
		}
	//Selection
		if(AorD == 1 && HorW == 1 && BorSorI == 2)
		{
			printf("- Ascending by Height (Int) Selection Sort -\n");
			SEL_A_INT(array);
		}	
		if(AorD == 2 && HorW == 1 && BorSorI == 2)
		{
			printf("- Descending by Height (Int) Selection Sort -\n");
			SEL_D_INT(array);
		}	
		if(AorD == 1 && HorW == 2 && BorSorI == 2)
		{
			printf("- Ascending by Weight (Float) Selection Sort -\n");
			SEL_A_FL(array);
		}	
		if(AorD == 2 && HorW == 2 && BorSorI == 2)
		{
			printf("- Descending by Weight (Float) Selection Sort -\n");
			SEL_D_FL(array);
		}	
	//Insertion
		if(AorD == 1 && HorW == 1 && BorSorI == 3)
		{
			printf("- Ascending by Height (Int) Insertion Sort -\n");
			IN_A_INT(array);
		}	
		if(AorD == 2 && HorW == 1 && BorSorI == 3)
		{
			printf("- Descending by Height (Int) Insertion Sort -\n");
			IN_D_INT(array);
		}	
		if(AorD == 1 && HorW == 2 && BorSorI == 3)
		{
			printf("- Ascending by Weight (Float) Insertion Sort -\n");
			IN_A_FL(array);
		}	
		if(AorD == 2 && HorW == 2 && BorSorI == 3)
		{
			printf("- Descending by Weight (Float) Insertion Sort -\n");
			IN_D_FL(array);
		}				
}