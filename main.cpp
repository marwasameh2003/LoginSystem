#include"loginSystem.h"
#include <iostream>
// FCAI � Programming 1 � 2022 - Assignment 4
// Program Name: loginApp.cpp
// Last Modification Date: 16/ 5/ 2022
// Author1 and ID and Group: Asmaa ELAwady 20210068
// Author2 and ID and Group: Salma Ameer 20210505
// Author3 and ID and Group: Marwa Sameh 20210514
// Teaching Assistant: Eng. Nesma - Eng.Yousra
// Purpose:login App
//---------------------------
// NOTE:: it is preferable to have a text file called test1 so the code runs perfectly.
using namespace std;

int main(){
    map<char,string> passencrypt =
        {


                {'a',"z"},{'b',"y"},{'c',"x"},{'d',"w"},{'e',"v"},
                {'f',"u"},{'g',"t"},{'h',"s"},{'i',"r"},{'j',"q"},
                {'k',"p"},{'l',"o"},{'m',"n"},{'n',"m"},{'o',"l"},
                {'p',"k"},{'q',"j"},{'r',"i"},{'s',"h"},{'t',"g"},
                {'u',"f"},{'v',"e"},{'w',"d"},{'x',"c"},{'y',"b"},
                {'z',"a"},
                {'A',"Z"},{'B',"Y"},{'C',"X"},{'D',"W"},{'E',"V"},
                {'F',"U"},{'G',"T"},{'H',"S"},{'I',"R"},{'J',"Q"},
                {'K',"P"},{'L',"O"},{'M',"N"},{'N',"M"},{'O',"L"},
                {'P',"K"},{'Q',"J"},{'R',"I"},{'S',"H"},{'T',"G"},
                {'U',"F"},{'v',"E"},{'W',"D"},{'X',"C"},{'Y',"B"},
                {'Z',"A"},
                {'0',"9"},{'1',"8"},{'2',"7"},{'3',"6"},{'4',"5"},
                {'5',"4"},{'6',"3"},{'7',"2"},{'8',"1"},{'9',"0"},

                {'!',"|"},{'@',"`"},{'#',"~"},{'$',"."},{'%',"+"},
                {'^',"="},{'&',"/"},{'*',"?"},{'|',"!"},{'`',"@"},
                {'.',"$"},{'+',"%"},{'=',"^"},{'/',"&"},{'?',"*"},
                {'(',","},{'~',"#"},{',',")"}

        };

string username ;

    string phone_number;
    string encrypedpass;
    int choice,i,exit=0;
    string password,passs,name,fname;
    ofstream fileo;
    ifstream filei;
    cout<<"Welcome to our system"<<endl;
    while(exit==0)
    {
        cout<<"Choose one option:"<<endl;
        cout<<" 1-Login "<<endl;
        cout<<" 2-Register"<<endl;
        cout<<" 3-change password"<<endl;
        cout<< "4- Exit"<< endl;
        cin>>choice;
//-----login part-----------
        if(choice==1){
            threeChances();
            break;

        }
//-----------register part--------------
        if(choice==2)
        {
            string name1;
        cout<<"enter your name:";
      cin.ignore();
getline(cin,name1 );

       cout << name1 << " : " << (is_name_valid(name1) ?"valid format" : "invalid format") << endl;

        valid(name1);

            //---------------------------
            cout<<"enter your phone_number:";
            cin>>phone_number;

            cout << phone_number << " : " << (is_phone_number1_valid(phone_number) ?"valid format" : "invalid format") << endl;

            valid(phone_number );

            //-----------------------------
            cout<<"Enter username:";
            cin>>username;

            valid(username);

            cout<<"Enter a password:" ;
             for(int i = 0; i<sizeof(passs); i++){
                    passs[i]= getch();
                    cout<<"*";
                    password +=  passs[i];
                    if(password[i]== '\r' ){
                        break;
                        // userpass.pop_back;
                        //cout<< "\b\b";
                    }
                }
                passs[i] = '\0';
                cout<<"\n";
            //cin>>password;
            insurepassword7(password);

            for(char letter: password){
                encrypedpass += passencrypt[letter];
            }
            //-----------//function to check whether the email exists or not//--------------------------------------------------------------------------------------
           emailExist();

            //---------------------------------------------------------------------------------------------------------------------------------------------------------
                 ofstream reg("test1.txt",ios::app);
        reg<<name1<<' '<<phone_number<<' '<<username<<' '<<encrypedpass<<' '<< endl;
        //<<email1<<endl;
        cout<< endl;

        //-------------------
        fileo.open(fname.c_str());
        fileo<< name1<<endl<<phone_number<<endl<<username<<endl<<encrypedpass<<endl;
        //<<email1<<endl;
        cout<<"You are successfully registered"<<endl;


//---------change password part----------------
        }if(choice == 3){
            changePass();

        }
//-------------------------------------------------
        if (choice == 4)
        {
            exit=1;
            cout<<"Thank you for visiting"<<endl;

        }
    }
}
