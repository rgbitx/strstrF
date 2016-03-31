#include <iostream>

using namespace std;

int strstr(string haystack, string needle) {

    for (int i = 0; ; i++) {
        for (int j = 0; ; j++) {
            // if j equals to needle's length
            if (j == needle.size()) return i;

            //if i + j are out of the haystack size, no need to compare
            if (i + j == haystack.size()) return -1;

            //to compare each char
            if (needle[j] != haystack[i + j]) break;
        }
    }

}

int strstr2(string haystack, string needle) {

    int i = 0, j = 0;


    while(i<haystack.size()){

        while (j<=needle.size()) {

            if (j == needle.size())
                return i;

            if (i + j == haystack.size())
                return -1;

            if (haystack[i + j] == needle[j])
                j++;
            else {
                i++;
                j=0;
                break;
            }

        }

    }

    return -1;

}


int main() {
    cout << "Hello, World!" << endl;

    // test strings
    string needle = "dfe";
    string haystack = "adfewracdadfasdfasdf";

    int ret = strstr2(haystack, needle);

    cout << ret << endl;

    return 0;
}