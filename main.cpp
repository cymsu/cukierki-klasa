#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczni�w jest w twojej klasie:";
    cin >> uczniowie;

    cout << "ile cuks�w kupila mama:";
    cin>>cukierki;

    x = cukierki/(uczniowie-1);

    cout<<"cukierkow dla kazdego ucznia:"<<x;

    y=cukierki-x*(uczniowie-1);
    cout<<endl<<"dla Jasia na wieczor:"<<y;

    return 0;
}
