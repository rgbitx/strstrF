#include <iostream>

using namespace std;

int strstr(string haystack, string needle){

    for(int i=0;;i++){
        for(int j=0;;j++){
            // if j equals to needle's length
            if(j==needle.size()) return i;
            if(i+j==haystack.size()) return -1;
            if(needle[j]!=haystack[i+j]) break;
        }
    }

}



int main() {
    cout << "Hello, World!" << endl;

    string needle="acd";
    string haystack="adfewracdadfasdfasdf";

    int ret=strstr(haystack,needle);

    cout<<ret<<endl;



    return 0;
}