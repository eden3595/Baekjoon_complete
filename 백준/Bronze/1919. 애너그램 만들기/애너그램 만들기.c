
int main() {

	int n;
	scanf("%d", &n);



	char word1[1002];
	int ind1[27] = { 0 };
	int ind2[27] = { 0 };
	char word2[1002];
	scanf("%s %s", word1, word2);


	for (int j = 0; word1[j] != '\0'; j++) {
		ind1[word1[j] - 'a']++;
	}
	for (int j = 0; word2[j] != '\0'; j++) {
		ind2[word2[j] - 'a']++;
	}
	int cnt = 0;

	for (int i = 0; i < 26; i++) {
		cnt += abs(ind1[i] - ind2[i]);
	}
	printf("%d", cnt);

	
	return 0;
}
