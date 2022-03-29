#include "length_covt.h"

int cmTOmm(int length_ip)
{
    return length_ip*10;
}
int mTOcm(int length_ip)
{
    return length_ip*100;
}
int kmTOm(int length_ip)
{
    return length_ip*1000;
}
float ftTOm(int length_ip)
{
    return length_ip*0.3048;
}
float inchTOcm(int length_ip)
{
    return length_ip*2.54;
}