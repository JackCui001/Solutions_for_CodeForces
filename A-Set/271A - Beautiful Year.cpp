#include <bits/stdc++.h>
using namespace std;

int main()
{
	int y,i;
	string s;
	cin >> y;
	while(1)
	{
		stringstream ss;
		y++;
		ss<<y;
		ss>>s;
		if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3])
		{
			break;
		}
	}
	cout << y << endl;
    return 0;
}
