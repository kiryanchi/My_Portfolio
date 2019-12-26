# 모두의 알고리즘 with 파이썬

> ### [모두의 알고리즘 with 파이썬 (길벗출판사)](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK) 를 공부하며 짜본 코드입니다.
> 모든 [예시 코드](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK#bookData) 는 길벗출판사 홈페이지에 있습니다.  
> 모든 저작권은 [길벗출판사](https://www.gilbut.co.kr/) 에 있습니다.  
<br>
## 최댓값 찾기
### *주어진 숫자 n개 중 가장 큰 숫자를 찾는 알고리즘을 만들어 보세요.*
1. 리스트  

 함수 | 설명 
:----:|:----:
`len(a)`|**리스트의 길이**(자료 개수)를 구합니다.
`append(x)`|**자료x**를 리스트의 **맨 뒤에 추가**합니다.
`insert(i, x)`|리스트의 **i 번 위치**에 **x를 추가**합니다.
`pop(i)`|i 번 위치에 있는 자료를 리스트에서 빼내면서 그 값을 **함수의 결괏값**으로 돌려줍니다.<br>i 를 지정하지 않으면 맨 마지막 값을 빼내서 돌려줍니다.
`clear()`|리스트의 모든 자료를 지웁니다.
`x in a`|어떤 자료 x가 리스트 a 안에 있는지 확인 합니다. <br> (x not in a 는 반대 결과)
`a.remove(x)`|리스트 a 안에 자료 x를 삭제합니다.

2. [최댓값을 찾는 알고리즘](./p02-1-findmax.py)
    
3. 알고리즘 분석
    - [최댓값을 찾는 알고리즘](./p02-1-findmax.py) 의 계산 복잡도를 생각해보면, 비교를 n - 1 번 해야하므로 O(n) 이다.
    - O(n) 의 중요한 특징은 **입력 크기와 계산 시간이 대체로** `비례`**한다** 는 점이다.

4. [응용하기](./p02-2-findmaxidx.py)

- 연습 문제
    - [연습문제](./p02-p01-findmin.py) 

>## 만약 문제가 있다면, kiryanchi@naver.com 으로 메일주시기 바랍니다.