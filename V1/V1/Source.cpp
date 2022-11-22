#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int x, r;

    vector<int> VA, VB, VC;

    for (int i = 0; i < 5; i++)
    {
        cout << "Dame el 1r numero: ";
        cin >> x;
        VA.push_back(x);
        cout << "\nDame el 2do numero: ";
        cin >> x;
        VB.push_back(x);

        r = VA[i] * VB[i];
        VC.push_back(r);
    }

    for (int i = 0; i < VC.size(); i++)
    {
        cout << "\n" << VA[i] << " * " << VB[i] << " = " << VC[i];
    }

    return 0;
}