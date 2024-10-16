#include <stdio.h>

int main(){
    
    int a,b,c, marks[2][2][3]={{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    
    for(a=0;a<2;a++){//matrices
        for (b=0;b<2;b++){//row
            for (c=0;c<3;c++){//column
                printf("Marks [%d][%d][%d] =%d\n",a,b,c,marks [a][b][c]);
            }
        }
    }
        
    
    return 0;
}