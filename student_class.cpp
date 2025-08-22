#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    student s1;
    s1.name = "updesh";
    s1.branch = "entc";
    s1.subject = "c++";
    s1.result = 6.6;
    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Result: " << s1.result << endl;
    
    return 0;
}
