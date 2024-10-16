#include <stdio.h>

int main(){
    
    int a,b, marks[2][3]={{1,2,3},{4,5,6}};
    
    for(a=0;a<2;a++){
        for (b=0;b<3;b++){
            printf("Marks [%d][%d] =%d\n",a,b,marks [a][b]);
        }
    }
        
    
    return 0;
}