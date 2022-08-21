#include <stdio.h>

void findEqui(int a[],int n)
{
    int i,j=1,sa,sb,c=0;
    
    while(j<n-1)
    {
        sa=0; sb=0;
        for(i=0;i<j;i++)
            sa += a[i];
        for(i=j+1;i<n;i++)
            sb += a[i];
        if(sa==sb)
        {
            c++;
            printf("\n%d",j);
            break;
        }
        j++;
    }
    if(c==0)
            printf("\nNo Equilibrium");
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d,",&a[i]);
    }
    scanf("%d",&a[i]);

    findEqui(a,n);
    return 0;
}
