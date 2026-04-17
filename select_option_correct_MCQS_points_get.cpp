
/* Made on code blocks  IDE
    This is MCQS Game with Score +1
    before start you have choice Press 1
    then Enter your name ,Age
    you get total score depend your option choose you get points or loose points
*/

#include <iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;
int main(){

    string na;
    int age, choicing, choice  , points = 0;
    cout <<"\t\t\t MCQS test "<<endl;

   cout<<"Are you Ready ?"<<endl;
   cout<<"(yes/no)"<<endl;
   cout <<"Enter Choice 1 or  2 ..."<<endl;
   cin >> choice ;

   if(choice == 1){
     cout<<"\t\t\tContinue this Game !!" <<endl;

     Sleep(3000);
     system("cls");


   cout<<"\t\t\t Enter Your Personal Details"<<endl;
   cout<< "Enter Name"<<endl;
   cin >> na;
   cout<< "Enter Age"<<endl;
   cin >> age;

   system("cls");

   cout << " " <<" Your name : "<< " " << na<<endl;

   cout << " " <<" Your Age : "<< " " << age<<endl;


   cout<<"\t\t\t\t if value you guess is higher you get points"<<endl;
   cout<<"\t\t\t\t\t\t  Every RIGHT guess have 1 Points "<<endl;


     cout << "Which Country is Clean"<<endl;
     cout<<"1. Japan " <<endl << "2. India "<<endl << "3. Afganistan"<<endl;
     cin >>choicing;

         if( choicing == 1 ){
                cout << "You Get Reward" <<endl;
               points = points + 1;
                }else{
                 cout<< "lose points"<<endl;
                }
      cout <<"\t\t\t waiting for next choice "<<endl;
          Sleep(2000);

         system("cls");

     cout << "How many letters in cat"<<endl;
     cout<<"1. one " <<endl << "  2. five "<<endl << " 3. three"<<endl;
     cin >>choicing;
         if( choicing == 3 ){
                cout << "You Get Reward" <<endl;
           points = points + 1;
                }else{
                 cout<< "lose points"<<endl;
                }
          Sleep(2000);

         system("cls");

     cout << "Which fruit fall over on the Newton head"<<endl;
     cout<<"1. Mango " <<endl << "  2. Apple "<<endl << " 3. Watermelon"<<endl;
     cin >>choicing;

         if( choicing == 2 ){
                cout << "You Get Reward" <<endl;
           points = points + 1;
                }else{
                 cout<< "lose points"<<endl;
                }


       cout<<"Reward : " << points;

  }else if(choice == 2){
        system("cls");
      cout<<"Game Terminate!!"<<endl;

   }

return 0;
}




