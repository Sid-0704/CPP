#include <iostream>
#include <string>
using namespace std;

int main(){
    string s2= "Hello cpp";
    string s1 = "rajsiddharth901@gmail.com";
    string s3 = "it is swapped";
    s2.append(s1);
    cout << s2 <<endl;

    cout << "Size of string s1 is: " << s1.size() << endl;
    s1.erase(); 
    cout << s1.empty();

    s2.swap(s3);
    cout << s2 << " ----------- " << s3 << endl;


    int x = s1.compare(0,2, s2, 2, 2);
    cout << x;


    return 0;
}