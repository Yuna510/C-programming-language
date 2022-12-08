// A binary search based program to find the
// only missing number in a sorted array of
// distinct elements within limited range.
int search(int ar[], int size)
{
	// Extreme cases
	int a = 0, b = size - 1;
	int mid;
	while ((b - a) > 1) {
		mid = (a + b) / 2;
		if ((ar[a] - a) != (ar[mid] - mid))
			b = mid;
		else if ((ar[b] - b) != (ar[mid] - mid))
			a = mid;
	}
	return (ar[a] + 1);
}

int main()
{
	int ar[] = { 1, 2, 3, 5, 6, 8 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int k= search(ar, size);
	printf("%d", k);
}

// This code is contributed by Pushpesh Raj
