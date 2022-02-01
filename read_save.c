#include <stdio.h>
#include <unistd.h>
#include <time.h>

#include <math.h>


int main(int argc, char const *argv[]){                     // run over and over again


  while (1){
    float data[9];

    FILE * fptr;
    fptr = fopen("IMU.bin","rb");
    fread(data,sizeof(float),9,fptr);
    fclose(fptr);

    float yaw = *(data+0);
    float pitch = *(data+1);
    float roll = *(data+2);



    printf("Roll = %0.1f, Pitch = %0.1f, Yaw = %0.1f\r\n", roll, pitch, yaw);
  }
}
