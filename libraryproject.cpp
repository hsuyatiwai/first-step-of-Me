 // 30 September 2022
//  2  October 2022
// Hsu Yati Wai
//Library Management System




#include"iostream"
using namespace std;

class Library{
public:
    string userName[100],password[100],bookName[200],bookId[200];
    int userId[100],fund;
    int locate=0,Id=1000,startDate[200],endDate[200];

    Library(){

        cout<<"Welcome to Our Books Service..";

    }

    int login();
    int mainMenu();
    int fundMoney(int i);
    int userRegister();
    void showUserFun();
    int borrowBook();
    int returnBooksFun();

};


int Library::mainMenu(){

     int option,i,rnumBook,bnumBook;
     string books;


    while(true){
        cout<<endl<<"Enter 1 for Register:"<<endl<<"Enter 2 for Login"<<endl<<"Enter 3 for Exit:";
        cin>>option;

        if(option == 1){

            //cout<<"register";
            userRegister();

        }else if(option == 2){

            //cout<<"login";
           int result= login();

           if(result != -1){
                cout<<"User Id"<<"    "<<" Name "<<endl;
                cout<<" "<<userId[result]<<"    "<<userName[result]<<endl;


                cout<<"Do you want to borrow books or return books.";
                cin>>books;


                if(books == "borrow" || books == "Borrow" ){

                    bnumBook=borrowBook();

                    cout<<"  User Id: "<<userId[result]<<endl<<"  Name: "<<userName[result]<<endl;
                    cout<<"You borrow "<<bnumBook<<" books."<<endl;

                    for( i=0;i<bnumBook;i++){

                        cout<<" "<<bookId[i]<<"       "<<bookName[i]<<"       "<<startDate[i]<<endl;
                    }

                }else if(books == "return" || books == "Return"){

                    rnumBook= returnBooksFun();

                    cout<<"  User Id: "<<userId[result]<<endl<<"  Name: "<<userName[result]<<endl;
                    cout<<"You return "<<rnumBook<<" books."<<endl;



                  /*  for( i=0;i<rnumBook;i++){

                        cout<<" "<<bookId[i]<<"       "<<bookName[i]<<"       "<<startDate[i]<<"       "<<endDate[i]<<endl;
                        }
*/
                   if(bnumBook-rnumBook != -1 ){

                    bnumBook-=rnumBook;
                    cout<<"You have "<<bnumBook<<" book(s) left."<<endl;
                    bnumBook--;
                   }



                }

           }else{
                 cout<<"Something Wrong!! Please Try Again.."<<endl;

           }


        }else{

            cout<<"See You Again.";
            break;
        }



    }


}


int Library::userRegister(){

    string eUsername;
    string epassword,epassword2;

    cout<<"Enter User Name:";
    cin>>eUsername;
    cout<<"Enter Password:";
    cin>>epassword;
    cout<<"Please confirm the password:";
    cin>>epassword2;

    if(epassword2 == epassword){

        Id++;
        userId[locate]=Id;
        userName[locate]=eUsername;
        password[locate]=epassword;

        cout<<"Login Success."<<endl;
        locate++;
        showUserFun();
    }else{

        cout<<"Something Wrong!! Please Try Again.."<<endl;
      //  continue;

    }




}

void Library::showUserFun(){

    cout<<"User Id"<<"    "<<" Name "<<endl;

    for(int i=0;i<locate;i++){

        cout<<" "<<userId[i]<<"       "<<userName[i]<<endl;
    }




}


int Library::login(){

    string lUserName,lPassword;
    int uId;


    cout<<"Enter UserName:";
    cin>>lUserName;
    cout<<"Enter Password:";
    cin>>lPassword;
    cout<<"Enter user Id:";
    cin>>uId;

    for(int a=0;a<locate;a++){

        if(userName[a] == lUserName && password[a] == lPassword && userId[a] == uId){
           // cout<<a;
           return a;

        }
    }
return -1;

}

int Library::borrowBook(){

    string bBook,bId;
    int bDate,numBooks;

    cout<<"Enter numbers of books:";
    cin>>numBooks;
    cout<<"Enter borrow Date :";
    cin>>bDate;

    for(int r=0;r<numBooks;r++){

        cout<<"Enter the book you want to borrow:";
        cin>>bBook;
        cout<<"Enter the Book Id(It in the book's back.):";
        cin>>bId;


        bookId[r]=bId;
        bookName[r]=bBook;
        startDate[r]=bDate;


   }

return numBooks;
}


int Library::returnBooksFun(){

        int rDate,numBooks, sDate;
        int x;
        string rBookId;

        cout<<"Enter numbers of books:";
        cin>>numBooks;
        cout<<"Enter the date you return the books.";
        cin>>rDate;

        for( x=0;x<numBooks;x++){

             cout<<"Enter Book Id You Borrow:";
             cin>>rBookId;

            if(bookId[x] == rBookId ){

                  endDate[x]=rDate;

                  cout<<" "<<bookId[x]<<"       "<<bookName[x]<<"       "<<startDate[x]<<"       "<<endDate[x]<<endl;



                 }


                sDate=startDate[x];




            }

            if(rDate>sDate){

                fund=rDate-sDate;

            }else{

                fund=sDate-rDate;

                fund=(30-fund)+rDate;

            }



                      if(fund>7){

                      cout<<"The numbers of Days:"<<fund<<endl;
                      cout<<"You expire the date.So you may pay the fund."<<endl;
                      cout<<"You pay "<<(fund-7)*200<<" Kyats."<<endl;

        }

return numBooks;
}



 // 30 September 2022
