class Solution {
public:
//recursive method
    void flatten(TreeNode* root) {
        if(root == NULL)return;
        TreeNode* t1 = root->left;
        TreeNode* t2 = root->right;
        root->left = NULL;
        root->right = NULL;
        flatten(t1);
        flatten(t2);
        root->right = t1;
        TreeNode* temp = root;
        while(temp->right != NULL)temp = temp->right;
        temp->right = t2;

    }
};

























// //iterative method 
//     vector<TreeNode*> preorderTraversal(TreeNode* root) {
//         //interative
//         vector<TreeNode*> ans;
//         stack<TreeNode*> st;
//         if(root!= NULL)st.push(root);
//         while(st.size() > 0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp);
//             if(temp->right)st.push(temp->right);
//             if(temp->left)st.push(temp->left);
//         }
//         return ans;
//     }
//     void flatten(TreeNode* root) {
//         vector<TreeNode*>ans = preorderTraversal(root);
//         int n = ans.size();
//         for(int i = 0; i < n-1 ; i++){
//             ans[i]->right = ans[i+1];
//             ans[i]->left = NULL;
//         }
//     }