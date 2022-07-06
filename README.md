## About Cryprography project :
That small project was about how to transform an important data to some none sense text, this opeartion called ***encryption*** and for operation inverse called ***decryption***.

I come up with a simple idea is to add for each caracter some *KEY* ; its just a number from your choice.
In  my case i choose KEY=4.


## Who is that for :
This project concerne people who learn C language in intersted concept. This project will help you ***encrypt/decrypt*** a file passed as input.


## How to use :
```bash
    $ ./cryp.exe -option yourFile.txt
```
Option can be <span style="color: lightblue">encryption </span>
or <span style="color: lightblue">decryption </span>.

Preform the following steps :

1. Download my repo.
2. Type these commads in your terminal:

    *to compile the project :*
    ```bash
    $ gcc cryp.c -o cryp.exe
    ```
    *to encypt/decryt your file :*
     ```bash
    $ ./cryp.exe -encryption _File.txt
    ```
     ```bash
    $ ./cryp.exe -decryption _File.txt
    ```
