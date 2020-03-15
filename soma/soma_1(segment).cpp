#include<iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int remaind = n % 2;//³ª¸ÓÁö
    int share = n / 2;//¸ò

    
	if (remaind == 1) {
		for (int i = 0; i < share - 1; i++)
		{	
			cout << 1;
		}
		cout << 7 << '\n';
	}
	else if (remaind == 0) {
		for (int i = 0; i < share; i++)
		{
			cout << 1;
		}
		cout << '\n';
	}

}