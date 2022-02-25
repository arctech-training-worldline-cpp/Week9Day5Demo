/* C++ Date and Time - Example of C++ Date and Time
 * This program demonstrates the working of date
 * and time in C++ program */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
   
   char choice, ans;

   time_t now = time(0);
   tm *ltm = localtime(&now);

   do
   {
      cout<<"1. Time\n";
      cout<<"2. Date\n";
      cout<<"3. Month\n";
      cout<<"4. Year\n";
      cout<<"5. All\n";
      cout<<"6. Exit\n";
      cout<<"\nEnter your choice (1-6) ";
      cin>>choice;
      
      switch(choice)
      {
         case '1':
             cout<<"The current time is ";            
             cout<<ltm->tm_hour<<":";
             cout<<ltm->tm_min<<":";
             cout<<ltm->tm_sec<<"\n";
             break;
         case '2':
            cout<<"Today's date is ";
            cout<<ltm->tm_mday<<"\n";
            break;
         case '3':
            cout<<"It's ";
            cout<<1+ltm->tm_mon<<"th month\n";
            break;
         case '4':
            cout<<"This is ";
            cout<<1900+ltm->tm_year<<"\n";
            break;
         case '5':
            cout<<"Time: "<<1+ltm->tm_hour<<":";
            cout<<1+ltm->tm_min<<":";
            cout<<1+ltm->tm_sec<<"\n";
            cout<<"Date: "<<ltm->tm_mday<<"\n";
            cout<<"Month: "<<1+ltm->tm_mon<<"\n";
            cout<<"Year: "<<1900+ltm->tm_year<<"\n";
            break;
         case '6':
            exit(1);
         default:
            cout<<"Wrong choice..!!..Press a key to exit..\n";
            getch();
            exit(2);
      }
      cout<<"\nWant to check more ? (y/n).. ";
      cin>>ans;
      cout<<"\n";
   }while(ans=='y' || ans=='Y');

   getch();
   return 0;
}