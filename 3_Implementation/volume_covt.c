#include "volume_covt.h"

int LtTOcmCube(int volume_ip)
{
    return volume_ip*1000;
}
float LtTOmCube(int volume_ip){
    return volume_ip*0.001;
}
int mCubeTOcmCube(int volume_ip)
{
    return volume_ip*1000000;
}