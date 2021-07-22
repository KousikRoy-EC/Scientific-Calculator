#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int g, l = 1;
class math
{
private:
public:
    void squareroot();
    void log();
    void SQUARE();
    void trignometry();
    void binary();
    int fact(int h)
    {
        {
            while (h > 0)
            {
                l = l * h;
                h--;
            }
        }

        cout << "FACTORIAL OF NO IS : " << l << endl;
    }
};

void math::squareroot()
{

    int d;
    float sq;
    cout << "ENTER A NO TO FIND ITS SQUARE ROOT : ";
    cin >> d;
    sq = sqrt(d);
    cout << "THE SQUARE ROOT OF THE NO IS : " << sq << endl;
}

void math::log()
{

    int l;
    float lq;
    cout << "ENTER A NO TO FIND ITS log : ";
    cin >> l;
    lq = log10(l);
    cout << "THE SQUARE OF THE NO IS : " << lq << endl;
}

void math::SQUARE()
{

    int e;
    cout << "ENTER A NO TO FIND ITS SQUARE : ";
    cin >> e;

    cout << "THE SQUARE OF THE NO IS : " << e * e << endl;
}

void math ::trignometry()
{
    string st, k = "sin", n = "cos", q = "tan", e = "cot", s = "sec", v = "cosec";
    int a;
    cout << "ENTER TRIGNOMETRY FUNCTION :";
    cin >> st;
    cout << "ENTER ANGLE :";
    cin >> a;
    if (st == k && a == 0)
    {
        cout << " 0 ";
    }
    else if (st == k && a == 30)
    {
        cout << " 1/2 ";
    }
    else if (st == k && a == 45)
    {
        cout << " 1/√2";
    }
    else if (st == k && a == 60)
    {
        cout << " √3/2 ";
    }
    else if (st == k && a == 90)
    {
        cout << " 1 ";
    }

    if (st == n && a == 0)
    {
        cout << " 1 ";
    }
    else if (st == n && a == 30)
    {
        cout << " √3/2 ";
    }
    else if (st == n && a == 45)
    {
        cout << " V2/2 ";
    }
    else if (st == n && a == 60)
    {
        cout << " 1/2 ";
    }
    else if (st == n && a == 90)
    {
        cout << " 0 ";
    }

    if (st == q && a == 0)
    {
        cout << " 0 ";
    }
    else if (st == q && a == 30)
    {
        cout << " 1/√3 ";
    }
    else if (st == q && a == 45)
    {
        cout << " 1 ";
    }
    else if (st == q && a == 60)
    {
        cout << " √3 ";
    }
    else if (st == q && a == 90)
    {
        cout << " NOT DEFINED ";
    }

    if (st == e && a == 0)
    {
        cout << " NOT DEFINED ";
    }
    else if (st == e && a == 30)
    {
        cout << " √3 ";
    }
    else if (st == e && a == 45)
    {
        cout << " 1 ";
    }
    else if (st == e && a == 60)
    {
        cout << " 1/√3 ";
    }
    else if (st == e && a == 90)
    {
        cout << " 0 ";
    }

    if (st == v && a == 0)
    {
        cout << " NOT DEFINED ";
    }
    else if (st == v && a == 30)
    {
        cout << " 2 ";
    }
    else if (st == v && a == 45)
    {
        cout << " √2 ";
    }
    else if (st == v && a == 60)
    {
        cout << " 2/√3 ";
    }
    else if (st == v && a == 90)
    {
        cout << " 1 ";
    }

    if (st == s && a == 0)
    {
        cout << " 1 ";
    }
    else if (st == s && a == 30)
    {
        cout << " 2/√3 ";
    }
    else if (st == s && a == 45)
    {
        cout << " √2 ";
    }
    else if (st == s && a == 60)
    {
        cout << " 2 ";
    }
    else if (st == s && a == 90)
    {
        cout << " NOT DEFINED ";
    }
}

void math::binary()
{
    int bin, bi[6], temp, i;
    cout << "ENTER THE NO TO FIND ITS BINARY REPRESENTATION :";
    cin >> bin;
    for (i = 0; bin > 0; i++)
    {

        bi[i] = bin % 2;
        bin = bin / 2;
    }

    cout << "BINARY OF NO IS : ";
    for (int n = (i - 1); n >= 0; n--)
    {
        cout << bi[n];
    }
}

int main()
{
    math m1;
    int n;
    char x;
    cout << " < SCIENTIFIC CALCULATOR > \n \n"
         << endl;
    do
    {

        cout << "ENTER WHICH OPERATION YOU WANT TO PERFORM : \n"
             << endl;

        cout << " 1. SQUARE ROOT " << endl;
        cout << " 2. LOGARITHM VALUE " << endl;
        cout << " 3. SQUARE " << endl;
        cout << " 4. TRIGNOMETRIC VALUE " << endl;
        cout << " 5. FACTORIAL" << endl;
        cout << " 6. BINARY OF NO " << endl;
        cin >> n;

        switch (n)
        {
        case 1:
            m1.squareroot();
            break;
        case 2:
            m1.log();
            break;
        case 3:
            m1.SQUARE();
            break;
        case 4:
            m1.trignometry();
            break;
        case 5:
            cout << "ENTER THE NO TO FIND IT'S FACTORIAL :" << endl;
            cin >> g;
            m1.fact(g);
            break;
        case 6:
            m1.binary();
            break;
        case 7:
            exit(1);
            break;

        default:
            cout << " OPTION IS INVALID !!" << endl;
            break;
        }

        cout << " \n DO YOU WANT TO CONTINUE THEN PRESS 'Y' ELSE PRESS 'N' TO EXIT >";
        x = getch();
        if (x == 'N' || x == 'n')
        {
            exit(0);
        }
    } while (x == 'Y' || x == 'y');

    return 0;
}