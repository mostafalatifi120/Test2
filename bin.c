#include <stdio.h>

int strlength(){
    int anzahl = 0;

    for (int i = 0; anzahl != "\0" ; i++){
        anzahl++;
    }    
    return anzahl;
}

int power(int base, int exp){
    for (int i = 0; i < exp; i++){
        base *= base;
    }
    return base;
}


int main(){



    return 0;
}

