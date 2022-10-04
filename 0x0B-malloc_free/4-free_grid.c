#include<stdlib.h>
/**
 * free_grid - free space of the maoc
 * @grid:the gght
 * @height: lenght
 * Return: free space
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
