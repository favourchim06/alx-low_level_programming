#include <stdlib.h>

/* 
 * free_grid - Frees a 2D grid created by alloc_grid.
 * @grid: The pointer to the 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid
 * created by alloc_grid. It first frees the individual rows and then frees
 * the array of row pointers.
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
        {
            free(grid[i]); /* Free each row */
            grid[i] = NULL; /* Set the row pointer to NULL */
        }
    }

    free(grid); /* Free the array of row pointers */
}
