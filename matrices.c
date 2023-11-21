#include <stdio.h>

int n, m;

int main()
{
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);

    printf("Ingrese el numero de filas: ");
    scanf("%d", &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }
}