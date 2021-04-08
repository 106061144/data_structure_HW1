#include <iostream>
#include <queue>

using namespace std;

queue<char> q0;
queue<char> q1;
queue<char> q2;
queue<char> q3;
queue<char> q4;
queue<char> q5;
queue<char> q6;
queue<char> q7;
queue<char> q8;
queue<char> q9;

int main()
{
    int reset=0;
    while(reset==0){
        char input[10]="Hello";

        q0.push(input[0]);
        q1.push(input[1]);
        q2.push(input[2]);
        q3.push(input[3]);
        q4.push(input[4]);
        q5.push(input[5]);
        q6.push(input[6]);
        q7.push(input[7]);
        q8.push(input[8]);
        q9.push(input[9]);

        cout << q1.front() << endl;

        cout << "\n";
        reset=1;
    }
    return 0;
}
