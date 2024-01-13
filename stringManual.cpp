#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 1. 생성자 예제

    cout << "-------------------------------------------\n              1. 생성자 예제\n-------------------------------------------\n\n";

    string t_1("Hello!");
    const char* p1_1 = "Hello!";
    const char* p2_1 = p1_1 + 6;

    string s1_1;
    string s2_1("Hello!");
    string s3_1("Hello!", 5);
    string s4_1(5, 'H');
    string s5_1(t_1.begin(), t_1.end());
    string s6_1(p1_1, p2_1);

    cout << "s1()\t\t: " << s1_1 << '\n';
    cout << "s2(str)\t\t: " << s2_1 << '\n';
    cout << "s3(str, n)\t: " << s3_1 << '\n';
    cout << "s4(n, c)\t: " << s4_1 << '\n';
    cout << "s5(iter1, iter2): " << s5_1 << '\n';
    cout << "s6(p1, p2)\t: " << s6_1 << '\n';

    // 2. 멤버함수 append(), +=, push_back() 예제

    cout << "-------------------------------------------\n              2. 멤버함수 append(), +=, push_back()\n-------------------------------------------\n\n";

    string s1_2("Hello");
    string s2_2("Hello");
    string s3_2("Hello");
    string s4_2("Hello");
    string s5_2("Hello");
    string s6_2("Hello");
    string s7_2("Hello");
    string s8_2("Hello");
    string s9_2("Hello");
    string s10_2("Hello");

    string t_2(" string!");
    const char* p1_2 = " string!";
    const char* p2_2 = p1_2 + 8;

    s1_2.append(t_2);//s1 + t
    s2_2.append(t_2, 0, 4);//s2 + (t문자열에서 0부터 4번째 인덱스 까지 추가)
    s3_2.append(" string!");
    s4_2.append(" string!", 5);//주어진 문자열에서 5개 문자 추가
    s5_2.append(t_2.begin(), t_2.end());
    s6_2.append(p1_2, p2_2);
    s7_2.append(5, 's');//주어진 문자 c를 n번 추가
    s8_2 += t_2;
    s9_2 += " string!";

    for (string::iterator it = t_2.begin(); it != t_2.end(); it++)
        s10_2.push_back((*it));

    cout << "s1.append(s)\t\t:" << s1_2 << '\n';
    cout << "s2.append(s, off, n)\t:" << s2_2 << '\n';
    cout << "s3.append(str)\t\t:" << s3_2 << '\n';
    cout << "s4.append(str, n)\t:" << s4_2 << '\n';
    cout << "s5.append(iter1, iter2)\t:" << s5_2 << '\n';
    cout << "s6.append(p1, p2)\t:" << s6_2 << '\n';
    cout << "s7.append(n, c)\t\t:" << s7_2 << '\n';
    cout << "s8+=s\t\t\t:" << s8_2 << '\n';
    cout << "s9+=str\t\t\t:" << s9_2 << '\n';
    cout << "s10.push_back(c)\t:" << s10_2 << '\n';

    // 3. 멤버 함수 c_str(), data()

    cout << "-------------------------------------------\n              3. 멤버 함수 c_str(), data()\n-------------------------------------------\n\n";

    string s_3("Hello!");
    const char* str_3;
    const char* buf_3;

    str_3 = s_3.c_str();
    buf_3 = s_3.data();

    cout << "'\\0' 문자로 끝나는 문자열: " << str_3 << '\n';
    cout << "'\\0' 문자를 포함하지 않는 문자열 배열: ";
    for (int i = 0; i < s_3.size(); i++)
        cout << buf_3[i];
    cout << '\n';

    // 4. 멤버함수 compare()

    cout << "-------------------------------------------\n              4. 멤버함수 compare()\n-------------------------------------------\n\n";

    string s1_4("ABCDEF");
    string s2_4("CBAABC");
    const char* s3_4 = "CBAABC";

    std::cout << "s1.compare(s2) : " << s1_4.compare(s2_4) << '\n'; // ABCDEF < CBAABC
    std::cout << "s1.compare(off, n, s2) : " << s1_4.compare(3, 3, s2_4) << '\n'; //ABCDEF > ABC
    std::cout << "s1.compare(off1, n1, s1, off2, n2) : " << s1_4.compare(0, 3, s2_4, 3, 3) << '\n'; // ABC == ABC
    std::cout << "s1.compare(s3) : " << s1_4.compare(s3_4) << '\n'; // ABCDEF < CBAABC
    std::cout << "s1.compare(off, n, s3) : " << s1_4.compare(3, 3, s3_4) << '\n'; //ABCDEF > ABC
    std::cout << "s1.compare(off1, n1, s3, n2) : " << s1_4.compare(2, 1, s3_4, 1) << '\n'; //C == C

    // 5. 멤버함수 find()

    cout << "-------------------------------------------\n              5. 멤버함수 find()\n-------------------------------------------\n\n";

    string str_5("There are two needles in this haystack with needles.");
    string str2_5("needle");

    // different member versions of find in the same order as above:
    size_t found = str_5.find(str2_5);
    if (found != string::npos)
        cout << "first 'needle' found at: " << found << '\n';

    found = str_5.find("needles are small", found + 1, 6);
    if (found != string::npos)
        cout << "second 'needle' found at: " << found << '\n';

    found = str_5.find("haystack");
    if (found != string::npos)
        cout << "'haystack' also found at: " << found << '\n';

    found = str_5.find('.');
    if (found != string::npos)
        cout << "Period found at: " << found << '\n';

    // let's replace the first needle:
    str_5.replace(str_5.find(str2_5), str2_5.length(), "preposition");
    cout << str_5 << '\n';

    // 6. 멤버함수 insert()

    cout << "-------------------------------------------\n              6. 멤버함수 insert()\n-------------------------------------------\n\n";

    string str_6 = "to be question";
    string str2_6 = "the ";
    string str3_6 = "or not to be";
    string::iterator it_6;

    // used in the same order as described above:
    str_6.insert(6, str2_6);                 // to be (the )question
    cout << str_6 << '\n';
    str_6.insert(6, str3_6, 3, 4);             // to be (not )the question
    cout << str_6 << '\n';
    str_6.insert(10, "that is cool", 8);    // to be not (that is )the question
    cout << str_6 << '\n';
    str_6.insert(10, "to be ");            // to be not (to be )that is the question
    cout << str_6 << '\n';
    str_6.insert(15, 1, ':');               // to be not to be(:) that is the question
    cout << str_6 << '\n';
    it_6 = str_6.insert(str_6.begin() + 5, ','); // to be(,) not to be: that is the question
    str_6.insert(str_6.end(), 3, '.');       // to be, not to be: that is the question(...)
    cout << str_6 << '\n';
    str_6.insert(it_6 + 2, str3_6.begin(), str3_6.begin() + 3); // (or )

    cout << str_6 << '\n';

    // 7. 멤버함수 replace()

    cout << "-------------------------------------------\n              7. 멤버함수 replace()\n-------------------------------------------\n\n";

    string base_7 = "this is a test string.";
    string str2_7 = "n example";
    string str3_7 = "sample phrase";
    string str4_7 = "useful.";

    // replace signatures used in the same order as described above:

    // Using positions:                 0123456789*123456789*12345
    string str_7 = base_7;           // "this is a test string."
    str_7.replace(9, 5, str2_7);          // "this is an example string." (1)
    cout << str_7 << '\n';
    str_7.replace(19, 6, str3_7, 7, 6);     // "this is an example phrase." (2)
    cout << str_7 << '\n';
    str_7.replace(8, 10, "just a");     // "this is just a phrase."     (3)
    cout << str_7 << '\n';
    str_7.replace(8, 6, "a shorty", 7);  // "this is a short phrase."    (4)
    cout << str_7 << '\n';
    str_7.replace(22, 1, 3, '!');        // "this is a short phrase!!!"  (5)
    cout << str_7 << '\n';

    // Using iterators:                                               0123456789*123456789*
    str_7.replace(str_7.begin(), str_7.end() - 3, str3_7);                    // "sample phrase!!!"      (1)
    cout << str_7 << '\n';
    str_7.replace(str_7.begin(), str_7.begin() + 6, "replace");             // "replace phrase!!!"     (3)
    cout << str_7 << '\n';
    str_7.replace(str_7.begin() + 8, str_7.begin() + 14, "is coolness", 7);    // "replace is cool!!!"    (4)
    cout << str_7 << '\n';
    str_7.replace(str_7.begin() + 12, str_7.end() - 4, 4, 'o');                // "replace is cooool!!!"  (5)
    cout << str_7 << '\n';
    str_7.replace(str_7.begin() + 11, str_7.end(), str4_7.begin(), str4_7.end());// "replace is useful."    (6)
    cout << str_7 << '\n';

    // 8. 멤버함수 substr()

    cout << "-------------------------------------------\n              8. 멤버함수 substr()\n-------------------------------------------\n\n";

    string str_8 = "We think in generalities, but we live in details.";
    // (quoting Alfred N. Whitehead)

    string str2_8 = str_8.substr(3, 5);     // "think"
    cout << "str_8.substr(3, 5) -> " << str2_8 << '\n';
    size_t pos_8 = str_8.find("live");      // position of "live" in str
    cout << "** " << pos_8 << "번째에 live 존재 **\n";
    string str3_8 = str_8.substr(pos_8);     // get from "live" to the end
    cout << "str_8.substr(pos) -> " << str3_8 << '\n';

    cout << str2_8 << ' ' << str3_8 << '\n';

    // 9. 멤버함수 eraser()

    cout << "-------------------------------------------\n              9. 멤버함수 eraser()\n-------------------------------------------\n\n";

    string str_9("This is an example sentence.");
    cout << str_9 << '\n';
    str_9.erase(10, 8);
    cout << str_9 << '\n';
    str_9.erase(str_9.begin() + 9);
    cout << str_9 << '\n';
    str_9.erase(str_9.begin() + 5, str_9.end() - 9);
    cout << str_9 << '\n';

    return 0;
}