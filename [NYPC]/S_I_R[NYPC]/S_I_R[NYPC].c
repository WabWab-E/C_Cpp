#include <stdio.h>

int main()
{
    int i;

    int T;

    int B_Team[4];
    int E_Team[4];

    scanf("%d", &T);

    if (T >= 1 || T <= 1000)
    {

        printf("awdawd");

        scanf("%d %d %d %d %d %d %d %d",
              B_Team[0], B_Team[1], B_Team[2], B_Team[3],
              E_Team[0], E_Team[1], E_Team[2], E_Team[3]);

        for (i = 0; i < 4; i++)
        {
            printf("%d", B_Team[i]);
            printf("%d", E_Team[i]);
        }
    }

    
    return 0;
}