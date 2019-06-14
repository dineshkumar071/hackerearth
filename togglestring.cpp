    #include <bits/stdc++.h>

    using namespace std;
    int main(void){
        string s;
        cin>>s;
        int i;
        for(i=0;i<s.length();i++){
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else
             s[i]=toupper(s[i]);
        }cout<<s;
    }
