#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long remind=n % s.length();
    string str=s.substr(0,remind);
    long multiplier=n/s.length();
    long c=0;
    for(long i=0;i<s.length();i++){
        if(s[i]=='a')
            c++;     
    }

    long fc=multiplier*c;
    for(long i=0;i<str.length();i++){
        if(str[i]=='a')
            fc++;
    }
    return fc;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
