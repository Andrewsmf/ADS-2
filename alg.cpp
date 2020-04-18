int cbinsearch(int* arr, int size, int value)
{
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == value) {
			
			return mid;
		}

		else if (arr[mid] < value)
			left = mid + 1;
		else if (arr[mid] > value)
			right = mid - 1;
	}
	return -1;
}




int countPairs1(int* arr, int len, int value)
{
int n = 0;
for (int i = 0; i < len - 1; i++) {
for (int j = 1; j < len; j++) {
if (arr[i] + arr[j] == value) {
n++;

}
}
return n;
}
cout «"n =" « n « endl;
}


int countPairs2(int* arr, int len, int value)
{
	int n = 0;
	int start = 0;
	int end = len - 1;
	while (start < end) {
		int res = arr[start] + arr[end];
		if (res == value) {
			n++;
			start++;
			end--;
		}
		else {
			if (res < value) start++;
			else end--;
		}
	}
	return n;
}
int countPairs3(int* arr, int len, int value)
{
	int k = 0, n = 0;
	for (int i = 0; i < len; i++) {
		k = value;
		k = k - arr[i];
		int l = cbinsearch(arr, len, k);
		if (l >= 0 && x > i)
			n++;
		if (l < 0)
			continue;
	}
	return n;
} 
