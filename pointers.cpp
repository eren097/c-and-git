#include<iostream>
using namespace std;
int main(){
    /*
    int a;
    int *p;
    p=&a;
    a=10;
    cout<<"adress of a : "<<p<<endl;
    cout<<"adress of a : "<<&a<<endl;
    cout<<"value of a : "<<*p<<endl;
    int b;
    b=20;
    *p=b;
    cout<<"adress of b :"<<p<<endl;
    cout<<"adress of b : "<<&b<<endl;
    cout<<"value of b :"<<*p<<endl;

    cout<<"adding 1 to the adress:"<<p+1<<endl;
    

    int x=1025;
    int *p1=&x;
    cout<<"the address of x:"<<p1<<endl;
    char* p2 = (char*)p1;
    cout<<"the address of x:"<<p2<<endl;
    cout<<"the value of x which is stored in p2 because of typecasting"<<*p2<<endl;
    */
    int z=5;
    int *p3=&z;
    cout<<"the value at p3 is  : "<<*p3<<endl;
    cout<<"the address of z is : "<<p3<<endl;
    int **p4=&p3;
    cout<<"the address stored at p4 is : "<<p4<<endl;
    cout<<"we can defrence the vvalue at z by using double pointer: "<<**p4<<endl;
    int ***p5=&p4;
    cout<<"the address of p4 is :"<<p5<<endl;
    cout<<"we can also dereference the value by: "<<***p5<<endl;




}