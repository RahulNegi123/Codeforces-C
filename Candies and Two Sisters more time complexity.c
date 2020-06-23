#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long n;
    int i;

    for(i=1;i<=t;i++)
    {
        int j,k;
        long long flag=0;
        scanf("%lli",&n);
        for(j=1;j<=n;j++)
        {
            for(k=j;k<=n;k++)
            {
                if((j+k)==n)
                    flag++;
            }
        }
        printf("%lli\n",flag);

    }
    return 0;
}
