#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int x;
    vector<int> N1;

    for (int i = 0; i < 10; i++)
    {

        cout << "Ingresa un numero: ";
        cin >> x;
        cout << endl;
        N1.push_back(x);

    }

    for (int i = 0; i < N1.size(); i++)
    {

        if (N1[i] != N1[i + 1])
        {
            if (i < N1.size() - 1)
            {
                cout << N1[i] << ", ";
            }
            else
            {
                cout << N1[i];
            }

        }

    }

    return 0;
}