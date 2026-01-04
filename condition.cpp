#include<iostream>
using namespace std;
int main(){
    int age=30;
    /*
    if(age>18){
        cout<<"u r adult";
    }
    else{
        cout<<"u r a child";
    }
    */
    //ternary operator - does the same work as condtional statement
    // syntax - (condition) ? [true statement] : [else statement]

    //(age>18) ? cout<<"u r a adult" : cout<<"u r a child";
     switch (age){
        case 24:
            cout<<"u r a adult";
            break;
        default:
            cout<<"u r not 24 years old";
            break;
     }

}