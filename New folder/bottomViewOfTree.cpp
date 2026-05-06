#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    int findHeight(Node *root)
    {
        if (!root)
            return 0;
        int left = 1 + findHeight(root->left);
        int right = 1 + findHeight(root->right);
        return max(left, right);
    }
    void print(vector<int> ans)
    {
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }
    vector<int> bottomView(Node *root)
    {
        // code here
        int deepest = findHeight(root);
        vector<int> ans(2 * deepest - 1, 0);

        int startIndex = ans.size() / 2;

        queue<Node *> q;
        q.push(root);
        ans[startIndex] = root->data;

        // cout << q.front() -> data ;

        while (!q.empty())
        {

            int size = q.size();
            int index = startIndex;
            cout << startIndex << " : ";

            while (size)
            {
                Node *front = q.front();
                cout << q.front()->data << " ";
                // ans[index] = front->data;
                if (front->left)
                {
                    ans[index - 1] = front->left->data;
                    q.push(front->left);
                }
                if (front->right)
                {
                    ans[index + 1] = front->right->data;
                    q.push(front->right);
                }
                q.pop();
                size--;
                index += 2;
            }
            cout << endl;
            print(ans);

            startIndex--;
        }
        return ans;
    }
};

int main()
{
    // create a tree builder code
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root -> left -> left -> left = new Node(8);
    root -> left -> left -> right = new Node(9);
    root -> left -> right -> left = new Node(10);
    root -> left -> right -> right = new Node(11);
    root -> right -> left -> left = new Node(12);
    root -> right -> left -> right = new Node(13);
    root -> right -> right -> left = new Node(14);
    root -> right -> right -> right = new Node(15);

    Solution obj;
    vector<int> ans = obj.bottomView(root);
    // obj.print(ans);

    return 0;
}