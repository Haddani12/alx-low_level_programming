#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
<<<<<<< HEAD
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
=======
 *  * free_grid - frees 2d array
 *   * @grid: 2d grid
 *    * @height: height dimension of grid
 *     * Description: frees memory of grid
 *      * Return: nothing
 *       *
 *        */
void free_grid(int **grid, int height)
{
		int i;

			for (i = 0; i < height; i++)
					{
								free(grid[i]);
									}
				free(grid);
>>>>>>> c4bfd92574fb6e4031cec3ed5d363adf4bd0521e
}
