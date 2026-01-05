#include<iostream>
#include<string>
using namespace std;
struct info{
    string name;
    int age;
    float cgpa;
};
enum month{
    jan,feb,mar,apr,may
};
int main (){
    /*
    struct info person1;
    struct info person2;
    person1.name="nithyanandhar";
    person2.name="batman";
    person1.age=19;
    person2.age=30;
    person1.cgpa=9.02;
    person2.cgpa=6.32;
    cout<<person1.name<<endl;
    */
    month this_month = jan;
    if(this_month== month::feb){
        cout<<"correct";
    }


}