#include<iostream>
using namespace std;

int main{
    string name, tel, topic;
    int fee;
    char exit;

    cout<<"enter 4 fields \n";

    while(exit!='Y'|| exit!='y'){
        cout<<"name: "; cin>>name;
        cout<<"\n tel: "; cin>>tel;
        cout<<"\n topic: "; cin>>topic;
        cout<<"\n fee: "; cin>>fee;
        cout<<"\n exit? :"; cin>>exit;
    }
    return 0;
}