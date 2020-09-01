#include <stdio.h>
#include <stdlib.h>

// 스피드전 할까 아이템전 할까

// 배찌와 친구들은 각각 실력 지표를 가지고 있는데,
// 스피드전은 실력의 합이 높은 팀이 승리하고,
// 아이템전은 실력이 가장 높은 사람이 속한 팀이 승리한다.
// 비기게 되는 경우도 존재하는데,
// 스피드전의 경우 두 팀의 실력의 합이 같으면 비기게 되고,
// 아이템전의 경우 두 팀의 가장 높은 실력이 같으면 비기게 된다.

// 09-02-07:01 정답 - 입력값의 범위를 정하는 코드가 없어서 오답인줄 알았지만 사실은 결과값 계산식이 하나 빠져있었다 ^^;

int main()
{
    int a = 0;
    int i, j;
    int T = 0;

    int *B_M;
    int *E_M;

    int *B_S;
    int *E_S;

    int B_Team[4];
    int E_Team[4];

    scanf("%d", &T);

    B_S = malloc(sizeof(int) * T);
    E_S = malloc(sizeof(int) * T);
    B_M = malloc(sizeof(int) * T);
    E_M = malloc(sizeof(int) * T);

    if (T >= 1 && T <= 1000)
    {

        for (i = 0; i < T; i++)
        {
            B_S[i] = 0;
            E_S[i] = 0;
            B_M[i] = 0;
            E_M[i] = 0;
        }

        for (i = 0; i < T; i++)
        {
            // while (1)
            // {
            scanf("%d %d %d %d %d %d %d %d",
                  &B_Team[0], &B_Team[1], &B_Team[2], &B_Team[3],
                  &E_Team[0], &E_Team[1], &E_Team[2], &E_Team[3]);

            //     if (1 <= B_Team[0] && B_Team[0] <= 1000 &&
            //         1 <= B_Team[1] && B_Team[1] <= 1000 &&
            //         1 <= B_Team[2] && B_Team[2] <= 1000 &&
            //         1 <= B_Team[3] && B_Team[3] <= 1000 &&
            //         1 <= E_Team[0] && E_Team[0] <= 1000 &&
            //         1 <= E_Team[1] && E_Team[1] <= 1000 &&
            //         1 <= E_Team[2] && E_Team[2] <= 1000 &&
            //         1 <= E_Team[3] && E_Team[3] <= 1000)
            //     {
            //         break;
            //     }
            // }

            // 두팀의 합 구하기
            for (j = 0; j < sizeof(B_Team) / sizeof(int); j++)
            {
                B_S[i] += B_Team[j];
                E_S[i] += E_Team[j];
            }

            // 각 팀에서 가장 큰 수 구하기
            for (j = 0; j < sizeof(B_Team) / sizeof(int); j++)
            {
                if (B_M[i] < B_Team[j])
                {
                    B_M[i] = B_Team[j];
                }

                if (E_M[i] < E_Team[j])
                {
                    E_M[i] = E_Team[j];
                }
            }
        }

        for (i = 0; i < T; i++)
        {
            if (B_S[i] > E_S[i])
            {
                if (B_M[i] > E_M[i])
                {
                    printf("R\n");
                }
                else
                {
                    printf("S\n");
                }
            }

            else if (B_S[i] == E_S[i])
            {
                if (B_M[i] > E_M[i])
                {
                    printf("I\n");
                }
                else
                {
                    printf("R\n");
                }
            }
            else if (B_M[i] == E_M[i])
            {
                printf("R\n");
            }

            else if (B_S[i] < E_S[i])
            {
                if (B_M[i] < E_M[i])
                {
                    printf("R\n");
                }
                else
                {
                    printf("I\n");
                }
            }
        }
    }

    free(B_S);
    free(E_S);
    free(B_M);
    free(E_M);

    return 0;
}
