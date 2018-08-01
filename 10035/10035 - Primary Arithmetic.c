#include<stdio.h>
int main()
{
    long long int n1,n2,d1,d2,c,k;
    while(scanf("%lld %lld",&n1,&n2)==2)
    {
        if(n1==0 && n2==0)
            break;
        c=0;
        k=0;
        while(n1!=0 || n2!=0)
        {

            d1=n1%10;
            n1=n1/10;

            d2=n2%10;
            n2=n2/10;

            k=(k+d1+d2);

            if(k>9)
                c++;
            k/=10;
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("%lld carry operation.\n",c);
        else
            printf("%lld carry operations.\n",c);
    }
    return 0;
}
