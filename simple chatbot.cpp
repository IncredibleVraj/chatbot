#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<windows.h>
using namespace std;
void input_time();
void input_date();
void input_quotes();
void input_info();
void random_wish()
{
    srand((unsigned)time(0));
    int r_no;
    r_no = (rand()%2)+1;
    if(r_no==1)
    {
        cout<<"Jarvis: Hope your health is good\n";
    }
    else if(r_no==2)
    {
        cout<<"Jarvis: Hope Your day is going good\n";
    }
}
int isSubstring(string s1, string s2)
{
	int M = s1.length();
	int N = s2.length();

	for (int i = 0; i <= N - M; i++)
	{
		int j;
		for (j = 0; j < M; j++)
			if (s2[i + j] != s1[j])
				break;

		if (j == M)
			return i;
	}

	return -1;
}
void searching(string s3,string s4)
{
	int res = isSubstring(s3, s4);
	if (res == -1)
    {
    }
    else if(s3=="time")
    {
        input_time();
    }
    else if(s3=="date")
    {
        input_date();
    }
    else if(s3=="quote")
    {
        input_quotes();
    }
    else if(s3=="info")
    {
        input_info();
    }
}
void input_time()
{
    time_t now = time(0);

    tm *ltm = localtime(&now);
    cout<<"Jarvis :";
    if(ltm->tm_hour>12)
    {
        ltm->tm_hour=ltm->tm_hour-12;
    }
    cout << " Time(in IST): "<< ltm->tm_hour << ":"<<ltm->tm_min << ":"<<ltm->tm_sec << endl;
}
void input_date()
{
    time_t now = time(0);

    tm *ltm = localtime(&now);
    cout<<"Jarvis :";
    cout << "  Today's  Date:" << ltm->tm_mday<<"-";
    ltm->tm_mon=ltm->tm_mon+1;
    if (ltm->tm_mon==1)
        cout<<"January";
    else if (ltm->tm_mon==2)
        cout<< "February";
    else if (ltm->tm_mon==3)
        cout<<"March";
    else if (ltm->tm_mon==4)
        cout<<"April";
    else if (ltm->tm_mon==5)
        cout<<"May";
    else if (ltm->tm_mon==6)
        cout<<"June";
    else if (ltm->tm_mon==7)
        cout<<"July";
    else if (ltm->tm_mon==8)
        cout<<"August";
    else if (ltm->tm_mon==9)
        cout<<"September";
    else if (ltm->tm_mon==10)
        cout<<"October";
    else if (ltm->tm_mon==11)
        cout<<"November";
    else if (ltm->tm_mon==12)
        cout<<"December";
    cout<<"-"<<1900 + ltm->tm_year<<endl;
}
void input_quotes()
{
    cout<<"Jarvis :\n";
    cout<<"\t 1.  Success is not final,\n\t       failure is not fatal:\n\t     it is the courage to continue\n\t       that counts\n\n"<<endl;
    cout<<"\t 2.  Never bend your head. \n\t       Always hold it high.\n\t     Look the world straight in the eye\n\n"<<endl;
    cout<<"\t 3.  limits your 'ALWAYS' and Your 'NEVERS'\n\n"<<endl;
}
void input_info()
{
    cout<<"Jarvis :\n";
    HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(outcon, 0x04);
    cout<<"\t----------------------------------";
    cout<<"\n\t| My name is JARVIS              |"<<endl;
    cout<<"\t| Created By: VRAJ SHAH          |"<<endl;
    cout<<"\t| Manufactured by: VRAJ PVT LTD. |"<<endl;
    cout<<"\t| Created Date: 4 October 2020   |"<<endl;
    cout<<"\t| I can do several tasks         |"<<endl;
    cout<<"\t----------------------------------"<<endl;
    SetConsoleTextAttribute(outcon, 0x07);
}
int main()
{
    string gender_of_user;
    string name_of_user;
    string input_to_do;

    HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(outcon, 0x04);

    cout<<"\t1 -> Use Small Letters\n";

    cout<<"\t2 -> Type EXIT to terminate\n";

    cout<<"\t3 -> This Chatbot Only finds Following topics:\n";

    cout<<"\t\t\t 1 -> Time"<<endl;
    cout<<"\t\t\t 2 -> Date"<<endl;
    cout<<"\t\t\t 3 -> Can Quotes You"<<endl;
    cout<<"\t\t\t 4 -> Give His Info"<<endl;

    SetConsoleTextAttribute(outcon, 0x0E);

    cout<<"\nEnter your Name: ";

    getline(cin,name_of_user);

    cout<<"Enter your Gender(male/female): ";

    getline(cin,gender_of_user);

    SetConsoleTextAttribute(outcon, 0x07);

    system("cls");

    cout<<"Jarvis: Hello ";

    time_t now = time(0);

    tm *ltm = localtime(&now);

        if((ltm->tm_hour)>0 && (ltm->tm_hour)<=12)
        {
            cout<<" GOOD MORNING ";
            if(gender_of_user=="M" || gender_of_user=="m" || gender_of_user=="Male" || gender_of_user=="male")
            {
                cout<<"SIR"<<endl;
            }
            if(gender_of_user=="f" || gender_of_user=="F" || gender_of_user=="Female" || gender_of_user=="female")
            {
                cout<<"MADAM"<<endl;
            }
            cout<<endl;
        }
        else if((ltm->tm_hour)>12 && (ltm->tm_hour)<19)
        {
            cout<<" GOOD AFTERNOON ";
            if(gender_of_user=="M" || gender_of_user=="m" || gender_of_user=="Male" || gender_of_user=="male")
            {
                cout<<"SIR"<<endl;
            }
            if(gender_of_user=="f" || gender_of_user=="F" || gender_of_user=="Female" || gender_of_user=="female")
            {
                cout<<"MADAM"<<endl;
            }
            cout<<endl;
        }
        else if((ltm->tm_hour)>=19 && (ltm->tm_hour)<=24)
        {
            cout<<" GOOD EVENING ";
            if(gender_of_user=="M" || gender_of_user=="m" || gender_of_user=="Male" || gender_of_user=="male")
            {
                cout<<"SIR"<<endl;
            }
            if(gender_of_user=="f" || gender_of_user=="F" || gender_of_user=="Female" || gender_of_user=="female")
            {
                cout<<"MADAM"<<endl;
            }
            cout<<endl;
        }
    random_wish();
    for (int i=0; ;i++)
    {
        cout<<"\nJarvis : How can I help you ";
        if(gender_of_user=="M" || gender_of_user=="m" || gender_of_user=="Male" || gender_of_user=="male")
        {
            cout<<"sir"<<endl;
        }
        if(gender_of_user=="f" || gender_of_user=="F" || gender_of_user=="Female" || gender_of_user=="female")
        {
            cout<<"madam"<<endl;
        }
        cout<<name_of_user<<" : ";
        getline(cin,input_to_do);
        if(input_to_do=="exit")
        {
            break;
        }
        searching("date",input_to_do);
        searching("time",input_to_do);
        searching("quotes",input_to_do);
        searching("info",input_to_do);
    }
    return 0;
}
