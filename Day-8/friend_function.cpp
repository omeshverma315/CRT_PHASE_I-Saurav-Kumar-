#include<iostream>
using namespace std;
class Area{
    private:
    int length;
    int width;
    public:
    void setSides(int l,int w){
        length=l;
        width=w;
    }
    friend void showArea(Area a);
};
void showArea(Area b){
    int area=b.length*b.width;
    cout<<"Area of Rectangle: "<<area<<endl;
}
int main(){
    Area a1;
    a1.setSides(5,10);
    showArea(a1);
    return 0;
}