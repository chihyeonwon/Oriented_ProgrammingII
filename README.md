# Oriented_ProgrammingII
객체지향프로그래밍II C++ 개념 위주 

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

## 배열

### 배열 선언

```c++
int scores[10] // 자료형이 정수형이고 크기가 10인 scores 배열 선언
```

### 학생 10명의 성적을 입력받아 배열에 저장하고 합을 구하는 프로그램 작성

```c++
#include <iostream>
using namespace std;

int main()
{
	int scores[10];
	int sum = 0;
	
	for (int i = 0; i < 10; i++) {
		cout << "학생들의 성적을 입력하세요: ";
		cin >> scores[i];
	}

	for (int i = 0; i < 10; i++) {
		sum += scores[i];
	}

	cout << "성적의 합: " << sum << endl;

	return 0;
}
```

### 배열의 초기화

콤마로 분리된 초기값들의 리스트를 대입하면 된다.
```c++
int sales[5] = {100, 200, 300, 400, 500};
```

만약 초기값의 개수가 요소들 개수보다 적은 경우에는 앞에 있는 요소들만 초기화되고   
나머지는 0으로 초기화된다.

### 범위 기반 for 루프

배열에 대해서는 범위-기반 for 루프를 사용할 수 있다.
```c++
for( 변수 : 범위 ) {
	// 문장
}
```

for 루프 안에서 배열 요소의 값을 변경해야 한다면 다음과 같은 코드로 작성해야 한다.
```c++
#include <iostream>
using namespace std;

int main()
{
	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// 배열 요소의 값을 for루프 안에서 변경o (참조자 사용)
	for (int& i : list) {
		i = i * i;
	}

	// 배열 요소의 값을 출력 (변경x)
	for (int i : list) {
		cout << i << " ";
	}
 
	return 0;
}
```
## 3장
### 함수 원형 정의

함수를 사용할 때 미리 컴파일러에게 함수에 대한 정보를 알려주는 것을 함수 원형이라고 한다.
```c++
int square(int); // 매개변수의 이름은 생략해도 좋다.
int get_integer(void); // 반드시 끝에 ;을 붙여야한다.
```

함수 원형이 없다면 컴파일러는 함수가 어떤 매개변수를 가지는 함수인지 반환형은 무엇인지 알 수 없다.   

### 중복 함수

매개 변수의 개수, 타입, 순서를 시그니처라고 하는데 중복 함수는 이름은 같지만 시그니처가 달라야 한다.

### 디폴트 인수

디폴트 인수 사용시 주의점은 디폴트 인수는 반드시 마지막인수여야한다.   
디폴트 인수 지정은 오른쪽에서 시작하여야 한다.

```c++
#include <iostream>

using namespace std;

int sum(int a, int b, int c=0, int d=0, int e=0) {
	return a + b + c+ d +e;
}


int main()
{
	cout << "sum(10, 20)=" << sum(10, 20) << endl;
	cout << "sum(10, 20, 30, 40)=" << sum(10, 20, 30, 40) << endl;
	cout << "sum(10, 20, 30, 40, 50)=" << sum(10, 20, 30, 40, 50) << endl;
}
```

### 인라인 함수

간단한 함수 같은 경우에는 함수 호출 오버헤드를 줄여 프로그램을 빠르게 실행시켜주는 인라인 함수가 존재한다.
```c++
inline double square(double i) {
	return i*i;
}
```
함수 앞에 inline 키워드를 붙여주기만 하면 된다.

### string 클래스

string 클래스는 문자열 처리에 필요한 여러가지 함수들을 제공한다.   
함수들이 내부적으로 어떻게 구현되는지 모르더라도 사용할 수 있다.

### string 클래스를 사용하는 입출력

cin에서 string 객체로 입력하는 경우 공백 문자가 있으면 입력을 중단하게 된다.   
이를 방지하려면 한 줄을 읽는 getline() 함수를 사용한다.   

```c++
string line;
getline(cin, line);
```

cin.ignore()함수로 엔터키를 없애고 geline으로 주소를 읽었다.

```c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, addr;

	cout << "이름을 입력하시오 : ";
	cin >> s1;
	cin.ignore(); // 엔터키를 없애기 위해 필요하다.

	cout << "주소를 입력하시오 : ";
	getline(cin, addr);
	cout << addr << "의 " << s1 << "씨 안녕하세요?" << endl;

	return 0;
}
```

## string 멤버 함수 호출

```c++
string s = "hello";
int size = s.size();
```

string 클래스에는 문자열의 추가,삭제,검색을 위한 많은 멤버함수가 존재한다.   

1. s.empty() : s가 비어있으면 true 반환
2. s.insert(pos, s2) : pos 위치에 s2를 삽입
3. s.remove(pos, len) : s의 pos 위치에 len만큼 삭제
4. s.find(s2) : s에서 문자열 s2가 발견되는 인덱스 반환
5. s.find(pos, s2) : s의 pos 위치부터 문자열 s2가 발견되는 첫번째 인덱스 반환

## 4장

### 객체의 생성

```c++
clss Circle {
public: // 접근지정자
 	int radius; // 멤버변수
	string color; // 멤버변수
	 
	// 멤버 함수
	double calcArea() {
		return 3.14*radius*radius; 
	}
};

클래스를 정의하고 클래스를 사용자-정의 자료형으로 취급하여 객체를 생성한다.
```c++
Circle obj; // obj는 Circle 자료형의 변수이다.
```

객체의 멤버 접근
   
객체 안에 정의된 멤버 변수, 함수를 사용하려면 다음과 같다.
```c++
obj.radius =3; // obj의 멤버 변수인 radius에 3을 저장
obj.calcArea(); // 멤버 함수인 calcArea()를 호출


