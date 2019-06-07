void leafLink(BiTree root)
{
    BiTree firstleaf;
    BiTree presNode;
    if (!root)
        return;
    if (root -> left == NULL && root -> right == NULL)
    {
        if (firstleaf == NULL){
            firstleaf = root;
            presNode = firstleaf;
        }
        else{
            presNode -> right = root;
            presNode = presNode -> right;
        }
    }
    if (root -> left){
        leafLink(root->left);
    }
    if (root -> right){
        leafLink(root->right);
    }
}
