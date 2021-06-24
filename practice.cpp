#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string uid,name,sec;
    int age;
    cout<<"Enter the UID: ";
    getline(cin,uid);
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Enter Section: ";
    getline(cin,sec);
    cout<<"Enter Age: ";
    cin>>age;
    ofstream obj("my_file.txt");
    if(!obj)
        cout<<"Unable to open file";
    else{
        cout<<"File created successfully\n";
        obj<<uid<<endl;
        obj<<name<<endl;
        obj<<sec<<endl;
        obj<<age<<endl;
    }
    obj.close();
}

//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main()
//{
//    ifstream file;
//    string ch;
//    file.open("my_file.txt");
//    if (!file)
//    { cout << "No such file";
//    } else
//    {
//        while (file.eof()==0)
//        {
//            getline(file, ch); //file>>ch;
//            cout << ch;
//            cout<<endl;}
//    }
//    file.close();
//    return 0;
//}
//