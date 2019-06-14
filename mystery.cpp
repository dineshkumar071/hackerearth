        #include <bits/stdc++.h>
        using namespace std;
        #define endl "\n"

        int main(void) {
            ios::sync_with_stdio(false);
            cin.tie(0);

            long long n;
            while (cin >> n) {
                int Count = 0;
                while (n > 0) {
                    if (n % 2 == 1)
                        Count++;
                    n /= 2;
                }
                cout << Count << endl;
            }
        }
        /*long long int a,i;
        for( ; ; ){
            int count =0;
            if (cin >> a) {
                for(i=a;i>0;i=i/2)
                {
                    if(i%2==1)
                    {
                        count++;
                    }
                }
                cout<<count << endl;
            }
            else
                break;
        }*/
