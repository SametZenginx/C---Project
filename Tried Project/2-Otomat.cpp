#include <iostream>
using namespace std;
class KolaMakinesi{
    float fiyat;
    int sayi;
    public:
        void ilkYukleme(float f=2.5,int s=100);
        void kolaVerme();
        void goster();
};
void KolaMakinesi::ilkYukleme(float f,int s){
    fiyat = f;
    sayi = s;
}
void KolaMakinesi::goster(){
    cout << "Kolanin fiyati: " << fiyat << endl;
    cout << "Kalan kolanin sayisi: " << sayi << endl;
}
void KolaMakinesi::kolaVerme(){
    cout << "Kolanin fiyati: " << fiyat << endl;
    float girilenPara;
    cout << "Odemeniz ne kadardir: ";
    cin >> girilenPara;
    if ((girilenPara>=2.5)&&(sayi>0)){
        cout << "Kolanizi aliniz." << endl;
        sayi -= 1;
        float paraUstu;
        paraUstu = girilenPara-fiyat;
        if (paraUstu==0)
            cout << "Paraüstünüz yok." << endl;
        else
            cout << "Paraüstünüz: " << paraUstu << endl;
    }
}
int main(){
    KolaMakinesi v;
    v.ilkYukleme();
    v.kolaVerme();
    v.goster();
}