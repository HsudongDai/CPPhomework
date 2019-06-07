void AdjList2AdjMatrix(AdjList gl, AdjMatrix gm)
{
	for (int i = 1; i <= n; i++) {
		//suppose there are n vertices in the graph
		for (int j = 1; j <= n; j++) {
			gm[i][j] = 0;
		}

		for (int j = 1; j <= n; j++) {
			p = gl[i].firstArc;
			while (p != NULL) {
				gm[i][p -> adjvex] = 1;
				p = p -> next;
			}
		}
	}
}