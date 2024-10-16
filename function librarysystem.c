//library system using functions
#include<stdio.h>

int fine(int daysoverdue, int finerate){//calculates the fine
    int finecharged=daysoverdue*finerate;
    
    return finecharged;
}

int main(){
    int duedate,returndate,finerate,fineamount;
    char bookid[20] ={};
    
    printf("Enter bookID, Due Date and Return Date ");
    scanf("%s%d%d",&bookid ,&duedate, &returndate);
    
    int daysoverdue=returndate-duedate;
    
    if(daysoverdue>0 && daysoverdue<=7){//checks no of days overdue
        finerate= 20;
         fineamount= fine(daysoverdue, finerate);
    }
    else if(daysoverdue<=14 && daysoverdue>7 ){//checks no of days overdue
        finerate=50;
        fineamount= fine(daysoverdue, finerate);
    }
    else if(daysoverdue>14){//checks no of days overdue
        finerate=100;
        fineamount= fine(daysoverdue, finerate);
    }
    else{//if the book is not overdue
        finerate=0;
        fineamount=fine(daysoverdue, finerate);
    }
    
    printf("The bookID is %s\nThe due date was %d\nThe return date is %d\nThe days overdue are %d\nThe finerate is %d\nThe fine amount is %d",bookid,duedate,returndate,daysoverdue,finerate,fineamount);
    
    return 0;
}