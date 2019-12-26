# 모두의 알고리즘 with 파이썬

> ### [모두의 알고리즘 with 파이썬 (길벗출판사)](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK) 를 공부하며 짜본 코드입니다.
> 모든 [예시 코드](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK#bookData) 는 길벗출판사 홈페이지에 있습니다.  
> 모든 저작권은 [길벗출판사](https://www.gilbut.co.kr/) 에 있습니다.  
<br>
## 팩토리얼 구하기
### *1부터 n까지 연속한 정수의 곱을 구하는 알고리즘을 만들어 보세요.*
1. [팩토리얼](./p04-1-fact.py)


2. 러시아 인형

3. 재귀 호출: 다시 돌아가 부르기
    - `재귀 호출`: 어떤 함수 안에서 자기 자신을 부르는 것
    - 재귀 호출 프로그램이 정상적으로 작동하기 위해서는 **종료 조건**이 필요하다.

4. [재귀 호출 알고리즘](./p04-2-fact.py)
    - 1! = 1, n! = n X (n-1)! 을 이용해 재귀 호출 팩토리얼 계산을 할 수 있다.

5. 알고리즘 분석
    - 재귀 호출은 일반적으로....
    ```python
    def func(입력 값):
        if 입력 값이 충분히 작으면:     # 종료 조건
            return 결괏값
        ...
        func(더 작은 입력 값)           # 더 작은 값으로 자기 자신을 호출
        ...
        return 결괏값
    ```
    - 재귀 호출에는 반드시 `종료 조건`이 필요하다. <br> 없으면 **재귀 에러**나 **스택 오버플로**등 프로그램 에러가 발생해 비정상적인 동작을 할 수도 있다.

6. 연습문제
    - [연습문제1](./p04-p01-sum.py)
    - [연습문제2](./p04-p02-findmax.py)
>## 만약 문제가 있다면, kiryanchi@naver.com 으로 메일주시기 바랍니다.