#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

//Bubble Sorts
	void BS_A_INT(tower a[]) // Ascending by Height (int)
	{
		int i, j; 
		tower temp;
		for (i = 0; i < (count -1); ++i)
		{
			for (j = 0; j < (count -1 -i); ++j)
			{
				if(a[j].height > a[j+1].height)
				{
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	void BS_D_INT(tower a[]) // Descending by Height (int)
	{
		int i, j; 
		tower temp;
		for (i = 0; i < (count -1); ++i)
		{
			for (j = 0; j < (count -1 -i); ++j)
			{
				if(a[j].height < a[j+1].height)
				{
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	void BS_A_FL(tower a[]) // Ascending by Weight (float)
	{
		int i, j; 
		tower temp;
		for (i = 0; i < (count -1); ++i)
		{
			for (j = 0; j < (count -1 -i); ++j)
			{
				if(a[j].weight > a[j+1].weight)
				{
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	void BS_D_FL(tower a[]) // Descending by Weight (float)
	{
		int i, j; 
		tower temp;
		for (i = 0; i < (count -1); ++i)
		{
			for (j = 0; j < (count -1 -i); ++j)
			{
				if(a[j].weight < a[j+1].weight)
				{
					temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
				}
			}
		}
	}

// Selection Sorts
	void SEL_A_INT(tower a[]) // Ascending by Height (int)
	{
		int i, j;
		for (i = 0; i < count -1; ++i)
		{
			int min;
			tower temp;
			min = i;
			for (j = i+1; j < count; ++j)
			{
				if(a[j].height < a[min].height)
					min = j;
			}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		}
	}

	void SEL_D_INT(tower a[]) // Descending by Height (int)
	{
		int i, j;
		for (i = 0; i < count -1; ++i)
		{
			int min;
			tower temp;
			min = i;
			for (j = i+1; j < count; ++j)
			{
				if(a[j].height > a[min].height)
					min = j;
			}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		}
	}

	void SEL_A_FL(tower a[]) // Ascending by Weight (float)
	{
		int i, j;
		for (i = 0; i < count -1; ++i)
		{
			int min;
			tower temp;
			min = i;
			for (j = i+1; j < count; ++j)
			{
				if(a[j].weight < a[min].weight)
					min = j;
			}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		}
	}

	void SEL_D_FL(tower a[]) // Descending by Weight (float)
	{
		int i, j;
		for (i = 0; i < count -1; ++i)
		{
			int min;
			tower temp;
			min = i;
			for (j = i+1; j < count; ++j)
			{
				if(a[j].weight > a[min].weight)
					min = j;
			}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		}
	}	

// Insertion Sorts
	void IN_A_INT(tower a[]) // Ascending by Height (int)
	{
		int i, j;
		tower index;
		for (i = 0; i < count; ++i)
		{
			index = a[i];
			for (j = i; j > 0 && a[j-1].height > index.height; j--)
			{
				a[j] = a[j-1];
			}
			a[j] = index;
		}
	}

	void IN_D_INT(tower a[]) // Descending by Height (int)
	{
		int i, j;
		tower index;
		for (i = 0; i < count; ++i)
		{
			index = a[i];
			for (j = i; j > 0 && a[j-1].height < index.height; j--)
			{
				a[j] = a[j-1];
			}
			a[j] = index;
		}
	}

	void IN_A_FL(tower a[]) // Ascending by Weight (float)
	{
		int i, j;
		tower index;
		for (i = 0; i < count; ++i)
		{
			index = a[i];
			for (j = i; j > 0 && a[j-1].weight > index.weight; j--)
			{
				a[j] = a[j-1];
			}
			a[j] = index;
		}
	}

	void IN_D_FL(tower a[]) // Descending by Weight (float)
	{
		int i, j;
		tower index;
		for (i = 0; i < count; ++i)
		{
			index = a[i];
			for (j = i; j > 0 && a[j-1].weight < index.weight; j--)
			{
				a[j] = a[j-1];
			}
			a[j] = index;
		}
	}