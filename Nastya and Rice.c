#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n=0,a=0,b=0,c=0,d=0,L=0,U=0;
        scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
        L=n*(a-b);
        U=n*(a+b);
        if(L>c+d || U<c-d)
            printf("No\n");
        else
            printf("Yes\n");

    }
    return 0;
}
