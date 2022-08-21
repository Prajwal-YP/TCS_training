#include <stdio.h>

int distSum(int num)
{
    int i,s=0,a[10]={0,0,0,0,0,0,0,0,0,0};
    while(num!=0)
    {
        i = num%10;
        a[i]++;
        num /= 10;
    }
    
    for(i=0;i<10;i++)
    {
        if(a[i]==1)
            s += i;
    }
    return s;
}

int main()
{
    int t,i,s1,s2;
    scanf("%d",&t);
    int m[t],n[t];
    for(i=0;i<t;i++)
    scanf("%d%d",&m[i],&n[i]);
    
    for(i=0;i<t;i++)
    {
        s1=distSum(m[i]);
        s2=distSum(n[i]);    
        
        if(s1==s2)
            printf("\nYes");
        else
            printf("\nNo");
    }
}
