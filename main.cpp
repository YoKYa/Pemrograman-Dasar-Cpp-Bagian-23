#include <iostream> 

using namespace std;

int A; // Variabel Global Bisa Diakses dimanapun

int main(){
    int B; // Variabel Lokal Hanya bisa diakses di fungsi main

    {
        int C; // Variabel Blok hanya bisa diakses pada blok
    }


    return 0;
}