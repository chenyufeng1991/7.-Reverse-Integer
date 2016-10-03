//
//  main.cpp
//  7. Reverse Integer
//
//  Created by chenyufeng on 10/3/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int reverseNum(int x)
{

    ostringstream os;
    os << x;
    string strIn = os.str();

    reverse(strIn.begin(), strIn.end());

    istringstream is(strIn);
    int result;
    is >> result;





    return 0;
}

int main(int argc, const char * argv[])
{
    int result = reverseNum(123);
    cout << result;

    return 0;
}
