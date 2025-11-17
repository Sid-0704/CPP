#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;


    //displaying all elements
    stack<int> tempStack=st;

    while(!tempStack.empty()){
        cout << tempStack.top() << " ";
        tempStack.pop();
    }

    return 0;
}