#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    int a[100][100];
    int s,n;
    int suml=0,sumr=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
            if(i==j)
            suml+=a[i][j];
            if((i+j)==n-1)
            sumr+=a[i][j];
        }
    }
    s=abs(sumr-suml);
    printf("%d",s);
    return 0;    
}
