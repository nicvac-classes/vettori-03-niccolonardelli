#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n, i, max;
    cout << "quanti alunni ci sono in questa classe?" << endl;
    cin >> n;
    vector<int>v(n); 
    vector<string>nomi(n);
    i=0;
    while (i<n)
    {
        cout <<"come si chiama lo studente?" << endl;
        cin >> nomi[i];
        cout << "qual è il suo voto?" << endl;
        cin >> v[i];
        i=i+1;
    }
    i=0;
    while (i<n)
    {
        cout << "il voto dello studente " << nomi[i] << " è " << v[i] << "." << endl;
        i= i+1;
    }
    i=0;
    max=0;
    while (i<n)
    {
        if (v[i] > v[max])
        {
           v[max] = v[i];
           nomi[max] = nomi[i];
        }
        else
        {
            
        }
        i=i+1;
    }
    cout << "il voto più alto è di " << nomi[max] << ", che è " << v[max] << "." << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
