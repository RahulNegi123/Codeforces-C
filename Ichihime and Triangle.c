#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long a,b,c,d,x,y,z;
    for(int i=1;i<=t;i++)
    {


        scanf("%lli%lli%lli%lli",&a,&b,&c,&d);
        x=b,y=c,z=c;

        printf("%lli %lli %lli\n",x,y,z);
    }
    return 0;
}
