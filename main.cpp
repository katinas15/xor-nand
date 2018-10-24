#include <iostream>
#include <sstream>

using namespace std;

int XOR(int a, int b){
    return a ^ b;
}

int xor_formule(int a, int b){
    return ( (a | b) & ~(a & b) );
}

int nand(int a, int b){
    int pirmas = XOR(a,b);
    int antras = XOR(a, pirmas);
    int trecias = XOR(b, pirmas);
    
    return XOR(antras, trecias);
}

int main(int argumentCount, char* argumentVector[]) {
    stringstream ss;
    ss << argumentVector[1] << ' ' << argumentVector[2];
    int a,b;
    ss >> a >> b;
    
    cout<<"xor iprastas "<<XOR(a, b)<<endl;
    cout<<"xor formule "<<xor_formule(a, b)<<endl;
    cout<<"nand "<<nand(a, b)<<endl;
}
