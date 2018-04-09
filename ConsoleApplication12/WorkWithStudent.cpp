#include<stdlib.h>
#include<stdio.h>
#include "StudetsSett.h"
FILE *file;

void CreatFileOfStudents( char *fileName, char *mode)
{
	int randStud = 0;
	students * std = genStud(&randStud);

	
	if ((file = fopen(fileName, mode)) != NULL)
	{
		for (size_t i = 0; i < randStud; i++)
		{
			fprintf(file, "%s\n",std[i].name);
		}
	}
	fclose(file);
	
}