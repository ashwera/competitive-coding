#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
//leetcode 103
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue <TreeNode*> que;
        que.push(root);
        bool ltr=false;
        while(!que.empty())
        {
            ltr ^= true; //flip
            int size = que.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                TreeNode *node = que.front();
                que.pop();
                if(node->left != NULL)que.push(node->left);
                if(node->right != NULL)que.push(node->right);
                level.push_back(node->val);
            }
            if(!ltr) reverse(level.begin(),level.end());
            ans.push_back(level);
        }
        return ans;
    }
};