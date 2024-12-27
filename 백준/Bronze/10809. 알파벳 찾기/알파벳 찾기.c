#include <stdio.h>
#include <string.h> // strlen 함수를 사용하기 위한 헤더

int main() {
	int dic[26];

	// 배열 초기화: 모든 원소를 -1로 설정
	for (int i = 0; i < 26; i++) {
		dic[i] = -1;
	}

	char sent[101];

	scanf("%s", sent);

	int len = strlen(sent); // 입력 문자열의 길이 계산

	// 문자열 처리
	for (int i = 0; i < len; i++) {
		int index = sent[i] - 'a'; // 'a'부터 시작하는 인덱스 계산
		if (dic[index] == -1) {
			dic[index] = i; // 처음 등장한 위치 저장
		}
	}

	// 결과 출력
	for (int i = 0; i < 26; i++) {
		printf("%d ", dic[i]);
	}

	return 0;
}