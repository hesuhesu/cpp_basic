/*
map �ʱ�ȭ

 map<�ڷ���, �ڷ���> ���� 	 �⺻���� ������
 map<�ڷ���, �ڷ���> ����(���� �ڷ����� ����) 	 map ����
 ����[Key] = ����	 = ���� ���� 
 

map �ݺ���(iterator)

 s.begin() 	 map�� ������ �Ǵ� �ּ� �� ��ȯ
 s.end() 	 map�� ������ �κп� ���� �ּ� �� ��ȯ(��Ȯ���� ������ �� ���鱸��)
 s.rbegin() 	 map�� ������ �κ��� ���������� ����
 s.rend() 	 map�� ù�� ° �κ��� ������������ ����
 s.cbegin() 	 begin()�� ���������� const�� ����.
 s.cend() 	 end()�� ���������� const�� ����
 s.crbegin() 	 rbegin()�� ���������� const�� ����
 s.crend() 	 rend()�� ���������� const�� ����


map�� �뷮(Capacity)

 empty() 	 ����ִٸ� true, �ƴϸ� false
 size() 	 ����Ǿ� �ִ� ũ��
 max_size() 	 ���� �� �ִ� �ִ� ũ��


map�� ��� ����(Access)

 m[key ��]	 key ���� ���� ��� ����(���� �˻� x)
 m.at(key ��)	 key ���� ���� ��� ����(���� �˻� o)


map�� ����, ����(Modifiers)

 m.insert() 	 m�� �� ����
 m.erase() 	 m�� ����� ��� ����
 m1.swap() 	 m1�� m2�� ���� ��ȯ
 m.clear() 	 m�� ��ҵ� ���� ����
 m.emplace() 	 move()�� ����� ��ü�� ����
 m.emplace_hint()	 ���Ե� ��ġ�� ���� ��Ʈ�� ���� ����


map�� ���(Operations)

 find()	 key���� ��ġ�� ã�� �� ��ȯ
 count()	 �ش� key���� �ִ� ���� ������ ��ȯ (�ִٸ� ������ 1 ��ȯ)
 lower_bound()	 map�� ���ϴ� key���� iterator�� ��ȯ
 upper_bound() 	 map�� ���ϴ� key���� iterator�� ��ȯ
 equal_range()	 pair���·� ��ȯ�Ǹ� �����Ѱ��� �������� ���� �� ���� ��� ����

*/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    map<char, int> m;

    m['a'] = 1;
    m['b'] = 2;
    m['c'] = 3;
    m['d'] = 4;
    m['e'] = 5;
    m['f'] = 6;

    //****** find(), count() ******//

    if (m.find('a') != m.end())
        cout << "find : a" << endl;
    else
        cout << "not find" << endl;
    //output : find : a

    if (m.find('z') != m.end())
        cout << "find : z" << endl;
    else
        cout << "not find" << endl;
    //output : not find

    cout << m.count('a') << endl;    //output : 1
    cout << m.count('c') << endl;    //output : 1
    cout << m.count('z') << endl;    //output : 0


    //******* lower_bound(), upper_bound() ******//

    m.erase(m.lower_bound('c'), m.upper_bound('e'));
    for (auto itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
    //output : a 1, b 2, f 6

    pair <map<char, int>::iterator, map<char, int>::iterator> itr;
    itr = m.equal_range('a');

    cout << itr.first->first << " " << itr.first->second << endl;
    cout << itr.second->first << " " << itr.second->second << endl;
    //output : a 1, b 2


    return 0;
}