//  Copyright 2021 by Krayushkina
#include <string>
#include "train.h"
using std::cout;
using std::endl;

int main() {
    Train train;
    for (int i = 0; i<100; ++i) train.addCageInTrain();
    cout << train.Sum() <<endl;
    if (100 == train.Sum()) cout << true <<endl;
    return 0;
}
