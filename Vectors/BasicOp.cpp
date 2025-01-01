#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector decleration

    vector<int> v;

    cout << "Size "<< v.size() << endl;
    cout<< "Capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size "<< v.size() << endl;
    cout<< "Capacity " << v.capacity() << endl;

     v.push_back(2);
    cout << "Size "<< v.size() << endl;
    cout<< "Capacity " << v.capacity() << endl;

    v.push_back(4);
    cout << "Size "<< v.size() << endl;
    cout<< "Capacity " << v.capacity() << endl;
    
//to delete last element
    v.pop_back();
    cout << "size "<<v.size()<< endl;








    return 0;
}