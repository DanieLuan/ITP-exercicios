#include "findValues.h"

int minor(int n, int vet[n]){
    int minor = 0;
    minor = vet[0];
    for(int i = 0; i < n; i++){
        if(vet[i] <= minor){
            minor = vet[i];
        }
    }
    return minor;
}

int major(int n, int vet[n]){
    int major;
    major = vet[0];
    for(int i = 0; i < n; i++){
        if(vet[i] >= major){
            major = vet[i];
        }
    }
    return major;
}