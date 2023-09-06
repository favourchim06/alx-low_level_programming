#include <stdlib.h>

/* Function to allocate and initialize a 2D grid of integers */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for invalid width or height */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the rows of the grid */
    grid = (int **)malloc(height * sizeof(int *));

    if (grid == NULL)
        return (NULL);

    /* Allocate memory for the columns of each row and initialize to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));

        if (grid[i] == NULL)
        {
            /* If allocation fails, free previously allocated memory */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialize each element to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
