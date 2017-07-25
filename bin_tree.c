struct binary_tree{
	char* data;
	binary_tree* left;
	binary_tree* right;
};

struct binary_tree *root = NULL; // создали корень дерева

binary_tree* add_new_node(binary_tree *this_tree, char* data){
	if (this_tree==NULL){ // данные видим впервые
		this_tree = create_new_node();
		this_tree->data = data // add_data_array()
		this_tree->left=this_tree->right=NULL;
	} else if (strcmp(data, this_tree->data)==0 || strcmp(data, this_tree->data) < 0)//это слово уже встречалось или меньше подителя
		this_tree->left = add_new_node(this_tree->left, data);
	else
		this_tree->right = add_new_node(this_tree->right, data);
	return this_tree;
}

struct binary_tree create_new_node(void){
	return (struct binary_tree*) malloc(sizeof(struct binary_tree));
}
