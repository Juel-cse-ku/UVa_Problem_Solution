#include<stdio.h>
int main()
{
    int n1,n2,c,t,i,n3,n4;
    while (scanf("%d%d",&n1,&n2)==2)
    {
        int max_cycle=0;
        n3 = n1;
        n4 = n2;
        if(n1>n2)
        {
            t=n1;
            n1=n2;
            n2=t;
        }

        for(i=n1; i<=n2; i++)
        {
            int count=1;
            int n = i;

            while (n>1)
            {
                count++;
                if(n%2==0)
                {
                    n/=2;
                }
                else
                    n=3*n+1;

            }
            if(count > max_cycle)
                max_cycle = count;
        }
        printf("%d %d %d\n",n3,n4,max_cycle);

    }
    return 0;
}
