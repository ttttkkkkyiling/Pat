//#include<iostream>                  //���������ͷ�ļ�
//#include<stdio.h>                   //��׼�������
//#include<stdlib.h>
//#include<math.h>                    //��ѧ����
//#include<string.h>                  //C�����ַ�������ַ���
//#include<algorithm>                 //C++��׼ģ���ĺ���
//#include<map>                       //mapӳ������
//#include<unordered_map>             //�����mapӳ������
//#include<vector>                    //�䳤��������
//#include<queue>                     //����
//#include<stack>                     //ջ
//#include<string>                    //C++string��
//#include<set>                       //set����
//using namespace std;                //��׼�����ռ�
//
//									//���Լ���ȫ�ֱ���������������
//
//const int maxn = 510;
//const int Inf = 100000;
//int G[maxn][maxn] = {Inf};
//int weight[maxn] = { 0 };
//int w[maxn] = { 0 };
//int l[maxn] = { Inf };
//int num[maxn] = { 0 };
//int n, k, s, e;
//bool vis[maxn] = { false };
//void Dijks(int nowvis) {
//		if(vis[nowvis]==false){
//			vis[nowvis] = true;
//			weight[nowvis] = w[nowvis];
//			l[nowvis] = 0;
//		}
//	for (int i = 0; i < n; i++) {
//		int u = -1, min = 0;
//		for(int j=0;j<n;j++){
//			if (vis[j] == false && l[j] < min) {
//				u = j;
//				min = l[j];
//			}
//		}
//		if (u == -1)	return;
//		vis[u] == true;
//		for(int v=0;v<n;v++){
//			if(vis[v]==false&&G[u][v]!=Inf){
//				if(l[u]+G[u][v]<l[v]){
//					l[v] = l[u] + G[u][v];
//					weight[v] = weight[v] + w[u];
//					num[v] = num[u];
//				}
//				
//			}
//		}
//	}
//}
//int main() {                         //������
//#ifdef ONLINE_JUDGE                 //�����ojϵͳ�������ж�����������ļ����룬����ʹ���ļ���Ϊ��׼����
//#else    
//	freopen("1.txt", "r", stdin);   //��1.txt��������
//#endif 
//
//									
//	cin >> n >> k >> s >> e;
//	for (int i = 0; i < n; i++) {
//		cin >> w[i];
//	}
//	for (int i = 0; i < k; i++) {
//		int a, b, l;
//		cin >> a >> b >> l;
//		G[a][b] = l;
//		G[b][a] = l;
//	}
//	Dijks(nowvis);
//	return 0;                       //����0�����������0��PAT�ᱨ��
//}