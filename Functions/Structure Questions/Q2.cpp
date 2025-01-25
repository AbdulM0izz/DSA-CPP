#include <iostream>
#include <string>
using namespace std;
struct product{
    int productId;
    string name;
    float price;
    int quantity;
};

//take input
void takeinput(product products[], int n){
    for(int i=0; i<n; i++){
        cout << "Product ID: "<<endl;
        cin >>products[i].productId;

        cout <<"Product Name: "<<endl;
        cin>> products[i].name;

        cout << "Product Price: "<<endl;
        cin>> products[i].price;

        cout <<"Quantity: "<<endl;
        cin >> products[i].quantity;
    }
}
//calculate and display results;
void calculate(product products[], int n){
    cout <<"\nTotal Cost of each product: \n";
    for(int i=0; i<n; i++){
        float totalCost = products[i].price * products[i].quantity;
        cout <<"Product id: "<<products[i].productId;
        cout <<"Name: "<<products[i].name;
        cout <<" Total cost: "<<totalCost<<endl;
    }
}
int main()
{
    const int productnums = 3;
    product products[productnums];

    takeinput(products,productnums);

    calculate(products,productnums);






    return 0;
}
