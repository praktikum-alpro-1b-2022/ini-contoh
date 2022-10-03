#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int umur = 19;
    cout << "Umur saya adalah \n" << umur << endl;
    umur = 25;

    const double PHY = 3.14;
    PHY = 3.15;

    cout << "Nilai phy adalah " << PHY;
    return 0;
}
