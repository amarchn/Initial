#include <iostream>
#include <string.h>
using namespace std;
class onepiece{
    public:
    int op=1;
}o;
class zoro{
    public:
    int dir=1;
}z;
class luffy : public onepiece,zoro {
    public:
    void lfy() {
        if(op==1){
            cout<<"Ok!!!, First Condition is fullfilled now lets see if zoro is in senses ?"<<endl;
            if(dir==1){
                cout<<"Dem you found the Op which is Buggy D. Clown"<<endl;
            }
        }
    }
}l;
int main(void){
    int opp;
    cout<<"Do you want the One Piece ? If yes then type 1 else go watch pogo"<<endl;
    cin>>opp;
    if(opp==1){
        l.lfy();
    }
    return 0;
};