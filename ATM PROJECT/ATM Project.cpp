#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>

using namespace std;


int main()

{
	ofstream data("project.txt");  
	 string pass ="";
   char ch;
   int choice;
   char op;


	  for (int i=0;i<3;i++)

{
    cout << "Enter Your Pincode \n";

   ch = _getch();
   while(ch != 13)
    {//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();

    }

  if (pass=="12345")
	{

	    cout<<"\nUser Logged in Successfully \n";

	double balance  = 155000;
	double withdraw, deposit;
	int option;
cout<<"\n";
cout<<"           ***Welcome Adnan***\n"<<endl;
	cout<<"*** Automated Teller Machine***"<<endl;
	cout<<"Choose a Transaction:\n";
	cout<<"\n";
	cout<<"[1] Balance Enquiry \n"
		<<"[2] Cash Withdraw \n"
		<<"[3] Cash Deposit \n"
		<<"[4] Fast Cash \n"
		<<"[5] Exit\n"
		<<"\n"
		<<"Enter Your Option What You Want:";
	cin>>option;

	switch(option)
	{
	case 1:
	    {
	        cout<<"\n-- BALANCE INQUIRY --\n";
		cout<<"\n Your current balance is PKR :"<<balance<<endl;
		}


	case 2:
	    {
	        cout<<"\n-- WITHDRAW --\n";
		cout<<"Enter amount: PKR";
		cin>>withdraw;

		balance = balance - withdraw;

		cout<<"You withdrew PKR  "<<withdraw<<endl;
		cout<<"Your remaining balance is PKR "<<balance<<endl;
	break;
	    }

	case 3:
	    {
	    cout<<"\n-- DEPOSIT --\n";
		cout<<"Enter amount: PKR";
		cin>>deposit;

		balance = balance + deposit;

		cout<<"You deposited PKR  "<<deposit<<endl;
		cout<<"Your new balance is PKR  "<<balance<<endl;
		continue;
		case 5:
		cout<<"\n*** EXIT MODE ***\n";
        continue;
	    }
        case 4 :
            cout<<"\n Choose Your Desired Amount from below list";
            cout<<"\n 1 -- 500 \n 2 -- 1000 \n 3 -- 2000 \n 4 -- 5000 \n 5 -- 10,000 \n 6 -- 15,000 \n 7 -- 20,000"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1 :
                {
                   double fcash = 500;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }

               case 2 :
                {
                   double fcash = 1000;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }
                case 3 :
                {
                   double fcash = 2000;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }
                case 4 :
                {
                   double fcash = 5000;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }
                case 5 :
                {
                   double fcash = 1000;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }
                case 6 :
                {
                   double fcash = 15000;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }
                case 7 :
                {
                   double fcash = 20000;
                cout<<"fast cash"<<fcash<<endl;
                balance = balance - fcash;
                cout<<"Your Current Balance is PKR\n"<<balance<<endl;
                break;
                }
                }
        default:
		cout<<"\n That is an invalid option \n";
	}
break;
	}
	else
        cout<<"\nPls try again\n";
		}


getch();
}



