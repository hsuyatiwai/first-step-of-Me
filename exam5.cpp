//Hsu Yati Wai
//24 September 2022
//26 September 2022

#include "iostream"
using namespace std;
# define SIZES 50

class MyClass {
  public:

    int id[SIZES];
    string userName[SIZES];
    int password[SIZES];
    int amount[SIZES];
    int age[SIZES];
    string location[SIZES];
};

void showFun();
void update();
void addFun();
void findFun();
int SearchNum(int data[],int searchNum,int low,int high);
void searchString(string data[],string sString);
int forUpdateSearch(int data[],int searchNum);
int forUpSearchString(string data[],string searchStr);


MyClass myFile;


int insertNum,counti,times;
int id;
string userName;
int password;
int amount;
int age;
string location;


int main(){
    string choose,choice;

    addFun();

    do{

        cout<<"Find or Update or Add or Show";
        cin>>choose;

        if(choose=="find" || choose=="Find" || choose=="FIND"){
            findFun();
        }
        if(choose=="update" || choose=="Update" || choose=="UPDATE"){
           update();
        }
        if(choose=="add" || choose=="Add" || choose=="ADD"){
            addFun();
        }
        if(choose=="show" || choose=="Show" || choose=="SHOW"){
            showFun();
        }
       // {
        //    cout<<"Data Worng !!";
        //}

        cout<<"Do you again that:";
        cin>>choice;


    } while(choice=="yes" || choice=="Yes"||choice=="YES");

//    showFun();



  return 0;

}

void addFun(){
    //counti;

    cout<<"How many data are you insert?"<<endl;
    cin>>insertNum;
    cout<<"Enter id: User Name: Password: Amount: age: Location."<<endl;

    for(int i=0;i<insertNum;i++){

    cin>>id;
    myFile.id[i+counti]=id;

    cin>>userName;
    myFile.userName[i+counti]=userName;

    cin>>password;
    myFile.password[i+counti]=password;

    cin>>amount;
    myFile.amount[i+counti]=amount;

    cin>>age;
    myFile.age[i+counti]=age;

    cin>>location;
    myFile.location[i+counti]=location;


    }

   /* for(int i=0;i<insertNum+counti;i++){

    cout<<myFile.id[i]<<"  "<<myFile.userName[i]<<"  "<<myFile.password[i]<<"  "<<myFile.amount[i]<<"  "
     <<myFile.age[i]<<"  "<<myFile.location[i]<<endl;
   }

*/
     showFun();



}


void showFun(){

    //counti+=insertNum;

    cout<<counti<<endl;

    for(int i=0;i<counti+insertNum;i++){

    cout<<myFile.id[i]<<"  "<<myFile.userName[i]<<"  "<<myFile.password[i]<<"  "<<myFile.amount[i]<<"  "
     <<myFile.age[i]<<"  "<<myFile.location[i]<<endl;



   }




}

void findFun(){


    string toFind;



    cout<<"Enter the title you want to find:";
    cin>>toFind;

    if(toFind=="id"|| toFind=="password" || toFind=="age"|| toFind=="amount" ){

         int eNumber,result;
         cout<<"Enter the "<<toFind<<" you want to find:";
         cin>>eNumber;

         if(toFind=="age"){
            result=SearchNum(myFile.age,eNumber,0,insertNum-1);

         }else if(toFind=="password" ){
            result=SearchNum(myFile.password,eNumber,0,insertNum-1);
         }else if(toFind=="id" ){
            result=SearchNum(myFile.id,eNumber,0,insertNum-1);
         }else if(toFind=="amount" ){
            result=SearchNum(myFile.amount,eNumber,0,insertNum-1);
         }


          if(result == -1){
            cout<<"data not found.";
          }
          else{

              cout<<myFile.id[result]<<"  "<<myFile.userName[result]<<"  "<<myFile.password[result]<<"  "<<myFile.amount[result]<<"  "
                <<myFile.age[result]<<"  "<<myFile.location[result]<<endl;

          }



    }else
    {
        string inData;
        cout<<"Enter the "<<toFind<<" you want to find:";
        cin>>inData;
        //cout<<inData;

        if(toFind=="userName"||toFind=="username"){

         searchString(myFile.userName,inData1);

        }
        else{

         searchString(myFile.location,inData);

        }
 }
}


int SearchNum(int data[],int searchNum,int low,int high){



    while(low<=high){

     int mid=low+(high-low)/2;

       if(data[mid]==searchNum){

            return mid;
       }
       else if(data[mid]<searchNum){

            low=mid+1;

       }
       else if(data[mid]>searchNum){

            high=mid-1;

       }

       // times++;
       // cout<<times;
    }


    return -1;



}
void searchString(string data[],string sString){



    for(int f=0;f<insertNum;f++){

        if(data[f]==sString)


        cout<<myFile.id[f]<<"  "<<myFile.userName[f]<<"  "<<myFile.password[f]<<"  "<<myFile.amount[f]<<"  "
        <<myFile.age[f]<<"  "<<myFile.location[f]<<endl;
    }
}


void  update(){

    string upName,upTitle,upObjStr;
    int upId,upObjNum;

    cout<<"Enter the Id and Name you want to Update:";
    cin>>upId;
    cin>>upName;
    cout<<"Enter the title you want to update";
    cin>>upTitle;

     if(upTitle=="id"|| upTitle=="password" || upTitle=="age"|| upTitle=="amount" ){

        cout<<"Enter the value you want to update";
        cin>>upObjNum;

         if(upTitle=="age"){
             times=forUpdateSearch(myFile.age,upObjNum);
             cout<<times;
             myFile.age[times]=upObjNum;
         }else if(upTitle=="password" ){
            times=forUpdateSearch(myFile.password,upObjNum);
            myFile.password[times]=upObjNum;
         }else if(upTitle=="id" ){
            times=forUpdateSearch(myFile.id,upObjNum);
            myFile.id[times]=upObjNum;
         }else if(upTitle=="amount" ){
            times=forUpdateSearch(myFile.amount,upObjNum);
            myFile.amount[times]=upObjNum;
         }




     }else{

         cout<<"Enter the value you want to update";
         cin>>upObjStr;
        // times=forUpdateSearch(myFile.location,0,upObjStr);

        if(upTitle=="userName"){

          times=forUpSearchString(myFile.userName,upObjStr);
          myFile.userName[times]=upObjStr;

        }
        else{
           times=forUpSearchString(myFile.location,upObjStr);
           myFile.location[times]=upObjStr;

        }




     }


}

int forUpdateSearch(int data[],int searchNum){


      for(int d=0;d<insertNum;d++){

            if(data[d]==searchNum){
                    //cout<<d;
                return d;
        }

    }

}

int forUpSearchString(string data[],string searchStr){


      for(int d=0;d<insertNum;d++){

            if(data[d]==searchStr){

                return d;
        }

    }

}
/*

1001 mama 1234 1000 10 mu
1002 nini 2289 2000 12 ni
1003 mimi 2314 2300 12 bi

*/
