#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int pnrdefault=0;

class domestic_booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];
    float doj;
    int choice,src,dest;
public:
    void d_pnr()
    {
        pnrdefault++;
        pnr=pnrdefault;
    }
    int j_detail()
    {
        cout << "\nEnter Date of Journey(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "1.Chennai \t2.Delhi \t3.Mumbai \t4.Banglore" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout << "2.IndiGo\t14:00\t\t17:05\t\tRs2200\t\tRefundable\n";
            cout << "3.Spice Jet\t19:00\t\t22:05\t\tRs1900\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout << "2.IndiGo\t14:00\t\t17:05\t\tRs2200\t\tRefundable\n";
            cout << "3.Spice Jet\t19:00\t\t22:05\t\tRs1900\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout << "2.IndiGo\t14:00\t\t17:05\t\tRs2200\t\tRefundable\n";
            cout << "3.Spice Jet\t19:00\t\t22:05\t\tRs1900\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout << "2.IndiGo\t14:00\t\t17:05\t\tRs2200\t\tRefundable\n";
            cout << "3.Spice Jet\t19:00\t\t22:05\t\tRs1900\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout << "2.IndiGo\t14:00\t\t17:05\t\tRs2200\t\tRefundable\n";
            cout << "3.Spice Jet\t19:00\t\t22:05\t\tRs1900\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Air India\t08:00\t\t11:05\t\tRs2000\t\tRefundable\n";
            cout << "2.IndiGo\t14:00\t\t17:05\t\tRs2200\t\tRefundable\n";
            cout << "3.Spice Jet\t19:00\t\t22:05\t\tRs1900\t\tRefundable\n";
        }
        else if(src==dest)
        {
            cout << "\nDestination provided is invalid.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight()
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Air India"<<endl;
                strcpy(f_d,"Air India");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "IndiGo"<<endl;
                strcpy(f_d,"IndiGo");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Spice Jet" << endl;
                strcpy(f_d,"Spice Jet");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class international_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    float doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        pnrdefault++;
        pnri=pnrdefault;
    }

    int j_detaili()
    {
        cout << "Enter Date of Journey(DDMMYY)." << " Please enter a valid date." << endl;;
        cin >> doji;
        cout << "1.London \t2.Chennai \t3.Dubai \t4.Singapore \t5.Japan " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination"<<endl;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates\t10:00\t\t14:05\t\t$250\t\tRefundable\n";
            cout << "2.Ryanair\t14:00\t\t18:05\t\t$215\t\tRefundable\n";
            cout << "3.Lufthansa\t18:00\t\t22:05\t\t$240\t\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates\t10:00\t\t14:05\t\t$255\t\tRefundable\n";
            cout << "2.Ryanair\t14:00\t\t18:05\t\t$213\t\tRefundable\n";
            cout << "3.Lufthansa\t18:00\t\t22:05\t\t$246\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates\t10:00\t\t14:05\t\t$250\t\tRefundable\n";
            cout << "2.Ryanair\t14:00\t\t18:05\t\t$290\t\tRefundable\n";
            cout << "3.Lufthansa\t18:00\t\t22:05\t\t$420\t\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates\t10:00\t\t14:05\t\t$170\\ttRefundable\n";
            cout << "2.Ryanair\t14:00\t\t18:05\t\t$140\t\tRefundable\n";
            cout << "3.Lufthansa\t18:00\t\t22:05\t\t$170\t\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates\t10:00\t\t14:05\t\t$100\t\tRefundable\n";
            cout << "2.Ryanair\t14:00\t\t18:05\t\t$120\t\tRefundable\n";
            cout << "3.Lufthansa\t18:00\t\t22:05\t\t$250\t\tRefundable\n";
        }
        else if(srci==2 && desti==5 || (srci==5 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Emirates\t10:00\t\t14:05\t\t$140\t\tRefundable\n";
            cout << "2.Ryanair\t14:00\t\t18:05\t\t$120\t\tRefundable\n";
            cout << "3.Lufthansa\t18:00\t\t22:05\t\t$140\t\tRefundable\n";

        }
        else if(srci==desti)
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Ryanair" << endl;
               strcpy(f_i,"Ryanair");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Lufthansa" << endl;
            strcpy(f_i,"Lufthansa");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};


class passenger: public domestic_booking,public international_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public:
    void p_detail(int x)
    {   if(x==1)
        { j_detail();
          select_flight();
        }
        else
        {  j_detaili();
            select_flighti();
        }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name: ";
        cin >> f_name;
        cout << "Last Name: ";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nEnter your Gender:\n1.Male\n2.Female\nGender: "<<endl;
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Age: ";
        cin >> age;
        cout << "Email Id: ";
        cin >> email;
        cout << "Contact number: ";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()
        {
            return pnr;
        }

     int getpnri()
     {
         return pnri;
     }

     void disp()
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};

void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}

void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");

}

void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()==x)
     {p.disp();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi();
         cout<<"/nYour Above ticket is being deleted:\n"<<"Amount refunded\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");

}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;
}


int main()
{
    passenger p1;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout<< "----------------------------------------------------"<<endl;
    cout<< "\t Airline Booking Management System" << endl;
    cout<< "----------------------------------------------------"<<endl;
    cout<< "\n\n\t\t1.Book Flight \n\t\t2.Cancel Fight \n\t\t3.Check Ticket \n\t\t4.Exit" << endl;
    cout<< "\n\t\tPlease enter your choice: ";
    cin>> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n1.Domestic Fights \n2.International Flights" << endl;
              cout << "\nPlease enter your choice: ";
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2:
                        p1.i_pnr();
                        p1.p_detail(2);
                        p1.gender_check();
                        p1.more_details();
                        p1.dispi();
                        createfilei(p1);
                        break;
                   default:
                        cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:

              system("CLS");
              cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			return 0;
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
}

