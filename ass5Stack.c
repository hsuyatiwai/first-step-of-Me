//stack using array

#include"stdio.h"
#include"stdlib.h"

#define MAXSTACK 10
int count=0;

struct stack{

    int data[MAXSTACK];
    int top;

};

typedef struct stack st;


void createEmptyStack(st* myStack){

    myStack->top=-1;


}



int isStackIsFull(st* myStack){

    if(myStack->top == MAXSTACK-1){

        return 1;
    }else{

        return 0;

    }

}



void pushToStack(st* myStack,int value){

    if(isStackIsFull(myStack)){
        printf("Stack is Full.");
    }else{

        myStack->top++;      //because top is -1 ,so we first add 1 to become index number 0
        myStack->data[myStack->top]=value;


    }
count++;
//printf("\n%d ",count);
}



int isStackIsEmpty(st* myStack){

    if(myStack->top==-1){

        return 1;

    }else{

        return 0;
    }
}




void  popToStack(st* myStack){

    if(isStackIsEmpty(myStack)){
        printf("Stack is Empty.");
    }else{

     printf("Data in stack : %d \n",myStack->data[myStack->top]);
     myStack->top--;


    }
count--;

}



int main(){


   st* myStack=(st*) malloc(sizeof(st));

    createEmptyStack( myStack);

    pushToStack( myStack,10);
    pushToStack( myStack,11);
    pushToStack( myStack,12);
    pushToStack( myStack,13);
    pushToStack( myStack,14);
    pushToStack( myStack,15);
    pushToStack( myStack,16);

   while(isStackIsEmpty(myStack)!= 1){

    popToStack( myStack);

   }


return 0;

}
