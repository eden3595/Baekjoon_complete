int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		char word1[1001];
		int ind1[27] = { 0 };
		int ind2[27] = { 0 };
		char word2[1001];
		scanf("%s %s", word1, word2);

		if (strlen(word1) != strlen(word2)) {
			printf("Impossible\n");
			continue;
		}

		// Update frequency arrays
		for (int j = 0; word1[j] != '\0'; j++) {
			ind1[word1[j] - 'a']++;
			ind2[word2[j] - 'a']++;
		}

		int right = 0;
		for (int k = 0; k < 26; k++) {
			if (ind1[k] != ind2[k]) {
				right = 1;
				break;
			}
		}
		if (right == 1) {
			printf("Impossible\n");
		}
		else if(right==0) {
			printf("Possible\n");
		}


	}
	
	return 0;
}
