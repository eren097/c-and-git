#include<iostream>
#include<string>
#include<vector>
using namespace std;

class phone{
    private:
        string name;
        int ram;
        string pro;
        float bat;
    public:
        phone(string n="NULL",int r=0,string p="NULL",float b=0.0){
            name=n;
            ram=r;
            pro=p;
            bat=b;
        }

        void getdata(){
            cout<<"Name: "<<name<<endl<<"Ram: "<<ram<<endl<<"Processor: "<<pro<<endl<<"Battery: "<<bat<<endl;
        }
};
int main(){
    vector<phone> person;
    int choice,count;

    while(1){
        cin>>choice;
        if(choice ==1){
            string Name;
            int Ram;
            string Processor;
            float Battery;

            cout<<"Enter your name:";
            cin.ignore();
            getline(cin,Name);
            cout<<"Enter your ram size:";
            cin>>Ram;
            cout<<"Enter your processor:";
            cin.ignore();
            getline(cin,Processor);
            cout<<"Enter your battery size:";
            cin>>Battery;
            person.push_back(phone(Name,Ram,Processor,Battery));
            count++;
        }
        else{
            break;
        }
    }
    for(int i=0;i<count-1;i++){
        person[i].getdata();
    }
 
}