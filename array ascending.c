#include <stdio.h>

int main()
{
    int a[10],n,i,j,temp;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n); 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    temp=0;
 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
    
    return 0;
}