//  2  October 2022
// Hsu Yati Wai
//Library Management System




#include"iostream"
using namespace std;

class Library{
public:
    string userName[100],password[100],bookName[200],bookId[200];
    int userId[100],fund;
    int locate=0,Id=1000,startDate[200],endDate[200];

    Library(){

        cout<<"Welcome to Our Books Service..";

    }

    int login();
    int mainMenu();
    int fundMoney(int i);
    int userRegister();
    void showUserFun();
    int borrowBook();
    int returnBooksFun();

};


int Library::mainMenu(){

     int option,i,rnumBook,bnumBook;
     string books;


    while(true){
        cout<<endl<<"Enter 1 for Register:"<<endl<<"Enter 2 for Login"<<endl<<"Enter 3 for Exit:";
        cin>>option;

        if(option == 1){

            //cout<<"register";
            userRegister();

        }else if(option == 2){

            //cout<<"login";
           int result= login();

           if(result != -1){
                cout<<"User Id"<<"    "<<" Name "<<endl;
                cout<<" "<<userId[result]<<"    "<<userName[result]<<endl;


                cout<<"Do you want to borrow books or return books.";
                cin>>books;


                if(books == "borrow" || books == "Borrow" ){

                    bnumBook=borrowBook();

                    cout<<"  User Id: "<<userId[result]<<endl<<"  Name: "<<userName[result]<<endl;
                    cout<<"You borrow "<<bnumBook<<" books."<<endl;

                    for( i=0;i<bnumBook;i++){

                        cout<<" "<<bookId[i]<<"       "<<bookName[i]<<"       "<<startDate[i]<<endl;
                    }

                }else if(books == "return" || books == "Return"){

                    rnumBook= returnBooksFun();

                    cout<<"  User Id: "<<userId[result]<<endl<<"  Name: "<<userName[result]<<endl;
                    cout<<"You return "<<rnumBook<<" books."<<endl;



                  /*  for( i=0;i<rnumBook;i++){

                        cout<<" "<<bookId[i]<<"       "<<bookName[i]<<"       "<<startDate[i]<<"       "<<endDate[i]<<endl;
                        }
*/
                   if(bnumBook-rnumBook != -1 ){

                    bnumBook-=rnumBook;
                    cout<<"You have "<<bnumBook<<" book(s) left."<<endl;
                    bnumBook--;
                   }



                }

           }else{
                 cout<<"Something Wrong!! Please Try Again.."<<endl;

           }


        }else{

            cout<<"See You Again.";
            break;
        }



    }


}


int Library::userRegister(){

    string eUsername;
    string epassword,epassword2;

    cout<<"Enter User Name:";
    cin>>eUsername;
    cout<<"Enter Password:";
    cin>>epassword;
    cout<<"Please confirm the password:";
    cin>>epassword2;

    if(epassword2 == epassword){

        Id++;
        userId[locate]=Id;
        userName[locate]=eUsername;
        password[locate]=epassword;

        cout<<"Login Success."<<endl;
        locate++;
        showUserFun();
    }else{

        cout<<"Something Wrong!! Please Try Again.."<<endl;
      //  continue;

    }




}

void Library::showUserFun(){

    cout<<"User Id"<<"    "<<" Name "<<endl;

    for(int i=0;i<locate;i++){

        cout<<" "<<userId[i]<<"       "<<userName[i]<<endl;
    }




}


int Library::login(){

    string lUserName,lPassword;
    int uId;


    cout<<"Enter UserName:";
    cin>>lUserName;
    cout<<"Enter Password:";
    cin>>lPassword;
    cout<<"Enter user Id:";
    cin>>uId;

    for(int a=0;a<locate;a++){

        if(userName[a] == lUserName && password[a] == lPassword && userId[a] == uId){
           // cout<<a;
           return a;

        }
    }
return -1;

}

int Library::borrowBook(){

    string bBook,bId;
    int bDate,numBooks;

    cout<<"Enter numbers of books:";
    cin>>numBooks;
    cout<<"Enter borrow Date :";
    cin>>bDate;

    for(int r=0;r<numBooks;r++){

        cout<<"Enter the book you want to borrow:";
        cin>>bBook;
        cout<<"Enter the Book Id(It in the book's back.):";
        cin>>bId;


        bookId[r]=bId;
        bookName[r]=bBook;
        startDate[r]=bDate;


   }

return numBooks;
}


int Library::returnBooksFun(){

        int rDate,numBooks, sDate;
        int x;
        string rBookId;

        cout<<"Enter numbers of books:";
        cin>>numBooks;
        cout<<"Enter the date you return the books.";
        cin>>rDate;

        for( x=0;x<numBooks;x++){

             cout<<"Enter Book Id You Borrow:";
             cin>>rBookId;

            if(bookId[x] == rBookId ){

                  endDate[x]=rDate;

                  cout<<" "<<bookId[x]<<"       "<<bookName[x]<<"       "<<startDate[x]<<"       "<<endDate[x]<<endl;



                 }


                sDate=startDate[x];




            }

            if(rDate>sDate){

                fund=rDate-sDate;

            }else{

               // fund=sDate-rDate;

                fund=(30-sDate)+rDate;

            }



                      if(fund>7){

                      cout<<"The numbers of Days:"<<fund<<endl;
                      cout<<"You expire the date.So you may pay the fund."<<endl;
                      cout<<"You pay "<<(fund-7)*200<<" Kyats."<<endl;

        }

return numBooks;
}






int main(){

    Library members;
    members.mainMenu();



return 0;
}



int main(){

    Library members;
    members.mainMenu();



return 0;
}
