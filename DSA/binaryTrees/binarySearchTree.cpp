class binarySearchTree{



			public:
					bool search(int value){

						node *current = root;

						if(root == NULL){ return false; }

						else{
							while(current != NULL){
							
							if(current->info == value) return true;

							else if(current->left->info < value){

								current = current->right;

							}
							else if(current->right->info => value){

								current = current->left;

							}

							}

						return false;



						}

						

					



					}



















}