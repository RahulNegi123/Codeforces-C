#include <stdio.h>
int main ()
{
    int w;
    scanf("%d",&w);
    int i,j,flag=0;
    for(i=1;i<=w;i++)
    {
        //hello
        int sum=0;
        if(i%2==0)
        {
            for(j=i;j<=w;j++)
            {
                if(j%2==0)
                sum=j+i;
                    if(sum==w)
                    {
                        flag++; break;}
            }
        }
    }
    if(flag>0)
        printf("YES");
        else
            printf("NO");
            return 0;
}
