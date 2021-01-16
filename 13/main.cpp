1 задание:
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    double x;
    cin >> x;
    for (double i = 0.1; i <= 1.0; i += 0.1) {
        cout << i << "кг от " << x << " = " << x * i << endl;
    }
}

2 задание:
int main() {
    setlocale(LC_ALL, "rus");
    double n, i = 0;
    double x=1.0, z=1.1;
    cin >> n;
    while (i != n) {
        x *= z;
        z += 0.1;
        i++;

    }
    cout << x;

}

3 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int n, x=0;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        x += i;
        cout << x << endl;

    }
}

4 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    double a, s=0;
    int n;
    cin >> a >> n;
    for (int i=0; i<=n; i++){
        s += pow(a, i);

    }
    cout << s;
}

5 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    double a, s=0;
    int n;
    cin >> a >> n;
    double a2 = 1, rez = 1;
    for (int i = 2; i <= n; ++i)
    {
        a2 *= -a;
        rez += a2;
        
    }
    cout << rez;
    return 0;
}
