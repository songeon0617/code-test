int solution(int n) {
    int answer = 0;

    // 반복문을 사용하면 n이 몇 자리든 상관없이 처리할 수 있습니다.
    while (n > 0) {
        answer += n % 10; // 마지막 자릿수를 더함
        n /= 10;          // 마지막 자릿수를 제거 (1234 -> 123)
    }

    return answer;
}