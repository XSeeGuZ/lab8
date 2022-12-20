#include <iostream>
#include<string>
using namespace std;

int main() {
    string name;
    string movie,day,sentence;
    int id;
    int x=0;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    x=id-(id%10000000);
    x=x/10000000;
    cout << "Fahsai: I think you may be GEAR " << x-12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,sentence);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye " << "\\(^ ^)/";
}