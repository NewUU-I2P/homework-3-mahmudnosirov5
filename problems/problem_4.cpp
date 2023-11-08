#include <string>
#include <sstream>
using namespace std;

int hex(char l){
    int val;
    if (l >= '0' && l <= '9'){
        val = l - '0';
    } else {
        val = 10 + l - 'A';
    }
    return val;
}

string problemSolution4(const string &macAddress) {
    int n = hex(macAddress[1]);
    if (macAddress == "FF:FF:FF:FF:FF:FF"){
        return "Broadcast";
    }
    if (n % 2){
        return "Multicast";
    } else {
        return "Unicast";
    }
}