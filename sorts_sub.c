#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void sorts_main(tower array[])
{
	int choice1;
	printf("-- Sorting Data --\n");
	printf("Sort in 1. Ascending or 2. Descending?\n");
	scanf("%d", &choice1);
	/*while(choice1 != 1 || choice1 != 2)
	{
		choice1 = cherror(choice1);
	}*/
	if(choice1 == 1 || 2)
	{
		sorts_second(array, choice1);
	}
}

void sorts_second(tower array[], int choice1)
{
	printf("Sort by 1. Height (int) or 2. Weight (float)?\n");
	int choice2;
	scanf("%d", &choice2);
	/*while(choice2 != 1 || choice2 != 2)
	{
		choice2 = cherror(choice2);
	}*/
	if(choice2 == 1 || 2)
	{
		sorts_third(array, choice1, choice2);
	}
}

void sorts_third(tower array[], int choice1, int choice2)
{
	printf("Choose a sorting method\n");
	printf("1. Bubble Sort 2. Selection Sort 3. Insertion Sort\n");
	int choice3;
	scanf("%d", &choice3);
	/*while(choice3 != 1 || choice3 != 2 || choice3 != 3)
	{
		choice3 = cherror(choice3);
	}*/
	if(choice3 == 1 || 2 || 3)
	{
		sorts_final(array, choice1, choice2, choice3);
	}	
}

void sorts_final(tower array[], int AorD, int HorW, int BorSorI)
{
	//Bubble
		if(AorD == 1 && HorW == 1 && BorSorI == 1)
		{
			BS_A_INT(array);
		}
		if(AorD == 2 && HorW == 1 && BorSorI == 1)
		{
			BS_D_INT(array);
		}
		if(AorD == 1 && HorW == 2 && BorSorI == 1)
		{
			BS_A_FL(array);
		}
		if(AorD == 2 && HorW == 2 && BorSorI == 1)
		{
			BS_D_FL(array);
		}
	//Selection
		if(AorD == 1 && HorW == 1 && BorSorI == 2)
		{
			SEL_A_INT(array);
		}	
		if(AorD == 2 && HorW == 1 && BorSorI == 2)
		{
			SEL_D_INT(array);
		}	
		if(AorD == 1 && HorW == 2 && BorSorI == 2)
		{
			SEL_A_FL(array);
		}	
		if(AorD == 2 && HorW == 2 && BorSorI == 2)
		{
			SEL_D_FL(array);
		}	
	//Insertion
		if(AorD == 1 && HorW == 1 && BorSorI == 3)
		{
			IN_A_INT(array);
		}	
		if(AorD == 1 && HorW == 1 && BorSorI == 3)
		{
			IN_D_INT(array);
		}	
		if(AorD == 1 && HorW == 1 && BorSorI == 3)
		{
			IN_A_FL(array);
		}	
		if(AorD == 1 && HorW == 1 && BorSorI == 3)
		{
			IN_D_FL(array);
		}				
}