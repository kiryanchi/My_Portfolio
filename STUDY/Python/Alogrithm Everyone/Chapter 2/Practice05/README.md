# 모두의 알고리즘 with 파이썬

> ### [모두의 알고리즘 with 파이썬 (길벗출판사)](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK) 를 공부하며 짜본 코드입니다.
> 모든 [예시 코드](https://www.gilbut.co.kr/book/view?bookcode=BN001731&keyword=%EB%AA%A8%EB%91%90%EC%9D%98%20%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%20WITH%20%ED%8C%8C%EC%9D%B4%EC%8D%AC&collection=GB_BOOK#bookData) 는 길벗출판사 홈페이지에 있습니다.  
> 모든 저작권은 [길벗출판사](https://www.gilbut.co.kr/) 에 있습니다.  
<br>
## 최대공약수 구하기
### *두 자연수 a와 b의 최대공약수를 구하는 알고리즘을 만들어 보세요.*
1. [최대공약수 알고리즘](./p05-1-gcd.py)
    > 1. 두 수 중 더 작은 값을 i 에 저장합니다.
    > 2. i 가 두 수의 공통된 약수인지 확인합니다.
    > 3. 공통된 약수이면 이 값을 결괏값으로 돌려주고 종료합니다.
    > 4. 공통된 약수가 아니면 i 를 1만큼 감소시키고 2번으로 돌아가 반복합니다.

2. [유클리드 알고리즘](./p05-2-gcd.py)
    - a와 b의 최대공약수는 '**b**' 와 '**a 를 b 로 나눈 나머지**' 의 최대공약수와 같다.<br>
      > gcd(a,b) = gcd(b, a % b)
    - 어떤 수와 0의 최대공약수는 자기 자신이다. <br>
      > gcd(n, 0) = n

3. TODO
>## 만약 문제가 있다면, kiryanchi@naver.com 으로 메일주시기 바랍니다.