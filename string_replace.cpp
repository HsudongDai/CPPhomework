#include <iostream>
#include <string>

using namespace std;
bool replaceString(string &s, const string &oldSubstr, const string& newSubstr);

int main(){
    string origin = "Bonjour, mon amour.";
    replaceString(origin, "Bonjour", "Adieu");
    cout << origin << endl;
    return 0;
}

bool replaceString(string &s, const string &oldSubstr, const string& newSubstr)
{
    int re = s.find(oldSubstr);
    if (re != string::npos){
        s.replace(re, oldSubstr.length(), newSubstr);
        return true;
    }
    return false;
}
