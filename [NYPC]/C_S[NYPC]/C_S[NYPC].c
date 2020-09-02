#include <stdio.h>
#include <stdlib.h>

// 카트라이더 별 모으기 Collect Star

int main()
{
    int N = 0;
    int i, j;

    int T[3] = {
        0,
    };

    int T_1[3], T_2[3], T_3[3], T_T[3] = {
                                    0,
                                };

    int *N_1, *N_2, *N_3, *N_T;
    //---------------------------------------------------------------------------------------

    for (i = 0; i < sizeof(T) / sizeof(int); i++)
    {
        scanf("%d:%d:%d", &T_1[i], &T_2[i], &T_3[i]);
        T_T[i] = (T_1[i] * 10000) + (T_2[i] * 100) + T_3[i];
    }

    scanf("%d", &N);

    if (N >= 1 && N <= 10)
    {
        N_1 = malloc(sizeof(int) * N);
        N_2 = malloc(sizeof(int) * N);
        N_3 = malloc(sizeof(int) * N);
        N_T = malloc(sizeof(int) * N);

        for (i = 0; i < N; i++)
        {
            N_1[i], N_2[i], N_3[i], N_T[i] = 0;
        }

        for (i = 0; i < N; i++)
        {
            scanf("%d:%d:%d", &N_1[i], &N_2[i], &N_3[i]);
            N_T[i] = (N_1[i] * 10000) + (N_2[i] * 100) + N_3[i];
        }

        for (i = 0; i < N; i++)
        {
            if (T_T[0] >= N_T[i] && N_T[i] > T_T[1])
            {
                printf("*\n");
            }
            else if (T_T[1] >= N_T[i] && N_T[i] > T_T[2])
            {
                printf("**\n");
            }
            else if (T_T[2] >= N_T[i])
            {
                printf("***\n");
            }
            else if (T_T[0] < N_T[i])
            {
                printf(":(\n");
            }
        }
    }

    free(N_1);
    free(N_2);
    free(N_3);
    free(N_T);

    return 0;
}