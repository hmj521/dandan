#include <stdio.h>
#include <stdlib.h>

int main()
{int n=0;
    int i=0;
    int ret =1;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        ret =ret *i;
    }
    printf ("%d\n",ret);
    return 0;
}
