//Enum
#include <iostream>
using namespace std;
enum Week{Mon=1,Tue,Wed,Thur,Fri,Sat,Sun};
enum Months{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
//how to print the membera of enum?
int main()
{
    enum Week day;
    day = Wed;
    cout<< day+1 << endl;
    //print indexes of enum
    for(int i = Jan;i<=Dec;i++){
        cout<<i<<endl;
    }
    //calculate length of enum
    cout<<Dec+1<<endl;
    return 0;
}