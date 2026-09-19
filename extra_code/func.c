#include<stdio.h>
void david(int u){
    u*=100;
    printf("%d ", u);
}
void Mohana_maam(int &x){
    x=x+200;
    printf("%d ", x);
}
int main(){
     int v=100;
     printf("%d ", david(v));
     int y=3;
     printf("%d", Mohana_maam(y));
     y=5;
     printf("%d", Mohana_maam(y));
}