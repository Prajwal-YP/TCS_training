#include<stdio.h>

int find(int n)
{
    int i,j;
    int a[100]={2,3,5,7},count=4;
    while(count<n)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                a[count]=a[i+4*(count/20)]*10 + a[j];
                count++;
                if(count==n)
                break;
            }
            if(count==n)
                break;
        }
    }
    return a[n-1];
}

int main()
{
    int i,t;
    
    scanf("%d",&t);
    int n[t],a[t];
    
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        a[i]=find(n[i]);
    }
    
    printf("\n\nAnswer\t:\n\n");
    for(i=0;i<t;i++)
    printf("\t\t%d\n",a[i]);
    return 0;
}
