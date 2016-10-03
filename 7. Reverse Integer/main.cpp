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

int reverseNum(int x)
{
    int result;
    if (x >= 0)
    {
        ostringstream os;
        os << x;
        string strIn = os.str();

        std::reverse(strIn.begin(), strIn.end());

        istringstream is(strIn);
        is >> result;
        // 判断是否溢出
        // 把当前字符串继续进行逆转，和原先输入的字符串比较，相等表示没有溢出，否则表示溢出
        int test = result;
        ostringstream oss;
        oss << test;
        string testStr = oss.str();
        if (strIn != testStr)
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

        // 判断是否溢出
        int temp = atoi(strIn.c_str());
        if (result + temp != 0)
        {
            // 溢出
            result = 0;
        }
    }

    return result;
}

int main(int argc, const char * argv[])
{
    int result = reverseNum(10);
    cout << result;

    return 0;
}
