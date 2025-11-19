/* 

Create a class college with member college name(string const), college student count(int), no of courses(int)
define init list to take value and display the college detail with highest student count 
take data for 3 colleges

*/

#include <iostream>
using namespace std;

class college{
    const string collegeName;
    int studCount;
    int coursesNo;

    public:

        college(string a, int cnt, int courses){
            
        }

};


int main(){

    college c1("LPU", 2500, 356);
    college c2("NIT", 1200, 256);
    college c3("IIT", 1000, 325);


}