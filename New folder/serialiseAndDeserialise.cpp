
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
// Node *buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str;)
//         ip.push_back(str);

//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node *> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node *currNode = queue.front();
//         queue.pop();

//         // Get the current Node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {

//             // Create the left child for the current Node
//             currNode->left = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size())
//             break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {

//             // Create the right child for the current Node
//             currNode->right = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }


// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) {
        // Your code here
        queue<Node*> q;
        vector<int> tree;
        
        q.push(root);

        
        while( !q.empty() ){
            Node* nod = q.front();

            cout << q.front() -> data << endl;
            
            if(nod){
                tree.push_back(nod -> data);
            }else{
                tree.push_back(-1);
            }
            
            if(!nod -> left && !nod -> right){
                q.pop();
            }else{
                q.push(nod -> left);
                q.push(nod -> right);
                
                q.pop();
            }
        }
        
        return tree;
    }

    // Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &arr) {
        // Your code here
        queue<Node*> q;
        Node* root, *temp = root;
        q.push(root);
        
        for(int i = 0; i < arr.size(); i++){
            Node* nod = q.front();
            cout << nod -> data << endl;
            
            if(arr[i] != -1){
                nod -> data = arr[i];
                q.push(nod -> left);
                q.push(nod -> right);
            }else{
                nod = nullptr;
            }
            q.pop();
            
        }
        
        return root;
        
    }
};

//{ Driver Code Starts.

void inorder(Node *root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void _deleteTree(Node *node) {
    if (node == NULL)
        return;

    /* first delete both subtrees */
    _deleteTree(node->left);
    _deleteTree(node->right);

    /* then delete the node */
    // cout << "Deleting node: " << node->data << endl;
    delete node;
}

/* Deletes a tree and sets the root as NULL */
void deleteTree(Node **node_ref) {
    _deleteTree(*node_ref);
    *node_ref = NULL;
}

int main() {
    // int tc;
    // scanf("%d ", &tc);
    // while (tc--) {
    //     string treeString;
    //     getline(cin, treeString);
    //     // Node *root = buildTree(treeString);

    //     Solution serial, deserial;
    //     vector<int> A = serial.serialize(root);
    //     Node *temp = root;
    //     deleteTree(&root);
    //     Node *getRoot = deserial.deSerialize(A);
    //     inorder(getRoot);

    //     cout << "\n";

    //     cout << "~"
    //          << "\n";
    // }
    vector<int> arr = {1, 2, 3};

    Node* root = new Node(2), *r = new Node(3), *l = new Node(1);

    root -> left = l;
    root -> right = r;

    inorder(root);

    Solution s;
    Node* n = s.deSerialize(arr);

    inorder(n);

    return 0;
}
// } Driver Code Ends