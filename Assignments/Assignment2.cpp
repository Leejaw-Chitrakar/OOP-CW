
#include <iostream>
using namespace std;

class cat {
    private:
        string breed,color;
        float weight;

    public:
        void setdetails(string Cbreed, string Ccolor, float Cweight){
            breed = Cbreed;
            color = Ccolor;
            weight = Cweight;
        }

        void display(){
            cout << "Cat Details:"<<endl;
            cout << "Breed: "<<breed<<endl;
            cout << "Color: "<<color<<endl;
            cout << "Weight: "<<weight<<"Kg"<<endl;
        }
};

int main() {
    cat c1;
    c1.setdetails("American Bobtail", "Cream", 5.6);
    c1.display();
    return 0;
}
