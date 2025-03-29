#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
int **alloc_grid(int width, int height)
{
    int **hamo, i;
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    hamo = calloc(height, sizeof(int*));
    for (i = 0; i < height ; i++)
    {
        hamo[i] = calloc(width, sizeof(int));
        if (hamo[i] == NULL)
        {
            while(i > 0)
            {
                free(hamo[i - 1]);
                i--;
            }
            free(hamo);
            return(NULL);
        }
    }

    if (hamo == NULL)
    {
        return(NULL);
    }
    
    return (hamo);
}
void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0)
    {
        return;
    }
    while (height > 0)
    {
        free(grid[height - 1]);
        height--;
    }
    free(grid);
}