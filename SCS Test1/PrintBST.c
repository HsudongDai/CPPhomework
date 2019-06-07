void printBST(BiTree t)
{
	if (t == NULL)
		printf("%s", t->data);
	if (t->lLink || t->rLink){
		printf("(");
		printBST(t->lLink);
		if (t -> rLink)
			printf("%s", ", ");
		printBST("%s", ")");
	}
}