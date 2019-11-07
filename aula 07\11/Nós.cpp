#include <iostream>
#include <string>

using namespace std;

struct No{
    int dado;
    struct No* no1;
    struct No* no2;
    struct No* no3;
};

No* criaNo(){
    No* no = new No;
    no->no1 = NULL;
    no->no2 = NULL;
    no->no3 = NULL;

    return no;
}

int main(){

    No* noA = criaNo();

    No* noB = criaNo();
    noA->no1 = noB;

    No* noC = criaNo();
    noA->no2 = noC;

    No* noD = criaNo();
    noA->no3 = noD;

    delete noA;
    delete noB;
    delete noC;
}