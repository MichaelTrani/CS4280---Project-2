#include "testTree.h"



void printer(treeNode* node) {
	int spacing = (node->depth) * 2;

	char spaceBar[200];  // Inline to bypass an error
	int j;
	for (j = 0; j < spacing; j++) {
		spaceBar[j] = ' ';
	}
	spaceBar[j] = '\0';


	if(node->t5.text[0] != '\0')
		printf("%d)%s%s--> Token1: \'%s\'  Token2: \'%s\'  Token3: \'%s\'  Token4: \'%s\'  Token5: \'%s\'\n", node->depth, spaceBar, node->ident, node->t1.text, node->t2.text, node->t3.text, node->t4.text, node->t5.text);

	else if((node->t4.text[0] != '\0'))
		printf("%d)%s%s--> Token1: \'%s\'  Token2: \'%s\'  Token3: \'%s\'  Token4: \'%s\'\n", node->depth, spaceBar, node->ident, node->t1.text, node->t2.text, node->t3.text, node->t4.text);

	else if ((node->t3.text[0] != '\0'))
		printf("%d)%s%s--> Token1: \'%s\'  Token2: \'%s\'  Token3: \'%s\'\n", node->depth, spaceBar, node->ident, node->t1.text, node->t2.text, node->t3.text);

	else if ((node->t2.text[0] != '\0'))
		printf("%d)%s%s--> Token1: \'%s\'  Token2: \'%s\'\n", node->depth, spaceBar, node->ident, node->t1.text, node->t2.text);

	else if ((node->t1.text[0] != '\0'))
		printf("%d)%s%s--> Token1: \'%s\'\n", node->depth, spaceBar, node->ident, node->t1.text);

	else
		printf("%d)%s%s\n", node->depth, spaceBar, node->ident);

}

/* preOrder()
This function works as file management for printpreOrder()
Called by p2.c
*/
void preOrder(treeNode* node) {
	
	if (node == NULL)
		return;
	else {
		printer(node);

		preOrder(node->c1);
		preOrder(node->c2);
		preOrder(node->c3);
		preOrder(node->c4);

	}
}


