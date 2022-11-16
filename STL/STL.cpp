#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	vector<int> v;
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	// 벡터안에 number가 있는지 찾는 기능
	int number = 50;
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		
		if (*it == number)
			cout << "right!" <<" " << *it<< endl;
	}

	auto itFind = find(v.begin(), v.end(), number);
	
	//벡터 안에 11의 배수가 있는지 찾는 기능
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		if (((*it) % 11) == 0 && *it>0)
			cout << "11의 배수가 있습니다!" <<" "<< *it<< endl;
		
	}
	
	auto ifFind = find_if(v.begin(), v.end(), [](int n) {return n % 11 == 0; });

	//벡터 안에 홀수를 찾는 기능
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		
		if ((*it % 2) != 0)
		{
			cout << count << " " << *it << endl;
			count++;
		}
	}

	auto ifFind = find_if(v.begin(), v.end(), [](int n) { return n % 2 != 0; });

	//벡터 안의 값들에 3을 곱하는 기능
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " 3배: " << (*it) * 3 << endl;
	}

	auto itMul = for_each(v.begin(), v.end(), [](int n) {return n = n * 3; });

	// 홀수인 데이터 삭제하는 기능
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		if ((*it % 2) != 0)
			it = v.erase(it);
		
	}

	
	v.erase(remove_if(v.begin(), v.end(), [](int n) {return n % 2 != 0; }), v.end());
}