int height(BiTree t)
{
	int level = 0;
	BiTree p = t;
	while (p){
		level++;
		if (p -> bf < 0)
			p = p -> rLink;
		else
			p = p -> lLink;
	}
	return level;
}