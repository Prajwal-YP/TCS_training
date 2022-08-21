#include <stdio.h>

void subArray(int a[],int n,int s)
{
    int i,k=0,sum,c=0;
    
    while(k<n-1)
    {
        sum=0;
        for(i=k;i<n;i++)
        {
            sum += a[i];
            if(sum==s && k!=i)
            {
                c++;
                printf("\nSum found between indexes %d and %d",k,i);
                break;
            }
        }
        k++;
    }
    if(c==0)
        printf("\nNo sub array found");
}

int main()
{
    int n,i,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n-1;i++)
        scanf("%d,",&a[i]);
    scanf("%d,",&a[i]);
    scanf("%d",&s);
    
    subArray(a,n,s);
    
    return 0;
}
