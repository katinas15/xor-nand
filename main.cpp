#include <iostream>
#include <sstream>

using namespace std;

bool XOR(int a, int b){
    return a ^ b;
}

bool xor_formule(int a, int b){
    return (a | b) & ~(a & b);
}

bool nand(int a,int b){
    return ~(a & b);
}

bool nand_schema(int a, int b){
    bool pirmas = nand(a,b);
    bool antras = nand(a, pirmas);
    bool trecias = nand(b, pirmas);
    
    return nand(antras, trecias);
}

int main(int argumentCount, char* argumentVector[]) {
//    stringstream ss;
//    ss << argumentVector[1] << ' ' << argumentVector[2];
//    int a,b;
//    ss >> a >> b;
    int a,b;
    cin>>a>>b;
    cout<<"xor iprastas "<<XOR(a, b)<<endl;
    cout<<"xor formule "<<xor_formule(a, b)<<endl;
    cout<<"nand schema"<<nand_schema(a, b)<<endl;
}
