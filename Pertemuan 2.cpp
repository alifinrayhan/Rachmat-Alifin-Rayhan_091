#include <iostream>
using namespace std;

int main()
{  
    int nBilangan;

    srand(time(0));

    nBilangan = rand() % 10;

    if (nBilangan % 2 == 0){
     nBilangan = nBilangan+1;

    }

    cout << "Nilai  akhir adalah =" << nBilangan << endl;
    
    return 0;


}