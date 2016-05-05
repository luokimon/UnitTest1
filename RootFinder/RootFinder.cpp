// RootFinder.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "RootFinder.h"
#include <math.h>


// ���ǵ���������һ��ʾ��
ROOTFINDER_API int nRootFinder=0;

// ���ǵ���������һ��ʾ����
ROOTFINDER_API int fnRootFinder(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� RootFinder.h
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