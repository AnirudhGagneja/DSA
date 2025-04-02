#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    student(string s, int u, string sec)
    {
        name = s;
        uid = u;
        section = sec;
    }

    string name;
    int uid;
    string section;

    //  void setinfo(){
    //     cout<<"Enter name : "<<endl;
    //     cin>>name;
    //     cout<<"Enter UID : "<<endl;
    //     cin>>uid;
    //     cout<<"Enter section: "<<endl;
    //     cin>>section;
    //  }
    void getinfo()
    {
        cout << "Name- " << name << endl;
        cout << "UID- " << uid << endl;
        cout << "Section- " << section << endl;
    }
};

int main()
{
    student s1("Anirudh", 16527, "609-B");
    student s2("Rahul", 10469, "609-B");
    student s3("Tarun", 15927, "609-B");
    s3.getinfo();
    return 0;
}