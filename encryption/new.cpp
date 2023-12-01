#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include <thread>
#include <chrono>


using namespace std;
void mainpage();
void encry();
void decry();
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


int main(){
mainpage();
return 0;
}


void mainpage(){
int a;
b:
system("cls");
cout <<endl;
cout <<endl;
  
SetConsoleTextAttribute(hConsole, 10);
cout <<"\t\t\t\t\t     .--. .-..-. .--. .---. .-..-..---. .-----.                    "<<endl;
cout <<"\t\t\t\t\t    : .--': `: :: .--': .; :: :: :: .; :`-. .-'                    "<<endl;
cout <<"\t\t\t\t\t    : `;  : .` :: :   :   .'`.  .':  _.'  : :                      "<<endl; 
cout <<"\t\t\t\t\t    : :__ : :. :: :__ : :.`. .' ; : :     : :                      "<<endl;
cout <<"\t\t\t\t\t    `.__.':_;:_;`.__.':_;:_;:_,'  :_;     :_; ";
SetConsoleTextAttribute(hConsole, 10);
cout <<"   Created by SDJ    "<<endl;
cout <<endl;
SetConsoleTextAttribute(hConsole, 10);
cout <<"\t\t\t\t  -> You can encrpt your passwords and decrypt them using this tool. <- " << endl;
cout <<endl;
cout <<endl;
SetConsoleTextAttribute(hConsole, 10);
cout <<"\t\t\tPlease enter option given below :  " << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout <<"\t\t\t|================== [1] Encrypt My password           " << endl;
cout << endl;
cout <<"\t\t\t|================== [2] Decrypt My Encryption           " << endl;
cout <<endl;
cout <<"\t\t\t|================== [3] Exit                           " << endl;
cout <<endl;
SetConsoleTextAttribute(hConsole,10);
cout << "S E L E C T : " << endl;
cin >> a;

switch(a){                                     
case 1:
     encry();
     break;
case 2:
     decry();
    break;
case 3:
     system("pause");
     break;     
default:
       SetConsoleTextAttribute(hConsole, 4);
      cout <<"\t\t User invalid input!!!" << endl;
      system("pause");
      goto b;
              
         }

}

void encry(){
system("cls");
string password;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout <<"\t\t\t\t        .---.    .--.    .--.    .--.   .-.   .-.   .--.   .---.   .---.        "<<endl;
cout <<"\t\t\t\t        : .; :  : .; :  : .--'  : .--'  : :.-.: :  : ,. :  : .; :  : .  :       "<<endl;
cout <<"\t\t\t\t        :  _.'  :    :  `. `.   `. `.   : :: :: :  : :: :  :   .'  : :: :       "<<endl;
cout <<"\t\t\t\t        : :     : :: :   _`, :   _`, :  : `' `' ;  : :; :  : :.`.  : :; :       "<<endl;
cout <<"\t\t\t\t        :_;     :_;:_;  `.__.'  `.__.'   `.,`.,'   `.__.'  :_;:_;  :___.'       "<<endl;
cout <<endl;
cout << endl;
SetConsoleTextAttribute(hConsole,10);
cout <<"\t\t\t [*] Enter your password here & it will be encrypted soon :" <<endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cin >> password;

cout << endl;
string q;

char encryptedKey[100]; // Adjust the size as needed

    // Encryption
    for (int i = 0; i < password.length(); ++i) {
        int en = static_cast<int>(password[i]) + 3;
        encryptedKey[i] = static_cast<char>(en);
    }
    SetConsoleTextAttribute(hConsole, 10);
    cout << "[*] It's generating your key " << endl;
   Sleep(1000);
   cout << endl;
     cout << "[*][*] It's generating your key " << endl;
   Sleep(10000);
   cout << endl;
     cout << "[*][*][*] It's generating your key " << endl;
   Sleep(1000);
   cout << endl;
      SetConsoleTextAttribute(hConsole, 2);
     cout << "[!] your key has been  generated " << endl;
     cout << endl;
    // Print the encrypted key
    SetConsoleTextAttribute(hConsole, 10);
      cout << "Encrypted key: ";
    for (int i = 0; i < password.length(); ++i) {
SetConsoleTextAttribute(hConsole, 10);
        cout << encryptedKey[i];
    }
cout << endl;
 cout <<"\t\t\t\t Get the copy of the encrypted key before close " << endl;
cout <<endl;
cout << "\t\t\t Do you want to go back(Y/N)? " << endl;
cout << endl;
cin  >> q;

  if (q == "y" || q == "y") 
  {
    mainpage();

  }else
  {
    
    system("pause"); 
  }
  
  




}


void decry(){
string encry;
system("cls");
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 14);
cout <<"\t\t\t\t:::::::::  :::::::::: ::::::::  :::::::::  :::   ::: ::::::::: :::::::::::" << endl; 
cout <<"\t\t\t\t:+:    :+: :+:       :+:    :+: :+:    :+: :+:   :+: :+:    :+:    :+:    " << endl;    
cout <<"\t\t\t\t+:+    +:+ +:+       +:+        +:+    +:+  +:+ +:+  +:+    +:+    +:+    " << endl;  
cout <<"\t\t\t\t+#+    +:+ +#++:++#  +#+        +#++:++#:    +#++:   +#++:++#+     +#+    " << endl; 
cout <<"\t\t\t\t+#+    +#+ +#+       +#+        +#+    +#+    +#+    +#+           +#+    " << endl; 
cout <<"\t\t\t\t#+#    #+# #+#       #+#    #+# #+#    #+#    #+#    #+#           #+#    " << endl;  
cout <<"\t\t\t\t#########  ########## ########  ###    ###    ###    ###           ###    " << endl;


cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout <<"\t\t\t [*] Enter your Encrypted key here & it will be Decrypted soon :" <<endl;
cout << endl;
cout << endl;
cin >> encry;
char decryptedkey[100];
string p;
for (int a = 0; a < encry.length(); ++a) {
        int de = static_cast<int>(encry[a]) - 3;
         decryptedkey[a] = static_cast<char>(de);
      
    }
    SetConsoleTextAttribute(hConsole, 10);
cout << "Decrypted key: ";
    for (int i = 0; i < encry.length(); ++i) {
      SetConsoleTextAttribute(hConsole, 10);
        cout << decryptedkey[i];
    }
    cout << endl;
cout << "\t\t\t Do you want to go back(Y/N)? " << endl;
cout << endl;
cin  >> p;

  if (p == "y" || p == "y") 
  {
    mainpage();

  }else
  {
    
    system("pause"); 
  }


     
}