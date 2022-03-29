#include "area_covt.h"

float sqmTOsqft(int area_ip)
{
    return area_ip*10.764;
}
int sqkmTOhecter(int area_ip)
{
    return area_ip*100;
}
int sqkmTOsqm(int area_ip)
{
    return area_ip*1000000;
}
float sqkmTOacer(int area_ip)
{
    return area_ip*247.1054;
}