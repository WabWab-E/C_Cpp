#include <stdio.h>
#include <string.h>

// S or T

// S를 입력받으면 커서가 1칸
// T를 입력받으면 커서가 위치해있는칸에서 가장 가까운 4의 배수만큼 이동

int main()
{
    int i;
    int count = 0;
    char SorT[100000] = {"\0"};

    scanf("%s", SorT);

    for (i = 0; i < strlen(SorT); i++)
    {
        if (SorT[i] == 's' || SorT[i] == 'S')
            count += 1;
        if (SorT[i] == 't' || SorT[i] == 'T')
            count = ((count / 4) + 1) * 4;
    }

    printf("%d", count);

    return 0;
}
