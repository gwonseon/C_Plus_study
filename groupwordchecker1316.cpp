#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string word;
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		bool isgroup = true;

		cin >> word;
		
		word.erase(unique(word.begin(), word.end()), word.end());
		// 연속된 중복값 맨 뒤로 보내 제거

		sort(word.begin(), word.end()); // 정렬
		for (int k = 0; k < word.length() - 1; k++)
		{
			if (word[k] == word[k + 1])
			{
				// 중복이면 그룹 아님
				isgroup = false;
				break;
			}
		}
		if (isgroup)
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}