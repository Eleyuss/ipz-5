#include <iostream>
#include <fstream>

using namespace std;
ofstream out;

// check up on integer and correct value of n
void checkN(float n) {
    if (n != (int)n || n < 2) {
        throw "incorrect value of n";
    }
}

// comparison of limits
void checkAB(int a, int b) {
    if (a > b) {
        throw "incorrect value of limits";
    }
}

// check up the value of step 
void checkH(int h) {
    if (h <= 0) {
        throw "incorrect value of step";
    }
}


//when x < 0
double xlower(float x, double y, double s, float n)
{
    y = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        s = 0;
        for (int j = 1; j <= n; j++)
        {
           s += (double)j / (j * j + j);
        }
        y = y + s;
        
    }

    return y;
}

//when x >= 0
double xhigher(float n, float y1, double y, float x) {
    for (int i = 1; i <= n - 1; i++) {
        y1 = y1 + i;
    }
    y = x - y1;

    return y;
}


//call of the functions(depends of x value)
double calculatey(float x, double y, double s, float n, float y1 = 0) {

    if (x < 0)
    {
        y = xlower(x, y, s, n);

    }
    else {
        y = xhigher(n, y1, y, x);
    }

    return y;
}



int main()
{
    float n, x = 0, y1 = 0;

    double y = 0, s = 0;

    int a, b, h;

    int switcher;

    try
    {

        cout << "Do you want to write the result in file(1- Yes, everything - No)?" << endl;
        cin >> switcher;

        cout << "Enter the value of n\n";
        cin >> n;

        checkN(n);

        cout << "Enter the limit from a" << endl;
        cin >> a;

        cout << "Enter the limit to b" << endl;
        cin >> b;

        checkAB(a, b);

        cout << "Enter the value of step" << endl;
        cin >> h;

        checkH(h);

        if (switcher == 1)
        {
            out.open("text.txt");
        }

        /// x calculation and 
        for (int i = a; i <= b; i++)
        {
            x = a + ((i - 1) * h);
            cout << " x =" << x << "; y =" << calculatey(x, y, s, n, y1) << endl;

            if (out.is_open()) {
                out << "x =" << x << "; y =" << calculatey(x, y, s, n, y1) << endl;
            }

        }

    }
    catch(const char* ex)
    {
        cout << ex << endl;
        return -1;
    }
 
    //close file
    out.close();

    return 0;
}







