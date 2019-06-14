    #include <iostream>
    #include <string>

    using namespace std;

    int main() {
    	int k,i;
    	long long int x ;
    	cin >> x >> k;
    	string s = to_string(x);
    	for(i = 0; i < k; i++)
        {
            if(s[i] < '9')
            {
                s[i] = '9';
            }
            else
                k++;
        }
        cout << s;
        return 0;
    }
