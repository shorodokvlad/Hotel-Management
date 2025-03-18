#include <iostream>
#include "Client.h"
using namespace std;

int main()
{
    Client client1(105, "Popescu", "Ion", "0728342196", "143466533", "M");
    cout << client1.toString() << endl;
    return 0;
}
