#include <iostream>
#include <string>

using namespace std;

// int main(){
//     string s2= "Hello cpp ";
//     string s1 = "rajsiddharth901@gmail.com";
//     cout << s1 <<endl;

//     s1.insert(0,s2);
//     cout << s1;
// }

int main(){
    string s2= "Hello cpp";
    string s1 = "rajsiddharth901@gmail.com";
    cout << s1 <<endl;

    s1.replace(2,3,s2);
    cout << s1;
}

