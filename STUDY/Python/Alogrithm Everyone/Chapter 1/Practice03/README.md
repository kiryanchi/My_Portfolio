# 모두의 알고리즘 with 파이썬

> ### [모두의 알고리즘 with 파이썬 (길벗출판사)](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK) 를 공부하며 짜본 코드입니다.
> 모든 [예시 코드](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK#bookData) 는 길벗출판사 홈페이지에 있습니다.  
> 모든 저작권은 [길벗출판사](https://www.gilbut.co.kr/) 에 있습니다.  
<br>
## 동명이인 찾기 1
### *n명의 사람 이름 중에서 같은 이름을 찾아 집합으로 만들어 돌려주는 알고리즘을 만들어보세요.*
1. 집합  
`집합`: 리스트와 비슷하지만 같은 자료가 중복되어 들어가지 않고, 자료의 순서도 의미가 없다.  
**빈 집합 생성은** `set()` **로 한다.**

 함수 | 설명 
:----:|:----:
`len(a)`|**집합의 길이**(자료 개수)를 구합니다.
`add(x)`|**자료x**를 집합에 추가합니다.
`discard(x)`|집합에 자료 x가 들어 있다면 삭제합니다.<br>없으면 변화가 없습니다.
`clear()`|집합의 모든 자료를 지웁니다.
`x in s`|어떤 자료 x가 집합 s에 들어있는지 확인합니다.<br>(`x not in s` 는 반대 결과)

2. [동명이인을 찾는 알고리즘](./p03-1-samename.py)
    > Tom, Jerry, Mike, Tom 4 사람이 있을 경우
    1. 첫 번째 Tom을 뒤에 있는 Jerry, Mike, Tom과 차례로 비교합니다.
    1. 첫 번째 Tom과 마지막 Tom이 같으므로 동명이인입니다(동명이인: Tom).
    1. 두 번째 Jerry를 뒤에 있는 Mike, Tom과 비교합니다(앞에 있는 Tom과는 이미 비교했음).
    1. 세 번째 Mike를 뒤에 있는 Tom과 비교합니다.
    1. 마지막 Tom은 비교하지 않아도 됩니다(이미 앞에서 비교했음).
    1. 같은 이름은 Tom 하나뿐입니다.

3. 연습문제
    - [연습문제1](./p03-p01-makecouple.py)

>## 만약 문제가 있다면, kiryanchi@naver.com 으로 메일주시기 바랍니다.