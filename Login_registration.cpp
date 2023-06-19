#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

bool isLoggedIn(){

    string username,password,un,pw;

    cout<<"Enter User Name :"<<endl;
    cin>>username;

    cout<<"Enter Password :"<<endl;
    cin>>password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un); //for reading the user name is that user valid
    getline(read, pw);

    if(un==username && pw==password){

        return true;
    }
    else{
        false;
    }

}


int main(){
    int choice;
    cout << "1 : Register \n2 : Login\n3 : Your choice \n";

    cin >>choice;
    if(choice == 1){
        string username, password;
        cout << "select a username :";
        cin >> username;
        cout << "select a password :";
        cin >> password;
        ofstream file;
        file.open("data\\" + username + ".txt");
        file<<"username :"<<username<<endl<<"password :"<<password;
        file.close();
        main();



    }


}
