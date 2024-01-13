/*
map 초기화

 map<자료형, 자료형> 변수 	 기본적인 선언방법
 map<자료형, 자료형> 변수(같은 자료형의 변수) 	 map 복사
 변수[Key] = 변수	 = 대입 연산 
 

map 반복자(iterator)

 s.begin() 	 map의 시작이 되는 주소 값 반환
 s.end() 	 map의 마지막 부분에 대한 주소 값 반환(정확히는 마지막 뒤 공백구간)
 s.rbegin() 	 map의 마지막 부분을 시작점으로 지정
 s.rend() 	 map의 첫번 째 부분을 마지막점으로 지정
 s.cbegin() 	 begin()과 동일하지만 const로 설정.
 s.cend() 	 end()와 동일하지만 const로 설정
 s.crbegin() 	 rbegin()과 동일하지만 const로 설정
 s.crend() 	 rend()와 동일하지만 const로 설정


map의 용량(Capacity)

 empty() 	 비어있다면 true, 아니면 false
 size() 	 저장되어 있는 크기
 max_size() 	 가질 수 있는 최대 크기


map의 요소 접근(Access)

 m[key 값]	 key 값에 대한 요소 접근(범위 검사 x)
 m.at(key 값)	 key 값에 대한 요소 접근(범위 검사 o)


map의 삽입, 삭제(Modifiers)

 m.insert() 	 m에 값 삽입
 m.erase() 	 m에 저장된 요소 삭제
 m1.swap() 	 m1과 m2를 서로 교환
 m.clear() 	 m의 요소들 전부 삭제
 m.emplace() 	 move()를 사용해 객체를 저장
 m.emplace_hint()	 삽입될 위치에 대한 힌트를 토대로 삽입


map의 기능(Operations)

 find()	 key값에 위치를 찾은 후 반환
 count()	 해당 key값에 있는 변수 갯수를 반환 (있다면 무조건 1 반환)
 lower_bound()	 map의 원하는 key값의 iterator를 반환
 upper_bound() 	 map의 원하는 key값의 iterator를 반환
 equal_range()	 pair형태로 반환되며 지정한곳을 기준으로 다음 값 까지 기억 가능

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