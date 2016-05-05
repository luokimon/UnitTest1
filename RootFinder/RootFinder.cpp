// RootFinder.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "RootFinder.h"
#include <math.h>


// 这是导出变量的一个示例
ROOTFINDER_API int nRootFinder=0;

// 这是导出函数的一个示例。
ROOTFINDER_API int fnRootFinder(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 RootFinder.h
CRootFinder::CRootFinder()
{
    return;
}

// Find the square root of a number
double CRootFinder::SquareRoot(double v)
{
    double result = v;
    double diff = v;
    while (diff > result / 1000)
    {
        double oldResult = result;
        result = result - (result*result - v) / (2 * result);
        diff = fabs(oldResult - result);
    }
    return result;
}