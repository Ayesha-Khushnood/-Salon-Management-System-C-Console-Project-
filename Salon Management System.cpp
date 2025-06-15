//SALON Management System .....
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main()

//NOTE: RUN THE PROGRAM IN FULL SCREEN ONLY

{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

//printing the welcome note
re:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                           SALON MANAGEMENT SYSTEM                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                -By:     Ayesha                        |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");



int i;
int login();
login();
//giving option to the user for their choice
b:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  SALON MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Client Record                         |\n";
cout<<"\t\t\t\t\t\t|             2  >> Add treatment Information                     |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Client                    |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the SALON                   |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>5||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice



system("cls");

//displaying the information about the SALON........option 4
if(i==4)
{
	ifstream file;
	file.open("hos.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the SALON.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

//Adding the record of the new Client..................option 3
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream client_file;
  char fname[20];
  cout<<"\n\n\n\nEnter the Client's file name : ";
  cin.ignore();
  gets(fname);
  client_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        struct Client_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char id[15];
                        };

            Client_info ak;
            cout<<"\n********************************************************************\n";client_file<<"\n********************************************************************\n\n";//fn1353 st
            cout<<"\nName : ";client_file<<"Name : ";gets(ak.name);client_file<<ak.name<<"\n";
            cout<<"\nAddress : ";client_file<<"Address : ";gets(ak.address);client_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";client_file<<"Contact Number : ";gets(ak.contact);client_file<<ak.contact<<"\n";
            cout<<"\nAge : ";client_file<<"Age : ";gets(ak.age);client_file<<ak.age<<"\n";
            cout<<"\n Client ID : ";client_file<<" Client ID : ";gets(ak.id);client_file<<ak.id<<"\n";
            cout<<"\n********************************************************************\n";client_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            }
  system("pause");
  system("cls");
  goto b;

}

//Appending treatment information of Client datewise.................option 2
if(i==2)
{
	
	
    fstream client_file;
    cout<<"\n\nEnter the Client_'s file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	client_file.open(fname, ios::in);
		if(!client_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(client_file.good())
			{
			getline(client_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			client_file.close();
			client_file.open(fname, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding more information in Client's file................on : "<<asctime (timeinfo);client_file<<"Description of "<<asctime (timeinfo)<<"\n";
                            struct app
                            {
                                char Treatments[500];
                                char Hairs[500];
                                char Face[500];
                                char Hands[30];
                                char feet[15];
                            };
            app add;
            cout<<"\nTreatments : "; client_file<<"Treatments : ";gets(add.Treatments); client_file<<add.Treatments<<"\n";
            cout<<"\nHairs : "; client_file<<"Hairs : ";gets(add.Hairs); client_file<<add.Hairs<<"\n";
            cout<<"\nFace : "; client_file<<"Face : ";gets(add.Face); client_file<<add.Face<<"\n";
            cout<<"\nHands : "; client_file<<"Hands: ";gets(add.Hands); client_file<<add.Hands<<"\n";
            cout<<"\nfeet : "; client_file<<"feet : ";gets(add.feet);client_file<<add.feet<<"\n";
			client_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
		}
}

//For displaying the full Treatment history of client in that salon............option 3
if(i==3)
{
    fstream client_file;
    cout<<"\n\nEnter the client's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	client_file.open(fname, ios::in);
		if(!client_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(client_file.good())
			{
			getline(client_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}

//Exiting Through the system with a Thank You note........................option 5
if(i==5)
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                            SALON MANAGEMENT SYSTEM                                    |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}


cout<<"\n";

}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  SALON MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   
}
