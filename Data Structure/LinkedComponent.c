/*
* @Author: PC
* @Date:   2018-11-29 23:55:19
* @Last Modified by:   PC
* @Last Modified time: 2018-11-30 00:04:46
*/
void DFS(int v) {
	visited[v] = 1;
	//visited[] saves all the nodes
	printf("%3d", v);
	p = g[v].firstArc;

	while (p != NULL) {
		if (visited[p -> adjvex] == 0)
			DFS (p -> adjvex);
		p = p-> next;
	}
}
void count() {
	int k = 0;
	static Adjlist g;
	for (int i = 1; i <= n; i++) {
		if (visited[i] == 0) {
			printf("%n the ith tarjan is: \n", ++k);
			DFS(i);
		}
	}
}