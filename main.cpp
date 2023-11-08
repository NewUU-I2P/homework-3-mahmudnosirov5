#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    int water;
    cin >> water;
    cout << problemSolution1(water) << endl;

    cout << "Problem 2\n";
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    cout << "The maximum number is " << problemSolution2(n1, n2, n3) << endl;

    cout << "Problem 3\n";
    char s;
    float height;
    cin >> s >> height;
    cout << problemSolution3(s, height) << endl;
    
    cout << "Problem 4\n";
    string mac;
    cin >> mac;
    cout << problemSolution4(mac) << endl;

    cout << "Problem 5\n";
    float num1, num2;
    char operation;
    cin >> num1 >> operation >> num2;
    cout << problemSolution5(num1, num2, operation) << endl;
    return 0;
}