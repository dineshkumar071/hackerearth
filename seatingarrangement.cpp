    #include <iostream>
    using namespace std;

    int main(void)
    {
        int t;
        cin >> t;
        int n,a,i;
        for(i = 0; i < t; i++)
        {
            cin >> n;
            a = n;
            a %= 12;
            if(a == 1)
            {
                n = n + 11;
                cout << n << " " << "WS" << endl;
            }
            else if(a == 2)
            {
                n = n + 9;
                cout << n << " " << "MS" << endl;
            }
            else if(a == 3)
            {
                n = n + 7;
                cout << n << " " << "AS" << endl;
            }
            else if(a == 4)
            {
                n = n + 5;
                cout << n << " " << "AS" << endl;
            }
            else if(a == 5)
            {
                n = n + 3;
                cout << n << " " << "MS" << endl;
            }
            else if(a == 6)
            {
                n = n + 1;
                cout << n << " " << "WS" << endl;
            }
            else if(a == 7)
            {
                n = n - 1;
                cout << n << " " << "WS" << endl;
            }
            else if(a == 8)
            {
                n = n - 3;
                cout << n << " " << "MS" << endl;
            }
            else if(a == 9)
            {
                n = n - 5;
                cout << n << " " << "AS" << endl;
            }
            else if(a == 10)
            {
                n = n - 7;
                cout << n << " " << "AS" << endl;
            }
            else if(a == 11)
            {
                n = n - 9;
                cout << n << " " << "MS" << endl;
            }
            else if(a == 0)
            {
                n = n - 11;
                cout << n << " " << "WS" << endl;
            }
        }
    }
