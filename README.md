# Oriented_ProgrammingII
객체지향프로그래밍II C++ 프로그래밍 위주 정리

# 1장

```c++
#include <iostream> // 헤더파일
using namespace std; // 이름 공간 설정

int main() // 함수 선언
{
  cout << "Hello World" << endl; // 화면에 문자열 출력
  return 0; // 프로그램이 정상적으로 종료되었음을 알려준다.
}
```
1. iostream 헤더 파일에는 표준 입출력에 필요한 클래스와 객체들이 정의
2. 입출력을 위하여 cin과 cout와 같은 객체를 사용하려면 iostream 파일을 포함시켜야 한다.

공간::이름과 같이 공간명을 이름 앞에 붙인다. cout는 std라는 이름 공간에 속한다. 따라서 원칙적으로는 다음과 같이 사용하여야 한다.
```c++
std::cout << "Hello World!" << std::endl;
```

하지만 이름 앞에 매번 std를 붙이는 것은 어렵기 때문에 using 지시어를 사용한다.
```c++
using namespace std;
```

std안의 모든 이름은 std를 붙이지 않고서도 사용할 수 있다.
```c++
cout << "Hello World!" << std::endl; 
```

## 변수와 자료형

변수 선언
```c++
int i = 100;
```
변수 i 선언과 동시에 100으로 초기화하였다.
   
자료형 같은 경우는 bool형만 알아보면 될 것 같다.   
c언어에서는 0이면 거짓 0이 아닌 값은 참으로 사용해왔다.   
하지만 c++언어에서는 bool형 (true, false)을 값으로 가지는 변수를 생성할 수 있게 되었다.
```c++
#include <iostream>
using namespace std;

int main()
{
  bool b;
  b = true;
  return 0;
}
```

## 문자열

c++는 문자열을 위한 string 타입을 제공한다. 

```c++
#include <iostream>
#include <string> // 문자열을 사용하려면 string 파일을 포함해야 한다.
using namespace std;

int main()
{
  string s1 = "Good";
  string s2 = "Bad";
  string s3;
  string s4;
  
  s3 = s1 + " " + s3; // 문자열을 +연산자를 사용하여 결합할 수 있다.
  s4 = s1 + to_string(10); // 문자열과 숫자를 합하려면 to_string() 함수를 적용한 후에 합한다.
}
```

## 기호 상수

변수 선언 앞에 const를 붙이면 변수의 값이 변경되지 않음을 나타낸다.   
기호 상수를 사용하면 프로그램을 읽기가 쉬워지고 동일한 상수를 여러 곳에 사용할 때 상수 값을 변경할 때 쉽게 할 수 있다는 장점이 있다.
```c++
const double TAX_RATE = 0.25 // 기호 상수 선언
```
## auto 키워드

auto는 자동 타입 추론 기능을 제공한다. 함수를 정의할 때도 사용 가능하다.

# 2장

## 관계 연산자

```c++
(1 == 2) // 거짓(false)
(10 > 4) // 참(true)
(2 != 3) // 참(ture)
```

## boolalpha

boolalpha는 bool값을 true나 false로 출력하게 한다. 
```c++
#include <iostream>
using namespace std;

int main()
{
	bool b = (1 == 2);
	cout << boolalpha;
	cout << b << endl;

	return 0;
}
```

## 논리 연산자

```c++
x && y // AND 연산(곱연산) x, y가 모두 참이면 참, 그렇지 않으면 거짓
x || y // OR 연산(합연산) x나 y중에서 하나만 참이면 참, 모두 거짓이면 거짓
!x // NOT 연산, x가 참이면 거짓, y가 거짓이면 참
```

## if-else문, 중첩 if-else 문

주어진 조건이 참이냐 거짓이냐에 따라서 서로 다른 문장을 실행
```c++
if (조건식) {
  문장 1
else {
  문장 2
}
```

if-else 문은 조건식이 참인지 거짓인지에 따라 2개의 문장에서 하나의 실행
```c++
if (조건식) {
  문장1
}
else if {
  문장2
}
else {
  문장3
}

## switch 문

switch 문은 여러 개의 가능한 실행 경로 중에서 하나를 선택, switch 안에 있는 수식과 case 절과 비교해서 일치하는 정수값이면 case 내에 문장 실행   
default문은 없을 수도 있지만 미처 예상하지 못한 값을 알아내기 위해 포함시키는 게 좋다.

## while 문

while은 조건이 만족되면 반복을 계속하는 구조이다.
```c++
while(조건식) {
  문장
}

## do-while 문

do-while문은 while과 유사하지만 먼저 문장을 한번 실행하고 조건을 나중에 검사
```c++
do {
  문장
} while(조건식);
```
## for 루프

for 루프는 일정한 횟수만큼 반복할 때 사용
```c++
for(초기식; 조건식; 증감식) {
  문장
}

## continue 문

continue문은 현재 수행하고 있는 반복과정의 나머지를 건너뛰고 다음 반복을 강제적으로 실행

