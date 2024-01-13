/*
<Vector의 초기화>
 
 vector<자료형> 변수명	백터 생성
 vector<자료형> 변수명(숫자)	숫자만큼 백터 생성 후 0으로 초기화
 vector<자료형> 변수명 = { 변수1, 변수2, 변수3... }	백터 생성 후 오른쪽 변수 값으로 초기화
 vector<자료형> 변수명[] = {, } 	백터 배열(2차원 백터)선언 및 초기화(열은 고정, 행은 가변)
 vector<vector<자료형>> 변수명	 2차원 백터 생성(열과 행 모두 가변)
 vector<자료형>변수명.assign(범위, 초기화할 값)	 백터의 범위 내에서 해당 값으로 초기화


<Vector의 Iterators>

 v.begin()	 백터 시작점의 주소 값 반환
 v.end() 	 백터 (끝부분 + 1) 주소값 반환
 v.rbegin() (revers begin) 	 백터의 끝 지점을 시작점으로 반환
 v.rend() (revers end)	 백터의 (시작 + 1) 지점을 끝 부분으로 반환


<Vector Element access(백터의 요소 접근)>

 v.at(i) 	 백터의 i번째 요소 접근 (범위 검사함)
 v.[i] (operator []) 	 백터의 i번째 요소 접근 (범위 검사 안함)
 v.front() 	 백터의 첫번째 요소 접근
 v.back() 	 백터의 마지막 요소 접근


<Vector에 요소 삽입>

 v.push_back() 	 백터의 마지막 부분에 새로운 요소 추가
 v.pop_back()	 백터의 마지막 부분 제거
 v.insert(삽입할 위치의 주소 값, 변수 값)	 사용자가 원하는 위치에 요소 삽입
 v.emplace(삽입할 위치의 주소 값, 변수 값)  	 사용자가 원하는 위치에 요소 삽입(move로 인해 복사생성자 X)
 v.emplace_back()	 백터의 마지막 부분에 새로운 요소 추가(move로 인해 복사생성자 X)
 v.erase(삭제할 위치) or v.erase(시작위치, 끝위치)	 사용자가 원하는 index값의 요소를 지운다.
 v.clear()	 백터의 모든 요소를 지운다.(return size = 0)
 v.resize(수정 값)	 백터의 사이즈를 조정한다.(범위 초과시 0으로 초기화)
 v.swap(백터 변수)	 백터와 백터를 스왑한다.


<Vector Capacity(백터 용량)>

 v.empty()	 백터가 빈공간이면 true, 값이 있다면 false
 v.size() 	 백터의 크기 반환
 v.capacity()	 heap에 할당된 백터의 실제크기(최대크기) 반환
 v.max_size()	 백터가 system에서 만들어 질 수 있는 최대 크기 반환
 v.reserve(숫자)	 백터의 크기 설정
 v.shrink_to_fit()	 capacity의 크기를 백터의 실제 크기에 맞춤

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