
#include<vector>

using namespace std;

vector<int> next_permutation(vector<int> A) {
	int index = -1;
	int n = A.size();
	for (int idx = n - 2; idx >= 0; idx--)
	{
		if (A[idx] < A[idx + 1])
		{
			index = idx;
			break;
		}
	}

	if (index == -1)
	{
		reverse(A.begin(), A.end());
		return A;
	}

	for (int idx = n - 1; idx > index; idx--)
	{
		if (A[idx] > A[index])
		{
			swap(A[idx], A[index]);
			break;
		}
	}
	reverse(A.begin() + index + 1, A.end());
	return A;
}

