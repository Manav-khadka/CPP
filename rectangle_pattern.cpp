#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "enter the number of row :-" << endl;
    cin >> rows;
    cout << "enter the number of columns :-" << endl;
    cin >> columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"*";

        }
        cout<<endl;
        
    }
    
}