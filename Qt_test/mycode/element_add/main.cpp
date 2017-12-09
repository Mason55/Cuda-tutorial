#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>



extern "C"

using namespace std;

void cube_cala(int);

int main(int argc, char ** argv) {

    clock_t start, finish;
    float costtime;
    start = clock();
    //************


      cube_cala(100);

    //*************
    finish = clock();
    //得到两次记录之间的时间差
    costtime = (float)(finish - start) / CLOCKS_PER_SEC;



    std::cout<<endl<<costtime<<endl;

//    FILE *fp;

//    fp=fopen("time_record.txt","r");

//    fprintf(fp,"the used time:%02d:%02d:%02d\n",hour,min,sec);

//    fclose(fp);


    return 0;
}
