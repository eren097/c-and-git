#include<iostream>
#include<string>
#include<vector>
using namespace std;

class student{
    
    public:
        string name;
        int mark,roll;
        student (){};
        student(string n,int m,int r){
            name=n;
            mark=m;
            roll=r;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"Score: "<<mark<<endl;
            cout<<"Roll number: "<<roll<<endl;
        }
    };
    
    
    int main(){
    vector<student> ascending;        
    int choice;
    cout<<"Select 1 : Storing the student data"<<endl<<"Select 2 : Show the data"<<endl;
    while(1){
        cin>>choice;
        if (choice==1){
            int mark,roll;
            string name;
            cout<<"Enter student name:";
            cin.ignore();
            getline(cin,name);
            cout<<"Enter the student mark: ";
            cin>>mark;
            cout<<"Enter the student roll number: ";
            cin>>roll;
            ascending.push_back(student(name,mark,roll));
        }
        else if (choice==2){
            student temp;
            for(int i=0 ; i<ascending.size() ; i++){
                for(int j=i+1 ; j<ascending.size() ; j++){
                    if (ascending[i].mark > ascending[j].mark){
                        temp=ascending[i];
                        ascending[i] = ascending[j];
                        ascending[j] = temp;
                    }
                    
                }
            }

            for(int i=0;i<ascending.size();i++){
                ascending[i].show();
            }
    
        }
        else if (choice==3){
            return 0;
        }
    }


}