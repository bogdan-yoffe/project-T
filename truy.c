#include <stdio.h>

int main() {
    int i;
    int name[3];    
    int values[3];  
    float avereg;
    int mone=0;
   
    for (i = 0; i < 3; i++) {
        name[i] = i + 1; 
        printf("(%d) enter number: ", name[i]);
        scanf("%d", &values[i]); 
        mone=mone+values[i];
    }
    avereg = (float)mone/3;
    printf("the avereg is :%.2f",avereg);

    
}
