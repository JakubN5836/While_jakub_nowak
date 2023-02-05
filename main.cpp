#include <iostream>
using namespace std;
int miejscowosc_zamieszkania=1; int minuty=0;
int main() {
while(miejscowosc_zamieszkania<=1000000000)
{
    minuty++;
    miejscowosc_zamieszkania = miejscowosc_zamieszkania *2;
    cout << "Minelo minut:" << minuty;
    cout << " Miejscowość zamieszkania:" << miejscowosc_zamieszkania << endl;
}
    return 0;
}