### 클래스의 인터페이스와 구현의 분리

멤버 함수를 클래스 외부에 저장할 수 있는 기능이 있다.   
멤버 함수를 클래스 안에서는 함수 원형(프로토타입)만 정의한다.
```c++
#include <iostream>
#include <string>
using namespace std;

class Circle {
public:
	double calcArea();
		
	int radius; //반지름
	string color; //색상
};
```
calcArea() 함수를 클래스 외부에서 정의하면 다음과 같다.
```c++
double Circle::calcArea() {
	return 3.14*radius*radius;
}
```

반환형 클래스이름::멤버함수의 형식을 취한다.

## 클래스의 선언과 클래스의 정의 분리

클래스를 헤더 파일과 소스 파일로 나누어서 작성하는 방법이다.   
   
헤더파일에는 클래스를 사용하는데 필요한 클래스 선언이 들어간다.   
멤버 함수들의 몸체는 소스 파일에 작성한다.

헤더파일 예시코드는 다음과 같다.

--car.h--
```c++
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
public: 
	int getSpeed();
	void setSpeed(int s);
};
```

여기서 멤버 함수의 몸체는 별도의 소스파일에 작성한다.   
이때 위의 헤더파일을 포함해야한다.

--car.cpp--
```c++
#include "car.h"

int Car::getSpeed() {
	return speed;
}

void Car::setSpeed(int s) {
	speed = s;
}
```

다른 소스파일에서 이 클래스를 사용하려면 헤더 파일만을 포함하면 된다.   
---main.cpp--
```c++
#include "car.h" // car헤더파일만을 포함
using namespace std;

int main()
{
	Car myCar;
	
	myCar.setSpeed(80);
	
	cout << "현재 속도는 " << myCar.getSpeed() << endl;
	
	return 0;
}
```

### 상속과 다형성

상속은 기존의 코드를 재활용하기 위한 기법으로 이미 작성된 클래스를 이어받아서 새로운 클래스를 생성하는 기법이다.

다음은 부모클래스 Shape를 상속받아서 Rectangle을 정의하는 예제 코드이다.
```c++
Class Shape {
protected:
	int x, y;
public:
	void draw() { }
	void move() { }
};

class Rectangle : Shape {
public:
	int width, height;
	int calcArea() {
		return width*height;
	}
};
```

## 5장 

### 생성자

객체도 초기화하지않으면 쓰레기 값을 가진다. 객체가 생성된 후에는 반드시 객체를 초기화하여야하는데   
이를 도와주는 것이 생성자이다.

생성자는 클래스이름과 똑같은 멤버 함수이다.
```c++
class Time {
public:
	Time() {  } // 생성자
};
```

### 생성자 중복 정의

생성자도 멤버 함수의 일종이라 매개변수가 있는 생성자와 없는 생성자를 만들 수 있다.   
주의해야 할 점은 기본 생성자를 호출할 때 소괄호를 사용하면 안된다.
```c++
Time a; // 기본 생성자가 호출된다.
Time a(); // 기본 생성자가 아니다.
```

### 생성자를 쉽게 작성할 수 있는 멤버 초기화 리스트

c++에서는 생성자를 좀 더 쉽게 작성할 수 있는 방법이 있다.
```c++
Time(int h, int m) : hour(h), minute(m) { }
```
멤버변수 hour를 h로 초기화한다는 의미이다.

#### 소멸자

생성된 객체가 범위를 벗어나면 객체는 소멸된다.   
이때마다 호출되는 특정한 멤버 함수가 소멸자이다.
소멸자는 값을 반환하거나 매개 변수를 사용할 수 없다.   
소멸자는 파일을 닫거나 메모리를 반환하는 작업과 같이 프로그램을 종료하기 전에 자원을 반납하는데   
매우 유용하게 사용할 수 있다.
```c++
class MyString {
public:
	~Mystring(){
		delete[]s;
	}
}

### 접근자

private로 선언된 멤버 변수들을 읽어서 외부로 전달해주는 함수를 접근자라고 한다.
```c++
int getHour() { return hour; }
```

### 설정자

외부에서 안전하게 멤버 변수들을 변경할 수 있는 함수를 설정자라고 한다.
```c++
void setHour(int h) { hour = h; }
```

접근자와 생성자는 크기가 작으므로 클래스 내부에 정의하는 것이 보통이다.

### 객체가 함수의 매개변수로 전달되는 경우

```c++
void makeDouble(Pizza p)
{
	p.size *=2;
}

int main()
{
	Pizza pizza(10);
	makeDouble(pizza);
}
```

pizza 객체를 보내주었지만 사이즈는 변경되지 않는다. 

### 객체의 참조자가 함수의 매개 변수로 전달되는 경우

```c++
void makeDouble(Pizza& p)
{
	p.size *=2;
}

int main()
{
	Pizza pizza(10);
	makeDouble(pizza);
}
```
pizza 객체의 사이즈가 변경된다.

### 함수가 객체를 반환하는 경우

복사생성자라고도 하는데 사용법은 다음과 같다.
```c++

Pizza createPizza() {
	Pizza p(10);
	return p;
}

int main()
{
	Pizza pizza = createPizza();
}
```
pizza가 가지고 있던 값은 사라지고 createPizza()가 반환한 객체 p의 값이 덮여 씌워진다.`
