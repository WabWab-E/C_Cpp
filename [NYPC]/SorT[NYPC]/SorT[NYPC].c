#include <stdio.h>
#include <string.h>

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
