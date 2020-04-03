#include <iostream>
#include <cmath>

using namespace std;

//ჯამი
template <class A>
A sum (A *a, A *b)
{
    return *a + *b;
}
//სხვაობა
template <class B>
B diff (B *a, B *b)
{
    return *a - *b;
}
//ნამრავლი
template <class C>
C mult (C *a, C *b)
{
    return *a * *b;
}
//განაყოფი
template <class D>
D dev (D *a, D *b)
{
    if(*b == 0){
        cout<<"Can not be divided by ";
        return 0;
    }
    else
        return *a / *b;
}
//კვადრატული ფესვი
template <class E>
E mySqrt (E *a)
{
    return sqrt(*a);
}
//ხარისხში აყვანა
template <class F>
F powN (F *a, F *b)
{
    F temp;
    if (*b == 0)
        return 1;
    else {
        temp = 1;
        for (int i = 0; i < *b; i++)
            temp *= *a;
        return temp;
    }
}
template <class G>
G run(G *a, G *b, int c)
{
    switch (c) {
        case 1:
            return sum(a, b);
        case 2:
            return diff(a, b);
        case 3:
            return mult(a, b);
        case 4:
            return dev(a, b);
        case 5:
            return mySqrt(a);
        case 6:
            return powN(a, b);
        default:
            cout<<"Choose Relevant Number From The Given List Please";
            return 0;
    }
}

int   main ( )
{
    int    *a, *b, c, d;
    double *x, *y, q, w;
    int     act,numType;
    bool    check = false;

    cout<<"--------------------------------- \n";
    cout<<"Welcome to the \"Imena Calculator\"\n";
    cout<<"--------------------------------- \n";

    cout<<"Choose an action you want to continue with: \n"
        <<"1 - \"+\" \n"
        <<"2 - \"-\" \n"
        <<"3 - \"*\" \n"
        <<"4 - \"/\" \n"
        <<"5 - \"Root\" \n"
        <<"6 - \"N Pow\" \n";
    cout<<"Please choose a Relevant Number from the given List: ";
    cin>>act;

    switch (act)
    {
        case 1:
            cout<<"\n--------------------------------- \n";
            cout<<"Your chosen action is plus \"+\"";
            cout<<"\n--------------------------------- \n";
            check = true;
            break;
        case 2:
            cout<<"\n--------------------------------- \n";
            cout<<"Your chosen action is minus \"-\"";
            cout<<"\n--------------------------------- \n";
            check = true;
            break;
        case 3:
            cout<<"\n--------------------------------- \n";
            cout<<"Your chosen action is multiply \"*\"";
            cout<<"\n--------------------------------- \n";
            check = true;
            break;
        case 4:
            cout<<"\n--------------------------------- \n";
            cout<<"Your chosen action is division \"/\"";
            cout<<"\n--------------------------------- \n";
            check = true;
            break;
        case 5:
            cout<<"\n--------------------------------- \n";
            cout<<"Your chosen action is root ";
            cout<<"\n--------------------------------- \n";
            check = true;
            break;
        case 6:
            cout<<"\n--------------------------------- \n";
            cout<<"Your chosen action is pow \n";
            cout<<"FIRST is your number and SECOND is the Power level";
            cout<<"\n--------------------------------- \n";
            check = true;
            break;
        default:
            cout<<"Choose Relevant Number From The Given List Please";
    }

    if(check == true) {

        cout << "Choose a number type: \n";
        cout << "1 - \"Integer\"\n"
             << "2 - \"Double\"\n";
        cout << "Please choose a Relevant Number from the given List: ";
        cin >> numType;

        cout << "\n--------------------------------- \n";

        switch (numType) {
            case 1:
                cout << "Your chosen number type is Integer";
                cout << "\n--------------------------------- \n";
                cout << "Input desired numbers: ";
                a = new int;
                b = new int;
                cin >> c >> d;
                if (!cin.fail()) {
                    *a = c;
                    *b = d;
                    cout << "Result: " << run(a, b, act) << endl;
                    delete a, b;
                }
                else cout<< "Please type only NUMERIC values \n";
                break;
            case 2:
                cout << "Your chosen number type is Double";
                cout << "\n--------------------------------- \n";
                cout << "Input desired numbers: ";
                x = new double;
                y = new double;
                cin >> q >> w;
                //დავკასტოთ Double-ი Int-\ად
                c = (int) q;
                d = (int) w;
                if (!cin.fail()) {
                    *x = q;
                    *y = w;
                    cout << "Result: " << run(x, y, act) << endl;
                    delete x, y;
                }
                else cout<< "Please type only NUMERIC values \n";
                break;
            default:
                cout << "Please choose a Relevant Number from the given List: ";
        }
    }
    return   0 ;
}
