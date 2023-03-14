#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Please enter a number between 3 and 9(inclusive): " <<endl;
    cin>>s;

    if(3<=s && s<=9){
        for (int i = 0; i < s*2-1; i++)
        {
            int num_stars;
            if (i < s) {
                num_stars = i + 1;
            } else {
                num_stars = 2*s - i - 1;
            }


            for (int j = 0; j < num_stars; j++){
                cout << "*";}

            cout << "\n";
        }

    }
    else{
        cout<<"Please enter valid value! "<<endl;
    }
    return 0;
}
