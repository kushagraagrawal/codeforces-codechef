#include <stdio.h>
#include <string.h>
 
int countChar(char x[],int character,int start,int end) {
//Counts character in string x from index start to index end both inclusive.
	int i,count = 0;
	for (i=start;i<end+1;i++) if (x[i] == character) count++;
	return count;
}
 
int checkAnagram(char x[],int l,int p,int q) {
//Checks substrings of length l starting at p and q in string x are anagrams or not.
	int i;
	for (i=97;i<123;i++) if (countChar(x,i,p,p+l-1) != countChar(x,i,q,q+l-1)) return 0;
	return 1;
}
 
int countAnagramsOfLengthLen(char x[],int l,int len) {
//Counts unordered anagramic pairs of length len in string x.
	int i,j,n = l-len+1,count = 0;
	for (i=0;i<n-1;i++) for (j=i+1;j<n;j++) if (checkAnagram(x,len,i,j)) count++;
	return count;
}
 
int sherlockAndAnagrams(char x[]) {
//Counts all unordered anagramic pairs in string x.
	int l = strlen(x),i,count = 0;
	for (i=1;i<l;i++) count += countAnagramsOfLengthLen(x,l,i);
	return count;
}
 
int main() {
	int t;
	scanf ("%d",&t);
	while (t--) {
		char a[101];
		scanf ("%s",a);
		printf ("%d\n",sherlockAndAnagrams(a));
	}
	return 0;
}
