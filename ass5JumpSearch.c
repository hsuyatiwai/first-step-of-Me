//Hsu Yati Wai
//12/29/2022
//jump search with binary search

#include"stdio.h"

int jumpSearch(int arr[],int key,int size){

    int previous=0;
    int mid;

    int differentStep=(5-(size%5))+(size%5);//get 5
    int step=differentStep;
  //  printf("step :%d \n",differentStep);



    while(arr[min(step,size)-1]<key){


        previous=step;
                 //  printf("previous :%d \n",previous);

        step+=differentStep;
                   //   printf("step :%d \n",step);


        if(previous >= size){  //if previous is greater than size ,out

            return -1;
        }

    }

    while(previous<size){

        mid=(previous+step)/2;

         // printf("previous :%d \n",previous);
         // printf("step :%d \n",step);
         // printf("mid :%d \n",mid);


        if(arr[mid]==key){

            return mid;

        }else if(arr[mid]<key){

           previous=mid+1;
              // printf("previous :%d \n",previous);

        }else if(arr[mid]>key){

            step=mid-1;
                 //  printf("step :%d \n",step);
        }
    }



}
int min(int step,int size){

    if(step < size){
        return step;
    }else{
        return size;
    }
}

int main(){

  int arr1[]={0,2,3,4,5,7,9,11,13,16,18,23,34,45,103,123,145,167,189,199,200,213,345,456,555,565,651,677,678};
  int searchNumber=555;
  int size=sizeof(arr1)/sizeof(arr1[0]);
          //printf("size::%d \n",size);;

   int index=jumpSearch( arr1,searchNumber,size);

   if(index == -1){

      printf("We're not Found");

   }else{

      printf("We found data %d in the index %d. \n",searchNumber,index);

   }
return 0;
}
