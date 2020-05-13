#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczniów jest w twojej klasie:";
    cin >> uczniowie;

    cout << "ile cuksów kupila mama:";
    cin>>cukierki;

    x = cukierki/(uczniowie-1);

    cout<<"cukierkow dla kazdego ucznia:"<<x;

    y=cukierki-x*(uczniowie-1);
    cout<<endl<<"dla Jasia na wieczor:"<<y;

    return 0;
}
