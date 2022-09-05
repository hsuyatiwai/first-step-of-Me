// Hsu Yati Wai    ass-3
//1.9.2022
// array function pointer

# include"stdio.h"

#define SIZE 6

int listOfStudent[SIZE],*total,*updateStudent,grade;
char update;


int upNumber,upType;
int totalFun(int* a,int* b);
int updateFun(int* a,int* b);
int main(){



    printf_s("Welcome TO Our School .");

    printf_s("\nEnter Grade:");
    scanf_s("%d",&grade);

    printf_s("\n How many students and teachers have your grade :");

    printf_s("\nEnter Boys:");
    scanf_s("%d",&listOfStudent[0]);

    printf_s("Enter Girls:");
    scanf_s("%d",&listOfStudent[1]);

    printf_s("Enter Male teachers:");
    scanf_s("%d",&listOfStudent[3]);

    printf_s("Enter Female teachers:");
    scanf_s("%d",&listOfStudent[4]);

    //listOfStudent[2]=totalFun(&listOfStudent[0],&listOfStudent[1]);
   // int * c=&listOfStudent[2];
   // printf("%d",*c);


    listOfStudent[2]=totalFun(&listOfStudent[0],&listOfStudent[1]);
    listOfStudent[5]=totalFun(&listOfStudent[3],&listOfStudent[4]);

    printf_s("In grade %d,Boys=%d , Girls=%d , Total Students=%d",grade,listOfStudent[0],listOfStudent[1],listOfStudent[2]);
    printf_s("\nIn grade %d,Male teachers=%d ,Female Teachers=%d , Total teachers=%d",grade,listOfStudent[3],listOfStudent[4],listOfStudent[5]);


    while(grade<=12){

        printf_s("\nDo you want to update? Yes for r and No for n: ");
        scanf_s(" %c",&update);

        if(update=='n'||update=='N'){

        break;

        }else if(update=='y'||update=='Y'){

            printf("Which one do you update:");
            printf_s("\nBoys for 1, Girls for 2, Male teacher for 4,Female teachers for 5: ");
            scanf_s("%d",&upType);
            printf_s("Enter numbers of update student: ");
            scanf_s("%d",&upNumber);

            upType-=1;

        listOfStudent[upType]=updateFun(&listOfStudent[upType],&upNumber);


    }

    listOfStudent[2]=totalFun(&listOfStudent[0],&listOfStudent[1]);
    listOfStudent[5]=totalFun(&listOfStudent[3],&listOfStudent[4]);


    printf_s("In grade %d,Boys=%d , Girls=%d , Total Students=%d",grade,listOfStudent[0],listOfStudent[1],listOfStudent[2]);
    printf_s("\nIn grade %d,Male teachers=%d ,Female Teachers=%d , Total teachers=%d",grade,listOfStudent[3],listOfStudent[4],listOfStudent[5]);

}


_getch();

return 0;
}



int totalFun(int* a,int* b){


    total=*a+*b;

return total;

}

int updateFun(int* a,int* b){

        a=*b;

return a;
}
