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
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

/**
 *  32位整型表示的数字范围：-2147483648~2147483647
 - 2^31 ~ 2^31-1
 */
int reverseNum(int x)
{
    long result;
    if (x >= 0)
    {
        ostringstream os;
        os << x;
        string strIn = os.str();
        std::reverse(strIn.begin(), strIn.end());
        istringstream is(strIn);
        is >> result;

        if (result > pow(2, 31) - 1)
        {
            // 溢出
            result = 0;
        }
    }
    else if (x < 0)
    {
        ostringstream os;
        os << -x;
        string strIn = os.str();
        std::reverse(strIn.begin(), strIn.end());
        istringstream is(strIn);
        is >> result;
        result = -result;

        if (result < - pow(2, 31))
        {
            // 溢出
            result = 0;
        }
    }

    return (int)result;
}

int main(int argc, const char * argv[])
{
    int result = reverseNum(32768);
    cout << result;

    return 0;
}
