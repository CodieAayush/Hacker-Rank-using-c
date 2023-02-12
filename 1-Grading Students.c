#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int grade; 
        scanf("%d",&grade);
        if(grade<38)
        {
            printf("%d\n",grade);
            continue;
        }
        if((grade+2)%5==0||(grade+1)%5==0)
            grade=((grade+2)%5==0)?grade+2:grade+1;
        printf("%d\n",grade);
        
        
    }
    return 0;
}
