# Oriented_ProgrammingII
객체지향프로그래밍II C++ 프로그래밍 위주 정리

## 첫번째 프로그램 분석

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
