/*
* @Author: PC
* @Date:   2018-11-30 00:22:09
* @Last Modified by:   PC
* @Last Modified time: 2018-11-30 00:32:48
*/
//链接：http://s2.nowcoder.com/questionTerminal/c01b85c5a67a4a408bad2e95a40d3e67?orderByHotValue=1&mutiTagIds=584&page=8&onlyReference=false
//来源：牛客网
typedef struct { int vertex , out , count } node ;

void Adjust(AdjMatrix g1 , AdjMatrix g2) {
	//对以邻接矩阵存储的DAG图g1重新编号，使若有<i,j>，则编号i<j，重新编号后的图以邻接矩阵g2存储。    {typedef struct { int vertex ,out ,count }node ;
//结点结构：顶点，出度，计数。
	node v[];
//顶点元素数组。
	int c[];    //中间变量
	for (i = 1; i <= n; i++) {//顶点信息数组初始化，设图有n个顶点。
		v[i].vertex = i;
		v[i].out = 0;
		v[i].count = 1;
		c[i] = 1;
	}
//count=1为最小
	for (i = 1; i <= n; i++) {//计算每个顶点的出度。
		for (j = 1; j <= n; j++)
			v[i].out += g1[i][j];
	}
	for (i = n; i >= 2; i--) {//对v的出度域进行计数排序，出度大者，count域中值小。
		for (j = i - 1; j >= 1; j--) {
			if (v[i].count <= v[j].count)
				v[i].count++;
			else
				v[j].count++;
		}
	}
	for (i = 1; i <= n; i++) {//第二次调整编号。若<i,j>且i>j，则顶点j的编号在顶点i的编号之前
		for (j = i; j <= n; j++)
			if (g1[i][j] == 1 &&
			        v[i].count > v[j].count) {
				v[i].count = v[j].count; v[j].count++;
			}
	}
	for (i = n; i >= 2; i--)) {//对v的计数域v[i].count排序，按count域从小到大顺序存到数组c中。
		for (j = i - 1; j >= 1; j--) {
			if (v[i].count < v[j].count)
				c[j]++;
			else
				c[i]++;
		}
	}
	for (i = 1; i <= n; i++) {
	v[i].count = c[i]; //将最终编号存入count 域中。
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			g2[v[i].count][v[j].count] = g1[v[i].vertex][v[j].vertex];
	}
}

