//library overdue books
#include<stdio.h>
int main(){
    int duedate,returndate,finerate,fineamount;
    char bookid[20] ={};
    
    printf("Enter bookID, Due Date and Return Date ");
    scanf("%s%d%d",&bookid ,&duedate, &returndate);
    
    int daysoverdue=returndate-duedate;
    
    if(daysoverdue>0 && daysoverdue<=7){
        finerate= 20;
         fineamount=daysoverdue*finerate;
    }
    else if(daysoverdue<=14 && daysoverdue>7 ){
        finerate=50;
        fineamount=daysoverdue*finerate;
    }
    else if(daysoverdue>14){
        finerate=100;
        fineamount=daysoverdue*finerate;
    }
    else{
        finerate=0;
        fineamount=0;
    }
    
    printf("The bookID is %s\nThe due date was %d\nThe return date is %d\nThe days overdue are %d\nThe finerate is %d\nThe fine amount is %d",bookid,duedate,returndate,daysoverdue,finerate,fineamount);
    
    return 0;
}