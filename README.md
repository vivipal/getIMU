# get_data.c

This code is used to read data from an IMU connected via a serial connection.
It has been tested with the 'Sparkfun Openlog Artemis'.


The program finally stores last received data in a binary file *IMU.bin*

How to compile it :

```console
gcc get_data.c -o getData.exe
```

Run it :

```console
./getData.exe

# OR by providing device and path to save data :

./getData.exe /dev/[your_device] [path_to_save_the_file]
```
