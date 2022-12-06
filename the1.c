#include <stdio.h>
int main () {
    int r;
    int k;
    int arr[100][7];
    int i;
    int j;
    int c;
    int pi;
    int pf;
    int wall[100000] = {0};
    scanf("%d", &r);
    scanf("%d", &k);
    for (i = 0; i < (r+1); i++)
    {
        wall[i] = 1;
    }
    for (c = 0; c < k; c++)
    {
        for (j = 0; j < 7; j++)
        {
            scanf("%d",&arr[c][j]);
        }
    }
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < arr[i][6]; j++)
        {
            pi = arr[i][3] + (arr[i][5] * arr[i][4] * j);
            pf = arr[i][3] + (arr[i][5] * arr[i][4] * j) + arr[i][0];
            while (pi < pf)
            {
                if (wall[pi] < arr[i][1])
                {
                    wall[pi] = arr[i][1];
                }
                pi++;
            }
        }
    }

    for (i=0;i<r;i++)
    {
        printf("%d ",wall[i]);
    }
    printf("%d\n",wall[r]);
    return 0;
}