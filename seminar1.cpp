#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, vorname;
    cin>>name>>vorname;
    cout<<"Hallo"<<" "<<name<<" "<<vorname<<endl;
    int len_name = name.length() + vorname.length();
    cout<<len_name;
    return 0;
}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Kundendaten{
//    int nummer;
//    string name;
//    int postleitzahl;
//    string ortsname;
//} liste[10];
//
//int main()
//{
//    liste[0].nummer = 1;
//    liste[0].name = "gigi";
//    liste[0].postleitzahl = 777;
//    liste[0].ortsname = "undeva";
//    return 0;
//}




