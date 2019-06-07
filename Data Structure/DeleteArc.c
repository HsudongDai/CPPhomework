void deleteArc(Adjlist g, int i, int j) {
	p = g[i].firstArc;
	pre = NULL;
	//pre is the previous pointer
	while (p) { //delete (i, j)
		if (p -> adjvex == j) {
			if (p == NULL)
				g[i].firstArc = p -> next;
			else {
				pre = p;
				p = p -> next;
			}
		}
		else {
			p = g[j].firstArc;
			pre = NULL;
		}
	}
	while (p) { //delete (j, i)
		if (p -> adjvex = i) {
			if (pre == NULL)
				g[j].firstArc = p -> next;
			else {
				pre -> next = p -> next;
				free(p);
			}
		}
		else {
			pre = p;
			p = p -> next;
		}
	}
}