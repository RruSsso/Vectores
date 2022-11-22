#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int x, r = 0;
    vector<int> N1;

    for (int i = 0; i < 5; i++)
    {

        cout << "Dame un numero: ";
        cin >> x;
        cout << endl;
        N1.push_back(x);

        r = r + N1[i];

    }

    r = r * r;

    for (int i = 0; i < N1.size(); i++)
    {

        if (i == N1.size() - 1)
        {
            cout << N1[i];
        }
        else
        {
            cout << N1[i] << " + ";
        }

    }

    cout << " = " << r << endl;

    return 0;

}