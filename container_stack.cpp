// CONTAINERS

// 4. STACK
//    (LAST IN , FIRST OUT)

// A. push(const T & value) & pop()
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    // 10,20,30
    st.pop();
    // 10,20
    
}

// B. size()
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // 10,20,30,40
    st.pop();
    // 10,20,30

    cout<<st.size()<<endl;   //size()
}

// C. top()
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.top()<<endl;   //top()
}

// D. empty()
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    if (st.empty() == true){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Stack is not empty."<<endl;
    }
}

// E. swap( stack & x)
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(11);
    st.push(22);
    st.push(33);

    stack<int>pt;
    pt.push(66);
    pt.push(55);
    pt.push(88);

    st.swap(pt);

    // Printing stack 'st' after swap
    cout << "Elements of stack 'st' after swapping:" << endl;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // Printing stack 'pt' after swap
    cout << "Elements of stack 'pt' after swapping:" << endl;
    while (!pt.empty()) {
        cout << pt.top() << " ";
        pt.pop();
    }
    cout << endl;

}