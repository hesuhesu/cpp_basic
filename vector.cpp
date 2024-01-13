/*
<Vector�� �ʱ�ȭ>
 
 vector<�ڷ���> ������	���� ����
 vector<�ڷ���> ������(����)	���ڸ�ŭ ���� ���� �� 0���� �ʱ�ȭ
 vector<�ڷ���> ������ = { ����1, ����2, ����3... }	���� ���� �� ������ ���� ������ �ʱ�ȭ
 vector<�ڷ���> ������[] = {, } 	���� �迭(2���� ����)���� �� �ʱ�ȭ(���� ����, ���� ����)
 vector<vector<�ڷ���>> ������	 2���� ���� ����(���� �� ��� ����)
 vector<�ڷ���>������.assign(����, �ʱ�ȭ�� ��)	 ������ ���� ������ �ش� ������ �ʱ�ȭ


<Vector�� Iterators>

 v.begin()	 ���� �������� �ּ� �� ��ȯ
 v.end() 	 ���� (���κ� + 1) �ּҰ� ��ȯ
 v.rbegin() (revers begin) 	 ������ �� ������ ���������� ��ȯ
 v.rend() (revers end)	 ������ (���� + 1) ������ �� �κ����� ��ȯ


<Vector Element access(������ ��� ����)>

 v.at(i) 	 ������ i��° ��� ���� (���� �˻���)
 v.[i] (operator []) 	 ������ i��° ��� ���� (���� �˻� ����)
 v.front() 	 ������ ù��° ��� ����
 v.back() 	 ������ ������ ��� ����


<Vector�� ��� ����>

 v.push_back() 	 ������ ������ �κп� ���ο� ��� �߰�
 v.pop_back()	 ������ ������ �κ� ����
 v.insert(������ ��ġ�� �ּ� ��, ���� ��)	 ����ڰ� ���ϴ� ��ġ�� ��� ����
 v.emplace(������ ��ġ�� �ּ� ��, ���� ��)  	 ����ڰ� ���ϴ� ��ġ�� ��� ����(move�� ���� ��������� X)
 v.emplace_back()	 ������ ������ �κп� ���ο� ��� �߰�(move�� ���� ��������� X)
 v.erase(������ ��ġ) or v.erase(������ġ, ����ġ)	 ����ڰ� ���ϴ� index���� ��Ҹ� �����.
 v.clear()	 ������ ��� ��Ҹ� �����.(return size = 0)
 v.resize(���� ��)	 ������ ����� �����Ѵ�.(���� �ʰ��� 0���� �ʱ�ȭ)
 v.swap(���� ����)	 ���Ϳ� ���͸� �����Ѵ�.


<Vector Capacity(���� �뷮)>

 v.empty()	 ���Ͱ� ������̸� true, ���� �ִٸ� false
 v.size() 	 ������ ũ�� ��ȯ
 v.capacity()	 heap�� �Ҵ�� ������ ����ũ��(�ִ�ũ��) ��ȯ
 v.max_size()	 ���Ͱ� system���� ����� �� �� �ִ� �ִ� ũ�� ��ȯ
 v.reserve(����)	 ������ ũ�� ����
 v.shrink_to_fit()	 capacity�� ũ�⸦ ������ ���� ũ�⿡ ����

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<vector<int>> vector1;

	vector<int> subvector0;
	vector<int> subvector1;
	vector<int> subvector2;

	vector1.push_back(subvector0);
	vector1.push_back(subvector1);
	vector1.push_back(subvector2);

	vector1.at(0).push_back(1);
	vector1.at(0).push_back(2);
	vector1.at(0).push_back(3);

	vector1.at(1).push_back(2);
	vector1.at(1).push_back(3);
	vector1.at(1).push_back(4);
	vector1.at(1).push_back(5);

	vector1.at(2).push_back(5);
	vector1.at(2).push_back(6);
	vector1.at(2).push_back(7);

	for (int i = 0; i < vector1.size(); i++) {
		cout << "vector" << i << endl;
		for (int j = 0; j < vector1[i].size(); j++) {
			cout << vector1[i].at(j) << endl;
		}
		cout << endl;
	}


	return 0;
}