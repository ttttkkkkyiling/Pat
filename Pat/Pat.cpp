//#include"stdafx.h"
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
//const int maxn = 2010;
//const int INF = 100000000;
//
//map<int, string> intTostring;
//map<string, int >stringToint;
//map<string, int >Gang;
//
//int G[maxn][maxn] = { 0 }, weight[maxn] = { 0 };
//int n, k, numPerson = 0;
//bool vis[maxn] = { false };
//
//void DFS(int nowVis, int &head, int &numMenber, int&totalValue) {
//	//����������������
//	//�ýڵ�����Ϊ����
//	//���赱ǰ�û���Ȩ�ش��ڰ��ɰ�����Ȩ��
//	//��������
//	//Ȼ�����������
//	//�鿴��ýڵ�����ϵ�Ľڵ㣬����ýڵ�δ�����ʣ��Ըýڵ���Ϊ���ڵ��������
//	numMenber++;
//	vis[nowVis] = true;
//	if(weight[nowVis]>weight[head]){
//		head = nowVis;
//	}
//	for(int i=0;i<numPerson;i++){
//		//���ýڵ��������
//		if (G[nowVis][i] > 0) {
//			totalValue += G[nowVis][i];
//			G[nowVis][i] = G[i][nowVis] = 0;
//			if(vis[i]==false){
//				DFS(i, head, numMenber, totalValue);
//			}
//		}
//	}
//}
//
//void DFSTrave() {
//	//ѭ��ÿһ���û�
//	//������û�δ������
//	//���Ը��û���Ϊ�ڵ��������ͨ�û�
//	for (int i = 0; i < numPerson; i++) {
//		if(vis[i]==false){
//			int head = i, numMember = 0, totalValue = 0;
//			DFS(i, head, numMember, totalValue);
//			if (numMember > 2 && totalValue > k) {
//				Gang[intTostring[head]] = numMember;
//			}
//		}
//	}
//}
//int change(string str) {
//	//������û��Ѿ����б���ֱ�ӷ���
//	//������û������б�����
//	//��������û����ƶ�Ӧ
//	//���ҽ����е��û�������1
//	if (stringToint.find(str) != stringToint.end())	return stringToint[str];
//	else{
//		stringToint[str] = numPerson;
//		intTostring[numPerson] = str;
//		return numPerson++;
//	}
//}
//int main() {                         //������
//#ifdef ONLINE_JUDGE                 //�����ojϵͳ�������ж�����������ļ����룬����ʹ���ļ���Ϊ��׼����
//#else    
//	freopen("1.txt", "r", stdin);   //��1.txt��������
//#endif 
//	int w;
//	string str1, str2;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> str1 >> str2 >> w;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += w;
//		weight[id2] += w;
//		G[id1][id2] += w;
//		G[id2][id1] += w;
//	}
//	DFSTrave();
//	cout << Gang.size() << endl;
//	map<string, int >::iterator it;
//	for (it = Gang.begin(); it != Gang.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//									//�����Լ��Ĵ���
//	return 0;                       //����0�����������0��PAT�ᱨ��
//}