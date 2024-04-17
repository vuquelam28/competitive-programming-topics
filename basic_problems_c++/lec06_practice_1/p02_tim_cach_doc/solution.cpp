/*
Phân tách chữ số hàng chục và hàng đơn vị.

Hàng chục: n / 10;
Hàng đơn vị: n % 10;

Hàng chục: muoi, hai muoi, ba muoi,..., chin muoi
Hàng đơn vị: mot, hai, ba, bon,..., chin 
*/

#include <iostream>

using namespace std;

main()
{
    int n;
    cin >> n;
    
    int first_digit = n / 10, last_digit = n % 10;
    switch (first_digit)
    {
        case 1: 
            cout << "Muoi ";
            break;
        case 2: 
            cout << "Hai muoi ";
            break;
        case 3:
            cout << "Ba muoi ";
            break;
        case 4: 
            cout << "Bon muoi ";
            break;
        case 5: 
            cout << "Nam muoi ";
            break;
        case 6:
            cout << "Sau muoi ";
            break;
        case 7: 
            cout << "Bay muoi ";
            break;
        case 8: 
            cout << "Tam muoi ";
            break;
        case 9:
            cout << "Chin muoi ";
            break;
    }
    
    switch (last_digit)
    {
        case 1: 
            cout << "mot";
            break;
        case 2: 
            cout << "hai";
            break;
        case 3:
            cout << "ba";
            break;
        case 4: 
            cout << "bon";
            break;
        case 5: 
            cout << "nam";
            break;
        case 6:
            cout << "sau";
            break;
        case 7: 
            cout << "bay";
            break;
        case 8: 
            cout << "tam";
            break;
        case 9:
            cout << "chin";
            break;
    }
}