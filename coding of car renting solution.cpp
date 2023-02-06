#include <iostream>

using namespace std;

 struct Cars {

    string mark [10] = {"Honda","BMW","Marceeds","Audi","Seat","Skoda","Volks","Toyota","Opel","Kia"};

    string model [10]= {"2010MD","2012AS","2013DS","2017LA","2018OW","2005Ps","2008PW","2010QW","2014SA","2016DF"};

    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey","white"};

    string maxs_peed [10]={"100 Km/h ","120 Km/h","120 Km/h","150 Km/h","130 Km/h","160 Km/h","180 Km/h","190 Km/h","170 Km/h","120 Km/h"};

    int price [ 10 ] ={100,200,300,500,200,250,400,600,900,200} ;

    int date [10] = {2010,2012,2013,2017,2018,2005,2008,2010,2014,2016};



   };

   struct Lessee {

   string Name [10];
   string Natio_ID [10] ;
   int payment_acc [ 10] ;
   };

   //Declaring struct
 Cars car ;
 Lessee lessee ;

 //First output
   void Minu ()
 {
   int num=1;

 for(int i=0 ;i<10;++i)
 {
    cout<<num<<" - "<<car.mark[i]<<endl;
    num++ ;
 }

 }

 //Second output
 void Details (int theChoice)
  {
     cout<<car.mark[theChoice-1]<<endl;
     cout<<"Model : "<<car.model[theChoice-1]<<endl;
     cout<<"Color : "<<car.color[theChoice-1]<<endl;
     cout<<"Maximum Speed : "<<car.maxs_peed[theChoice-1]<<endl;
     cout<<"Price : "<<car.price[theChoice-1]<<"K"<<endl;


  }
   //check lessee credit

   void check (int j )
  {
      if(lessee.payment_acc[j]  >= car.price[j])
           cout<<"process has been done successfully " <<endl;
           else
              cout<<" Not Available " <<endl;

  }
 //User Input
  void user_input (int theChoice)
   {
        int j=theChoice-1 ;

       cout<<"Enter Your Name : ";
       cin>>lessee.Name[j];
       cout<<"Enter Your National ID : ";
       cin>>lessee.Natio_ID[j] ;
       cout<<"Enter Your Credit : " ;
       cin>>lessee.payment_acc[j] ;


     check( j ) ;
   }


int main()
{


         string decide ="yes" ;

     cout<<"Welcome to Our Company ,Choose from the menu : "<<endl;
     while(decide!="exit")
     {
         Minu();
     cout<<"Enter Your Choice "<<endl;
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"Do you want to rent  this Car (yes /no /exit ) ? "<<endl;
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"Do you want to continue ? " <<endl;
        cin>>decide;
        if (decide=="no") break ;

     }

   else {
      if(decide=="no")
      {
          continue ;
      }
     else if  (decide=="exit")
     {

         break ;
     }

   }
     }


    return 0;
}
