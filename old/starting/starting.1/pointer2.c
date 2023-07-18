#include <stdio.h>

int main(){
    int u = 3;
    int v;
    int *pu;    //pointer to an integer
    int *pv;    //pointer to an integer

    pu = &u;    //assign address of u to pu
    v = *pu;    //assign value of u to v
    pv = &v;    //assign value of v to pv

    printf("\nu = %d \t&u=%X  pu=%X  *pu=%d",u,&u,pu,*pu);
    printf("\n\nv=%d \t&v=%X pv=%X *pv=%d",v,&v,pv,*pv);

}