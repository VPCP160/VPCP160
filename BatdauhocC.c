#include <stdio.h>

int ngaynam(int b){
    int k;
if(b%4==0){
    k=366;
}
else{
    k=365;
}
return k;
}
int ngaythang(int a, int b){
    int k;
if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12 ){
    k=31;
    }        
    else if(a==4 || a==6 || a==9 || a==11 ){
    k=30;
    }
    else if(a==2){
    if(b%4==0){
    k=29;
    }
    else{
    k=28;
    }}
    else{
    }
    return k;
}
int main(){
    int n, a, b;
    printf("So ngay trong mot thang, nam.\n--------------------\nHay chon mot phuong an:\n1-Thang\n2-Nam\nLua chon cua ban la: ");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("Hay nhap lan luot thang, nam ban muon:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        printf("Thang %d nam %d co %d ngay.", a, b, ngaythang(a, b));
        break;
        case 2:
        printf("Hay nhap mot nam ban muon: ");
        scanf("%d", &b);
        printf("Nam %d co %d ngay.", b, ngaynam(b));
        break;
        default:
        printf("Ban chi co the chon 1 hoac 2!\n-------------------");
    }
    return 0;
}
