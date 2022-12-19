#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fptr;
   char a;
    int i=0;int count=0;
    char arrFile[100000];
    fptr=fopen("forass4.txt","r");

    if(fptr == NULL){

        printf("This file does not open.");
    }else{

          // if(!((a>=48 && a<=57) || (a>=65 && a<=90 ) ||(a>=97 && a<=122)));


        while(!feof(fptr)){

            fscanf(fptr,"%c",&arrFile[i]);

           // printf("%c",arr[i]);

            i++;


        }
         fclose(fptr);


    }
        //  printf("%d",i-1);




        char search1[]={'w','i','n','h','t','u','t'};
       // printf("%d",sizeof(search1));



    for(int j=0;j<sizeof(search1);j++){

             //   printf("size of search %d \n",sizeof(search1));

            for(int a=0;a<i;a++){



                if(search1[j]== arrFile[a] && search1[j+j] == arrFile[a+j]){

                       printf("%c ",arrFile[a]);

                      count++;

                 //  }

                }

            }
        }
printf("\n%d\n",count);
printf("%d",count/sizeof(search1));



return 0;
}
