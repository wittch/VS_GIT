#include<iostream>
#include<vector>
using namespace std;

int init(vector<int>& v, vector<int>& tree, int node, int start, int end)
{
	if (start == end)
	{
		return tree[node] = v[start];
	}


	return tree[node] = init(v, tree, node * 2, start, (start + end) / 2) + init(v, tree, node * 2 + 1, (start + end) / 2 + 1, end);
}
void update(vector<int>& tree, int node, int start, int end, int index, int diff)
{
	if (index < start || end < index) return;
	tree[node] = tree[node] + diff;
	if (start != end)
	{
		update(tree, node * 2, start, (start + end) / 2, index, diff);
		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, diff);
	}
}
int main()
{
	cout << "Times fly" << '\n';


	return 0;
}