#include <stdio.h>
int main()
{
int t;
long long n,ans;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    scanf("%lli",&n);
    ans=(n-1)/2;
    printf("%lli\n",ans);

}
return 0;
}
