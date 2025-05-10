#include <iostream>
using namespace std;

int main(){
    cout << "Hello World\n";


    // The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects
    std:: cout << "Hello world (without writing \"using namespace std\" on the top)\n";
    cout << 3 <<"\n";
    cout << "We can also add new lines like this" << endl;
    cout << "See, new lines are added" << "\n";


    return 0;
}