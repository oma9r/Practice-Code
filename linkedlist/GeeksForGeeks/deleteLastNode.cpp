#include <iostream>
#include <vector>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}

	Node()
	{
		data = 0;
		next = NULL;
	}
};

class Solution
{
public:
	Node *head, *last;
	int key;

	void insertNode(int val)
	{

		Node *newNode;
		newNode = new Node();
		newNode->data = val;
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;
			last = newNode;
		}

		else
		{
			last->next = newNode;
			last = newNode;
			// last->next = NULL;
		}
	};

	void deleteNode(int k)
	{
		key = k;
		if (head == NULL)
			return;

		Node *current = head;

		Node *prev = NULL;

		Node *lastOne, *lastPrev;

		while (current != NULL)
		{
			if (current->data == k)
			{
				lastOne = current;
				lastPrev = prev;
			}

			prev = current;
			current = current->next;
		}

		lastPrev->next = lastOne->next;

		if (lastOne == last)
			last = lastPrev;
		delete lastOne;

		// return head;
	};

	void printList()
	{
		Node *current = head;

		if (current->next == NULL)
			cout << current->data;

		while (current != NULL)
		{
			cout << current->data << " -> ";
		}

		current = current->next;
	};

	void printTestCase(int numberOfCase)
	{

		cout << "Test Case " << numberOfCase << " : " << endl;

		cout << "Key to delete: " << key << endl;

		cout << "Expected Output: ";

		printList();

		cout << endl
			 << "____________________________________________________________________" << endl;
	};
};

int testCaseGenerator()
{
	cout << "Enter the number of test cases you want: ";
	int numberOfTestCases;
	cin >> numberOfTestCases;
	cout << endl;

	return numberOfTestCases;
};

vector<int> casesTaker()
{
	vector<int> nums;

	int size = 0;

	int number = 0;

	cout << "Enter the number of test case numbers: ";
	cin >> size;
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number: ";
		cin >> number;
		cout << "i: " << i << endl;
		nums.push_back(number);
		cout << endl;
	}

	return nums;
};

int main()
{
	Solution s1;

	// Node *head = new Node(1);
	// head->next = new Node(2);
	// head->next->next = new Node(3);
	// head->next->next->next = new Node(1);
	// head->next->next->next->next = new Node(4);

	int i = testCaseGenerator();

	vector<int> nums;

	int key;

	for (int j = 1; j <= i; j++)
	{

		Solution s2;

		nums = casesTaker();

		for (int z = 0; z < nums.size(); z++)
		{

			s2.insertNode(nums[z]);
		};

		cout << "Enter the key value: ";
		cin >> key;
		cout << endl;

		s2.deleteNode(key);

		s2.printTestCase(j);
	}

	return 0;
}