#include"stdio.h"



void logo();
int totalamount(int cost,int number);
int exchange(int m,int t);
int main(){


    printf(".... Triangle Automatic Seller Machine.....\n");


    // for triangle
            logo();



    // for value

    int choose=0;
    int money=0,total=0,numbers=0;
    int cost=0;
    char check=NULL;
    int total1=0;
    int anotherMoney=0;
    char paybill=NULL;

    while(choose>=0){

     do{

       total1+=total;
       // printf(" total %d\n",total1);
       total=0;


    printf(" 1 is for coffee\n 2 is for coke \n 3 is for energy drink \n 4 is for soda \n 5 is for water  ");
    scanf("%d",&choose);



    if(choose<6){


    printf("How many you want?  ");
    scanf("%d",&numbers);



    switch(choose){

        case 1:
            printf("You choose coffee.It costs 1500 for 1.");
            cost=1500;
            total=totalamount(cost,numbers);
            printf("\nTotal amount = %d \n",total);
            break;

        case 2:
             printf("You choose coke.It costs 800 for 1.");
             cost=800;
             total=totalamount(cost,numbers);
             printf("\nTotal amount = %d \n",total);

            break;

          case 3:
             printf("You choose energy drink.It costs 1000 for 1.");
             cost=1000;
             total=totalamount(cost,numbers);
             printf("\nTotal amount = %d \n",total);
             break;

          case 4:
             printf("You choose soda.It costs 1500 for 1.");
             cost=1500;
             total=totalamount(cost,numbers);
             printf("\nTotal amount = %d \n",total);
             break;

          case 5:
             printf("You choose water.It costs 500 for 1.");
             cost=500;
             total=totalamount(cost,numbers);
             printf("\nTotal amount = %d",total);
             break;

    }

    }else if(choose>5){


    printf("We have only 5.");


        }




    printf("\n If You want another ,you can press y for continue or break for another else.");
    scanf(" %c",&check);

    if(check!='y'){

    break;
    }

}while(check=='y');

  total1+=total;
        printf(" total %d\n",total1);


     printf("\nEnter money.  ");
        scanf(" %d",&money);

        if(money>=total1){

             printf("Your bill is %d .It's cost %d .",money,total1);
             printf("\nThe exchange is %d\n",exchange( money, total1));
             break;

        }else{

             printf("Your bill is not enough. ");
             printf("Do you want to enter another bill(e) or get back your bill(r).");
             scanf(" %c",&paybill);


                if(paybill=='e'){

                    printf("\nPlease enter more bill( %d or more than.).",total1-money);
                    scanf("%d",&anotherMoney);

                        money+=anotherMoney;

                        if(money>=total1){

                            printf("Your bill is %d .It's cost %d .",money,total1);
                            printf("\nThe exchange is %d\n",exchange( money, total1));
                            break;

                        }else{

                            printf("Get back your bill %d.",money);break;

                        }

               }else if(paybill=='r'){

                printf("Get back your bill %d.",money);break;


             }else{

                 printf("Get back your bill %d.",money);break;

             }



            }

        }












return 0;


}




//for triangle

 void logo(){



 for(int i=0;i<3;i++){

            for(int a=0;a<14+(i+2);a++){

              printf(" ");

           }
           for(int a=0;a<11-(i*2);a++){

              printf("*");

           }
           printf("\n");
    }




    for(int i=0;i<3;i++){

            for(int ii=0;ii<20-(i+2);ii++)     {

               printf(" ");

           }

           for(int a=0;a<(i*2)+7;a++){

              printf("*");

           }

        printf("\n");
    }




}

//total


int totalamount(int cost,int number){

   int result=cost*number;


   return result;
}


//exchange
int exchange(int m,int t){

    return m-t;


}



