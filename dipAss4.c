#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    FILE *fptr;
   char a;
    int i=0;int count=0;
    char arrFile[6000];
    fptr=fopen("forass4.txt","r");

    if(fptr == NULL){

        printf("This file does not open.");
    }else{

          // if(!((a>=48 && a<=57) || (a>=65 && a<=90 ) ||(a>=97 && a<=122)));


        while(!feof(fptr)){

            fscanf(fptr,"%c",&arrFile);

           // printf("%s",arrFile);



        }
         fclose(fptr);


    }
        //  printf("%d",i-1);




        char search1[]="winhtut";
        char search2[]="winhtutwinhtutwinhtut";
       // printf("%d",sizeof(search1));

            bool found=false;i=0;


          //  for(int j=0;j<=sizeof(search1);j++){


                 while(search1[i] !='\0' ||search2[i] !='\0'){

                    if(search1[i]==search2[i]){

                        found=true;
                        count++;

                    }
                    else{
                        found=false;
                          break;

                   // }
                }

                i++;
           //     printf("\n %d \n",i);

            }

            if(found == true){

                //count++;
                    }
printf("\n %d \n",count);





 /*     for (int a=0;a<sizeof(search1);a++){

        for (int j=0;j<i;j++){

           if(search1[a]==arrFile[j] && search1[a+a]==arrFile[j+a]){

            count++;
            printf("%c ",arrFile[j]);

           }



        }

  }
printf("\n %d \n",count/sizeof(search1));







*/





return 0;
}
