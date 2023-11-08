#include <string>
using namespace std;

string problemSolution3(char S, float height) {
    string result = "";
    if (S == 'M'){
        result = height >= 1.85 ? "Tall" : height >= 1.7 ? "Normal" : "Short";
    } else if (S == 'F'){
        result = height >= 1.75 ? "Tall" : height >= 1.6 ? "Normal" : "Short";
    }
    return result;
}