
int f(){
    return 1;
}

int g(int a){
    return a;
}

int h(int a1, int a2){
    a1++;
    a2--;
    return a1+a2;
}

int i(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8){
    a1++;
    a2--;
    return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
}

int main(){
    f();
    g(123);
    h(2,3);
    return 0;
}
