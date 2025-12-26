#include<string>

using namespace std;
struct Student{
    string name;
    string telephone_number;
    string topic;
    int fee;

    Student()=default;

    Student(string name, string telephone_number, string topic, int fee);
};