#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int *tmp_i;
    int *tmp_j;

    int *near_j;

    int i, j = 0;

    int user_N, user_S, find_K = 0;

    int *user_K;

    int D = 0; //차이값

    int D_M = 1000; //차이 최소값

    int *near; //가까운 값

    scanf("%d", &user_N);

    user_K = malloc(sizeof(int) * user_N);
    near = malloc(sizeof(int) * find_K);
    near_j = malloc(sizeof(int) * find_K);
    tmp_i = malloc(sizeof(int) * find_K);
    tmp_j = malloc(sizeof(int) * find_K);

    for (i = 0; i < user_N; i++)
    {
        if (i < find_K)
        {
            near[i] = 0;
            user_K[i] = 0;
            tmp_i[i] = 0;
            tmp_j[i] = 0;
            near_j[i] = 0;
        }
        user_K[i] = 0;
    }

    scanf("%d %d", &user_S, &find_K);

    for (i = 0; i < user_N; i++)
    {
        scanf("%d", &user_K[i]);
    }

    for (i = 0; i < find_K; i++)
    {
        for (j = 0; j < user_N; j++)
        {
            D = user_K[j] - user_S;
            if (abs(D_M) > abs(D))
            {
                if (tmp_i[i] != i && tmp_j[j] != j)
                {
                    D_M = D;
                    near[i] = user_K[j];
                    tmp_i[i] = i;
                    tmp_j[i] = j;
                }
            }
        }
    }

    for (i = 0; i < find_K; i++)
    {
        for (j = 0; j < user_N; j++)
        {
            if (near[i] == user_K[j])
            {
                near_j[i] = j;
            }
        }
        printf("%d ", near[i]);
        printf("%d ", near[2]);
    }

    free(near);
    free(user_K);
    free(tmp_i);
    free(tmp_j);
    free(near_j);

    return 0;
}