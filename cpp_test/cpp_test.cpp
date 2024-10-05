////�ڵ� �׽�Ʈ �հ��� �Ǳ�(C++��)
////142p. ���� 01 �迭 �����ϱ�
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int>solution(vector<int> &arr) {
//	sort(arr.begin(), arr.end());
//	return arr;
//}
//int main() {
//	
//	int n;
//	cin >> n; //������ ũ�� ���� ����
//	vector<int>arr(n);
//	for (int i = 0; i < n; i++) {
//		int value;
//		cin >> value;
//		arr[i] = value;
//	}
//	solution(arr);
//	for (auto ans : arr) {
//		cout << ans << " ";
//	}
//	return 0;
//}


////145p. ����02 �迭 �����ϱ� 
//#include<algorithm>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//bool compare(int a, int b) {
//	return a > b;
//}
//vector<int>solution(vector<int>lst) {
//	sort(lst.begin(), lst.end(), compare);
//	lst.erase(unique(lst.begin(), lst.end()),lst.end());
//	return lst;
//}
//int main() {
//	int n;
//	cin >> n;
//	vector<int> arr(n);
//	
//	for (int i = 0; i < n; i++) {
//		int value;
//		cin >> value;
//		arr[i] = value;
//	}
//	for (auto ans : solution(arr)) {
//		cout << ans << " ";
//	}
//	return 0;
//}

////148p. ����03 �� ���� �̾Ƽ� ���ϱ�
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//vector<int> solution(vector<int>numbers) {
//	set<int> sum;
//	for (int i = 0; i < numbers.size(); ++i) {
//		for (int j = i + 1; j < numbers.size(); ++j) {
//			sum.insert(numbers[i] + numbers[j]);
//		}
//	}
//	vector<int> ans(sum.begin(), sum.end());
//	return ans;
//}
//
//int main() {
//	vector<int> v;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int value;
//		cin >> value;
//		v.push_back(value);
//	}
//	for (auto result : solution(v)) {
//		cout << result << " ";
//	}
//}

//// 151p. ����04 ���ǰ��
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//vector<int> firstPattern = { 1,2,3,4,5 };
//vector<int> secondPattern = { 2,1,2,3,2,4,2,5 };
//vector<int> thirdPattern = { 3,3,1,1,2,2,4,4,5,5 };
//
//vector<int> solution(vector<int> answers) {
//	vector<int> answer; //���� ���� ������ ���� ����� ����� ����
//	
//	vector<int> matchCnt(3);
//	for (int i = 0; i < answers.size(); ++i) {
//		if (answers[i] == firstPattern[i%firstPattern.size()])
//			matchCnt[0]++;
//		if (answers[i] == secondPattern[i%secondPattern.size()])
//			matchCnt[1]++;
//		if (answers[i] == thirdPattern[i%thirdPattern.size()])
//			matchCnt[2]++;
//	}
//
//	int max_score = *max_element(matchCnt.begin(), matchCnt.end());//max_element�� �ּҸ� ����
//	//�ּҸ� �����ϹǷ� �ּ��� ���� �޾ƿ����� *�� �ٿ� ���� �����ؾ��Ѵ�.
//
//	for (int i = 0; i < 3; i++) {
//		if (matchCnt[i] == max_score)
//			answer.push_back(i+1);
//	}
//	return answer;
//}

//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
//	vector<vector<int>> answer;
//
//	answer.assign(arr1.size(), vector<int>(arr2[0].size(), 0));
//	for (int i = 0; i < arr1.size(); i++) {
//		for (int j = 0; j < arr2[0].size(); j++) {
//			for (int k = 0; k < arr2.size(); k++) {
//				answer[i][j] = arr1[i][k] * arr2[k][j];
//			}
//		}
//	}
//	return answer;
//}
//int main() {
//	int x;
//	int y;
//	cin >> x >> y;
//	vector<vector<int>>arr1(y, vector<int>(x, 0));
//	vector<vector<int>>arr2(y, vector<int>(x, 0));
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			cin >> arr1[i][j];
//		}
//	}
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			cin >> arr2[i][j];
//		}
//	}
//	vector<vector<int>> answer=solution(arr1, arr2);
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			cout << answer[i][j]+" ";
//		}
//		cout << endl;
//	}
//}

////159p. ����06 ������
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//bool compare(pair<int, float>& a, pair<int, float>& b) {
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	return a.second > b.second;
//}
//vector<int> solution(int N, vector<int> stages) {
//	vector<int> answer;
//	vector<float> challenger(N + 2, 0.0);
//	vector<float>fail(N + 2, 0.0);
//
//	for (int i = 0; i < stages.size(); i++) {
//		for (int j = 1; j <= stages[i]; j++) {
//			challenger[j]++;
//		}
//		fail[stages[i]]++;
//	}
//	vector<pair<int, float>>failRatio(N);
//	
//	for (int i = 0; i < N; i++) {
//		failRatio[i].first = i + 1; //��������
//		if (challenger[i] == 0) {
//			failRatio[i].second = 0;
//		}
//		failRatio[i].second = fail[i + 1] / challenger[i + 1];
//	}
//
//	sort(failRatio.begin(), failRatio.end(), compare);
//	
//	for (int i = 0; i < N; i++) {
//		answer.push_back(failRatio[i].first);
//	}
//	return answer;
//}

////182p. ���� �����ϱ�
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int main() {
//	stack<int>st;
//	
//	st.push(10);
//	st.push(20);
//	st.push(30);
//	while (!st.empty()) {
//		cout << st.top() << " ";
//		st.pop();
//	}
//}

////184p. ����08 ��ȣ ¦ ���߱�
//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//bool solution(string s) {
//	stack<char> st;
//	
//	for (auto p : s) {
//		if (p == '(') {
//			st.push(p);
//		}
//		else if (p == ')') {
//			if (st.empty()) {
//				return false;
//			}
//			else {
//				st.pop();
//			}
//		}
//	}
//	return st.empty();
//}
//int main() {
//	string s;
//	cin >> s;
//	bool rs=solution(s);
//	cout << rs;
//}

////189p. 10������ 2������ ��ȯ�ϱ�
//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//string solution(int dicimal) {
//	stack<int> st;
//	
//	if (dicimal == 0) {
//		return "0";
//	}
//	while (dicimal > 0) {
//		st.push(dicimal % 2);
//		dicimal /= 2;
//	}
//	string binary = "";
//	while (!st.empty()) {
//		binary += to_string(st.top());
//		st.pop();
//	}
//	return binary;
//}
//int main() {
//	int n;
//	cin >> n;
//	string str=solution(n);
//	cout << str;
//}

////193p. ����10 ��ȣ ȸ���ϱ�
//#include<iostream>
//#include<stack>
//#include<string>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
//unordered_map<char, char>bracketPair = { {')','('},{'[',']'},{'{','}'} };
//
//
//bool Check(string &s, int start) {
//	stack<char> stack;
//	unsigned int sz = s.size();
//
//	for (int i = 0; i < sz; i++) {
//		char ch = s[(start + i) % sz];
//
//		if (bracketPair.count(ch)) {
//			if (stack.empty() || stack.top() != bracketPair[ch])
//				return false;
//			stack.pop();
//		}
//		else {
//			stack.push(ch);
//		}
//	}
//	return stack.empty();
//}
//int solution(string s) {
//	int answer = 0;
//	int n = s.size();
//	
//	for (int i = 0; i < n; i++) {
//		answer += Check(s, i);
//	}
//	return answer;
//}
//int main() {
//	string s;
//	cin >> s;
//	int result = solution(s);
//	cout << result;
//}

////200p. ����11 ¦���� �����ϱ�
//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//int solution(string s) {
//	stack<char> stack;
//	
//	for (int i = 0; i < s.length(); i++) {
//		if (stack.empty() || stack.top() != s[i])
//			stack.push(s[i]);
//		else
//			stack.pop();
//	}
//	return stack.empty();
//}
//int main() {
//	string str;
//	cin >> str;
//	cout<<solution(str);
//	return 0;
//}

////204p. ����12 �ֽİ���
//#include<iostream>
//#include<stack>
//#include<vector>
//
//using namespace std;
//
//vector<int>solution(vector<int>prices) {
//	vector<int>ans(prices.size());
//	stack<int>stack;
//
//	int n = prices.size();
//	
//	for (int i = 0; i < n; i++) {
//		while (!stack.empty() && prices[stack.top()] > prices[i]) {
//			ans[stack.top()] = i - stack.top();
//			stack.pop();
//		}
//		stack.push(i);
//	}
//	while (!stack.empty()) {
//		ans[stack.top()] = n - stack.top() - 1;
//		stack.pop();
//	}
//	return ans;
//}
//int main() {
//	vector<int>prices;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int value;
//		cin >> value;
//		prices.push_back(value);
//	}
//	for (int result : solution(prices)) {
//		cout<< result<<" ";
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<stack>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//	// �����ǿ��� ���� ������ ���� bucket�� ����� ������ ������ ������ answer ����
//	stack<int> bucket;
//	int answer = 0;
//
//	for (int m : moves) {
//		int column = m - 1; // moves���� �ε����� 1���� �����ϹǷ� 0-based�� ��ȯ
//		for (int i = 0; i < board.size(); ++i) {
//			// 1. ������ ������ �ش� ������ ����
//			if (board[i][column] != 0) {
//				int doll = board[i][column];
//				board[i][column] = 0; // ���� ���� �ڸ��� 0���� ����
//
//				// 2. ��Ŷ�� �� �� ������ ������ ����
//				if (!bucket.empty() && bucket.top() == doll) {
//					bucket.pop();
//					answer += 2; // ���ŵ� ���� 2�� ī��Ʈ
//				}
//				else {
//					bucket.push(doll); // ��Ŷ�� ���� �߰�
//				}
//				break; // �ش� ������ ������ �������� ���� move�� �̵�
//			}
//		}
//	}
//
//	return answer;
//}
//int main() {
//	vector<vector<int>> board = { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1} };
//	vector<int>moves{ 1,5,3,5,1,2,1,4 };
//	cout<<solution(board, moves);
//	
//	return 0;
//}

////221p. ����14 ǥ ����
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<string>
//using namespace std;
//
//string solution(int n, int k, vector<string> cmd) {
//
//	
//	stack<int> deleted;
//	
//	vector<int> up;
//	vector<int> down;
//
//	for (int i = 0; i < n + 2; i++) {
//		up.push_back(i - 1);
//		down.push_back(i + 1);
//	}
//	
//	k++;
//
//	
//	for (int i = 0; i < cmd.size(); i++) {
//		
//		if (cmd[i][0] == 'C') {
//			deleted.push(k);
//			down[up[k]] = down[k];
//			up[down[k]] = up[k];
//
//			if (down[k] == n + 1) k = up[k];
//			else k = down[k];
//		}
//
//		
//		else if (cmd[i][0] == 'Z') {
//			int r = deleted.top();
//			down[up[r]] = r;
//			up[down[r]] = r;
//			deleted.pop();
//		}
//
//		
//		else {
//			int sz = stoi(cmd[i].substr(2));
//
//			if (cmd[i][0] == 'U') {
//				for (int j = 0; j < sz; j++) {
//					k = up[k];
//				}
//			}
//
//			else if (cmd[i][0] == 'D') {
//				for (int j = 0; j < sz; j++) {
//					k = down[k];
//				}
//			}
//		}
//
//	}
//
//	string answer;
//
//	
//	answer.append(n, 'O');
//	while (!deleted.empty()) {
//		answer[deleted.top() - 1] = 'X';
//		deleted.pop();
//	}
//
//	return answer;
//}
//int main() {
//	cout << solution(8, 2, { "D 2", "C", "U 3", "C", "D 4", "C", "U 2", "Z", "Z" }) << endl;              //OOOOXOOO
//	cout << solution(8, 2, { "D 2", "C", "U 3", "C", "D 4", "C", "U 2", "Z", "Z", "U 1", "C" }) << endl;  //OOXOXOOO
//
//	return 0;
//}

//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main() {
//	queue<int> q;
//
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	while (!q.empty()) {
//		cout << "Front: " << q.front() << endl;
//		q.pop();
//	}
//}

////244p. ����15 �似Ǫ�� ����
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int solution(int n, int k) {
//	queue<int> q;
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//	}
//	while (q.size() > 1) {
//		for (int i = 0; i < k - 1; i++) {
//			q.push(q.front());
//			q.pop();
//		}
//		q.pop();
//	}
//	return q.front();
//}
//int main() {
//	int n;
//	int k;
//	cin >> n >> k;
//	cout << solution(n, k);
//}

////250p. ����16 ��� ����
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//	int n = progresses.size();
//	vector<int>left_days(n);
//
//	for (int i = 0; i < n; i++) {
//		left_days[i] = ceil((100.0 - progresses[i]) / speeds[i]);
//	}
//	int cnt = 0;
//	int max_day = left_days[0];//���ذ����� ���� ���ప�� �켱 ó��
//
//	for (int i = 0; i < n; i++) {
//		if (left_days[i] <= max_day) {
//			cnt++;
//		}
//		else {
//			answer.push_back(cnt);
//			cnt = 1;
//			max_day = left_days[i];
//		}
//	}
//	answer.push_back(cnt);
//	
//	return answer;
//}
//int main() {
//
//
//	return 0;
//}

////256p. ����17 ī�� ��ġ
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//
//using namespace std;
//
//string solution(vector<string>cards1, vector<string> cards2, vector<string>goal) {
//	queue<string>q1, q2, g;
//
//	for (string str1 : cards1) q1.push(str1);
//	for (string str2 : cards2) q2.push(str2);
//	for (string str3 : goal)   g.push(str3);
//
//	while (!g.empty()) {
//		if (!q1.empty() && g.front() == q1.front()) {
//			q1.pop();
//			g.pop();
//		}
//		else if (!q2.empty() && g.front() == q2.front()) {
//			q2.pop();
//			g.pop();
//		}
//		else {
//			break;
//		}
//	}
//	if (g.empty()) {
//		return "Yes";
//	}
//	else {
//		return "No";
//	}
//	
//}
//int main() {
//	cout << solution({ "i", "drink", "water" }, { "want", "to" }, { "i", "want", "to", "drink", "water" }) << endl;
//	return 0;
//}

////284p. ����18�� �� ���� ���� Ư�� �� �����
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//bool solution(vector<int>arr, int target) {
//	vector<int> hash(target + 1, 0);//0�� �ε����� ������� ���� ���̱� ������ ũ��� ã�� ���� +1�� ����
//	for (int i = 0; i < arr.size(); i++) {
//		if (arr[i] > target) {
//			continue;
//		}
//		hash[arr[i]] = 1;
//	}
//	for (int i = 0; i < arr.size(); i++) {
//		int num = target - arr[i];
//		
//		if (arr[i] == num)
//			continue;
//		if (num < 0)
//			continue;
//		if (hash[num])
//			return true;
//	}
//	return false;
//}
//int main() {
//	cout << solution({ 1,2,3,4,8 }, 6) << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_set>
//
//using namespace std;
//
//long long polynomial_hash(const string& str) {
//	const int p = 31;
//	const long long m = 1000000007;
//	long long hash_value = 0;
//
//	for (char c : str) {
//		hash_value = (hash_value*p+c) % m;
//	}
//	return hash_value;
//}
//
//vector<bool> solution(vector<string> string_list, vector<string>query_list) {
//	unordered_set<long long> hash_set;
//	vector<bool>result;
//	for (const string& str : string_list) {
//		long long hash = polynomial_hash(str);//�ؽð��� ����� hash_set�� ����
//		hash_set.insert(hash);
//	}
//	for (const string&query : query_list) {
//		long long query_hash = polynomial_hash(query);
//		bool search = (hash_set.find(query_hash) != hash_set.end());
//		result.push_back(search);
//	}
//	return result;
//}
//void print_result(const vector<bool>& result) {
//	for (bool val : result) {
//		cout << (val ? "true" : "false") << " ";
//	}
//	cout << endl;
//}
//int main() {
//	vector<bool> res = solution({ "apple", "banana", "cherry" }, { "banana", "kiwi", "melon", "apple" });
//
//	print_result(res);
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//	unordered_map<string, int> part_hash;
//	for (int i = 0; i < participant.size(); i++) {
//		part_hash[participant[i]]++;
//	}
//	for (int i = 0; i < completion.size(); i++) {
//		part_hash[completion[i]]--;
//		if (part_hash[completion[i]] == 0)
//			part_hash.erase(part_hash.find(completion[i]));
//	}
//	return part_hash.begin()->first;
//}
//int main() {
//	cout << solution({ "leo", "kiki", "eden" }, { "eden", "kiki" }) << endl; // "leo"
//	cout << solution({ "marina", "josipa", "nikola", "vinko", "filipa" }, { "josipa", "filipa", "marina", "nikola" }) << endl; // "vinko"
//	cout << solution({ "mislav", "stanko", "mislav", "ana" }, { "stanko", "ana", "mislav" }) << endl; // "mislav"
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<string>
//
//using namespace std;
//vector<int> solution(int n, vector<string> words) {
//	vector<int>ans(2, 0);// Ż���� ����� ��ȣ�� ������ ������ ����
//	unordered_set<string>usedWords;
//	usedWords.insert(words[0]);
//	
//	for (int i = 1; i < words.size(); i++) {
//		if (!usedWords.insert(words[i]).second || words[i].front() != words[i - 1].back()) {
//			ans[0] = i % n + 1;
//			ans[1] = i / n + 1;
//			return ans;
//		}
//	}
//	return ans;
//}
//void print_result(const vector<int>& ans) {//�����͸� �ּҰ����� �����ϴ� ������� �����Ͱ� ������ ����� ����;
//		cout << "[" << ans[0] << ", "<<ans[1]<<"]"<<endl;
//	
//}
//int main() {
//	print_result(solution(3, { "tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank" }));
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//////������ ����� ���
////bool solution(vector<string> phonebook) {
////	sort(phonebook.begin(), phonebook.end());
////
////	for (int i = 0; i < phonebook.size() - 1; i++) {
////		if (phonebook[i] == phonebook[i + 1].substr(0, phonebook[i].size()))
////			return false;
////	}
////	return true;
////}
//bool solution(vector<string>phonebook) {
//	
//}
//int main() {
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
//
//using namespace std;
//
//int solution(vector<string>want, vector<int>number, vector<string> discount) {
//	int ans = 0;
//	unordered_map<string, int>wantmap;
//	for (int i = 0; i < want.size(); i++) {
//		wantmap[want[i]] = number[i];
//	}
//	for (int i = 0; i < discount.size() - 9; i++) {
//		unordered_map<string, int>discount_day;
//		for (int j = i; j < 10 + i; j++) {
//			discount_day[discount[j]] ++;
//		}
//		if (wantmap == discount_day)
//			ans++;
//	}
//	return ans;
//}
//int main() {
//	cout << solution({ "banana", "apple", "rice", "pork", "pot" },
//		{ 3, 2, 2, 2, 1 },
//		{ "chicken", "apple", "apple", "banana", "rice","apple", "pork", "banana", "pork", "rice", "pot","banana", "apple", "banana" }) << endl; // 3
//	return 0;
//}
//#include<iostream>
//#include<unordered_map>
//#include<sstream>
//#include <iterator>
//
//using namespace std;
//
//void print(vector<string> vec)
//{
//	copy(vec.begin(), vec.end(), std::ostream_iterator<string>(cout, " "));
//	cout << endl;
//}
//vector<string> solution(vector<string>record) {
//	vector<string> ans;
//	unordered_map<string, string>uid;//���� , ���� �г��� ����
//
//	for (const auto& line : record) {
//		stringstream ss(line);
//		string cmd, id, nickname;
//		ss >> cmd >> id;
//		if (cmd != "Leave") {
//			ss >> nickname;
//			uid[id] = nickname;
//		}
//	}
//	for (const auto& line : record) {
//		stringstream ss(line);
//		string cmd, id;
//		ss >> cmd >> id;
//		
//		if (cmd == "Enter") {
//			ans.push_back(uid[id] + "���� ���Խ��ϴ�.");
//		}
//		else if (cmd == "Leave") {
//			ans.push_back(uid[id] + "���� �������ϴ�.");
//		}
//	}
//	return ans;
//}
//int main() {
//	print(solution({ "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234", "Enter uid1234 Prodo","Change uid4567 Ryan" }));
//	return 0;
//}

//#include<iostream>
//#include<iterator>
//#include<algorithm>
//#include<unordered_map>
//#include<vector>
//
//using namespace std;
//
//bool compareGenre(const pair<string, int>& a, const pair<string, int>& b) {
//	return a.second > b.second;
//}
//
//bool compareSong(const pair<int, int>& a, const pair<int, int>& b) {
//	if (a.second == b.second) return a.first < b.first;
//	return a.second > b.second;
//}
//
//vector<int>solution(vector<string>genres, vector<int>plays) {
//	vector<int>ans;
//	unordered_map<string, vector<pair<int, int>>>genres_dict;
//	unordered_map<string, int> play_dict;
//
//	for (int i = 0; i < genres.size(); ++i) {
//		genres_dict[genres[i]].push_back({ i,plays[i] });
//		play_dict[genres[i]] += plays[i];
//	}
//	vector<pair<string, int>> sorted_genres(play_dict.begin(), play_dict.end());
//	sort(sorted_genres.begin(), sorted_genres.end(), compareGenre);
//
//	for (auto& genre : sorted_genres) {
//		auto& songs = genres_dict[genre.first];
//		sort(songs.begin(), songs.end(), compareSong);
//
//		for (int i = 0; i < min(2, (int)songs.size()); ++i) {
//			ans.push_back(songs[i].first);
//		}
//	}
//
//	return ans;
//}
//void print(vector<int> vec)
//{
//	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//}
//int main() {
//	print(solution({ "classic", "pop", "classic", "classic", "pop" }, { 500, 600, 150, 800, 2500 })); //��°� :  1 0 0 1
//	return 0;
//}

//#include<iostream>
//#include<iterator>
//#include<vector>
//#include<string>
//
//using namespace std;
////������ȸ
//string preorder(vector<int> nodes, int idx) {
//	if (idx < nodes.size()) {
//		string ret = to_string(nodes[idx]) + " ";
//		ret+=preorder(nodes, idx * 2 + 1);
//		ret += preorder(nodes, idx * 2 + 2);
//		return ret;
//	}
//	return "";
//}
////������ȸ
//string inorder(vector<int> nodes, int idx) {
//	if (idx < nodes.size()) {
//		string ret = inorder(nodes, idx * 2 + 1);
//		ret += to_string(nodes[idx]) + " ";
//		ret += inorder(nodes, idx * 2 + 2);
//		return ret;
//	}
//	return "";
//}
////������ȸ
//string postorder(vector<int> nodes, int idx) {
//	if (idx < nodes.size()) {
//		string ret = postorder(nodes, idx * 2 + 1);
//		ret += preorder(nodes, idx * 2 + 2);
//		ret += to_string(nodes[idx]) + " ";
//		return ret;
//	}
//	return "";
//}
//
//
//vector<string> solution(vector<int> nodes) {
//	vector<string> result;
//
//	string pre = preorder(nodes, 0);
//	string in = inorder(nodes, 0);
//	string post = postorder(nodes, 0);
//
//	pre.pop_back();
//	in.pop_back();
//	post.pop_back();
//
//	result.push_back(pre);
//	result.push_back(in);
//	result.push_back(post);
//
//	return result;
//}
//void printVector(const vector<string> vec) {
//	copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, " "));
//	cout << endl;
//}
//int main() {
//	vector<int> node = { 1,2,3,4,5,6,7 };
//	printVector(solution(node));
//	
//}

//#include<iostream>
//#include<iterator>
//#include<vector>
//
//using namespace std;
//
//class Node {
//public:
//	int val;
//	Node* left, * right;
//
//	Node(int key) : val(key), left(nullptr), right(nullptr) {}
//};
//class BST {
//private:
//	Node* root;
//	Node* insertNode(Node* node, int key) {
//		if (!node) {
//			return new Node(key);
//		}
//		if (key < node->val) {
//			node->left = insertNode(node->left, key);
//		}
//		else {
//			node->right = insertNode(node->right, key);
//		}
//		return node;
//	}
//	bool searchNode(Node* node, int key) {
//		if (!node)
//		{
//			return false;
//		}
//		if (key == node->val) {
//			return true;
//		}
//		return key < node->val ?
//			searchNode(node->left, key) :
//			searchNode(node->right, key);
//	}
//public:
//	BST() : root(nullptr) {}
//
//	void insert(int key) {
//		root = insertNode(root, key);
//	}
//	bool search(int key) {
//		return searchNode(root, key);
//	}
//};
//vector<bool>solution(vector<int> lst, vector<int>search_lst) {
//	BST bst;
//	for (int key : lst) {
//		bst.insert(key);
//	}
//	vector<bool> result;
//	for (int search_val : search_lst) {
//		result.push_back(bst.search(search_val));
//	}
//	return result;
//}
//void print(vector<bool> vec) {
//	copy(vec.begin(), vec.end(), ostream_iterator<bool>(cout, " "));
//	cout << endl;
//}
//int main() {
//	print(solution({ 5, 3, 8, 4, 2, 1, 7, 10 }, { 1, 2, 5, 6 })); //��°� : 1 1 1 0
//	print(solution({ 1, 3, 5, 7, 9 }, { 2, 4, 6, 8, 10 })); //��°� : 0 0 0 0 0  
//	return 0;
//}

////375p. ����30 ���� ����ǥ
//#include<iostream>
//
//using namespace std;
//
//int solution(int n, int a, int b) {
//	int ans = 0;
//
//	while (a != b) {
//		a = (a + 1) / 2;
//		b = (b + 1) / 2;
//		++ans;
//	}
//	return ans;
//}
//int main() {
//	int n, a, b;
//	cin >> n >> a >> b;
//	cout<<(solution(n, a, b));
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
//#include <iterator>
//using namespace std;
//
//vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
//    unordered_map<string, string> parent;
//
//
//    for (size_t i = 0; i < enroll.size(); ++i) {
//        parent[enroll[i]] = referral[i];
//    }
//
//    unordered_map<string, int> total;
//
//    for (const auto& name : enroll) {
//        total[name] = 0;
//    }
//
//    for (size_t i = 0; i < seller.size(); ++i) {
//
//        int money = amount[i] * 100;
//        string cur_name = seller[i];
//
//        while (money > 0 && cur_name != "-") {
//            
//            int to_distribute = money / 10;
//            total[cur_name] += money - to_distribute;
//            
//            if (parent.find(cur_name) != parent.end()) {
//                cur_name = parent[cur_name];
//            }
//            else {
//                break;
//            }
//           
//            money = to_distribute;
//        }
//    }
//
// 
//    vector<int> result;
//    result.reserve(enroll.size());
//    for (const auto& name : enroll) {
//        result.push_back(total[name]);
//    }
//
//    return result;
//}
//
//void print(vector<int> vec)
//{
//    copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
//    cout << endl;
//}
//int main() {
//    print(solution({ "john", "mary", "edward", "sam", "emily", "jaimie", "tod", "young" },
//        { "-", "-", "mary", "edward", "mary", "mary", "jaimie", "edward" },
//        { "young", "john", "tod", "emily", "mary" },
//        { 12, 4, 2, 5, 10 }
//    )); //��°� : 360 958 108 0 450 18 180 1080
//
//    print(solution({ "john", "mary", "edward", "sam", "emily", "jaimie", "tod", "young" },
//        { "-", "-", "mary", "edward", "mary", "mary", "jaimie", "edward" },
//        { "sam", "emily", "jaimie", "edward" },
//        { 2, 3, 5, 4 }
//    )); //��°� : 0 110 378 180 270 450 0 0 
//}
// 
// 
// 387p. ����32 �� ã�� ����
//#include<iostream>
//#include<iterator>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//struct Node {
//	int id, x, y;
//	Node* left = nullptr;
//	Node* right = nullptr;
//	Node(int id, int x, int y) :id(id), x(x), y(y) {}
//};
//class BinaryTree {
//private:
//	Node* root = nullptr;
//	static bool compareNodes(Node* a, Node* b) {//y��ǥ�� ��������, y��ǥ�� ���ٸ� x��ǥ ������������ ����
//		if (a->y != b->y)
//			return a->y > b->y;
//		
//		return a->x < b->x;
//	}
//	Node* addNode(Node* current, Node* newNode) {
//		if (current == nullptr) {
//			return newNode;
//		}
//		if (newNode->x < current->x) {
//			current->left = addNode(current->left, newNode);
//		}
//		else
//			current->right = addNode(current->right, newNode);
//
//		return current;
//	}
//	void preOrder(Node* node, vector<int>& traversal) {
//		if (node == nullptr) {
//			return;
//		}
//		traversal.push_back(node->id);
//		preOrder(node->left, traversal);
//		preOrder(node->right, traversal);
//	}
//	void postOrder(Node* node, vector<int>& traversal) {
//		if (node == nullptr)
//			return;
//		postOrder(node->left, traversal);
//		postOrder(node->right, traversal);
//		traversal.push_back(node->id);
//	}
//public:
//	BinaryTree() : root(nullptr) {}
//	void buildTree(const vector<vector<int>>& nodeInfo) {
//		vector<Node*>nodes;
//		for (int i = 0; i < nodeInfo.size(); i++) {
//			nodes.push_back(new Node(i + 1, nodeInfo[i][0], nodeInfo[i][1]));
//		}
//		sort(nodes.begin(), nodes.end(), compareNodes);
//		for (Node* node : nodes) {
//			root = addNode(root, node);
//		}
//	}
//	vector<int> getPreOrderTraversal() {
//		vector<int>traversal;
//		preOrder(root, traversal);
//		return traversal;
//	}
//	vector<int>getPostOrderTraversal() {
//		vector<int>traversal;
//		postOrder(root, traversal);
//		return traversal;
//	}
//};
//vector<vector<int>> solution(vector<vector<int>>nodeinfo) {
//	BinaryTree tree;
//	tree.buildTree(nodeinfo);
//	vector<int>preOrder = tree.getPreOrderTraversal();
//	vector<int>postOrder = tree.getPostOrderTraversal();
//
//	return{ preOrder,postOrder };
//}
//void print(vector<vector<int>> vec) {
//	for (auto& vec_element : vec) {
//		copy(vec_element.begin(), vec_element.end(), ostream_iterator<int>(cout, " "));
//		cout << endl;
//	}
//}
//int main() {
//	print(solution({ {5, 3}, {11, 5}, {13, 3}, {3, 5}, {6, 1}, {1, 3}, {8, 6}, {7, 2}, {2, 2} }));
//
//	return 0;
//}

////411p. ����33 ������ ���Ͽ�-���ε� �˰��� �����ϱ�
//#include<iostream>
//#include<iterator>
//#include<vector>
//
//using namespace std;
//
//vector<int>parents;
//vector<int>rankData;
//int charToInt(char c) {
//	return c - '0';
//}
//
//int find(int x) {//x�� �ε��� ���� �ǹ�
//	if (parents[x] == x) {
//		return x;
//	}
//	parents[x] = find(parents[x]);
//	
//	return parents[x];
//}
//void unionSet(int x, int y) {
//	int root1 = find(x);
//	int root2 = find(y);
//	
//	if (root1 != root2) {
//		//��Ʈ ��尡 �ٸ� ��츸 üũ, ���� ���� ��ġ�� ������ �ʿ����
//		if (rankData[root1] < rankData[root2])
//			parents[root1] = root2;
//		else if (rankData[root1] > rankData[root2])
//			parents[root2] = root1;
//		else {
//			parents[root2] = root1;
//			rankData[root1]++;
//		}
//	}
//}
//
//vector<bool>solution(int k, vector<vector<char>>operations) {
//	parents.resize(k);
//	rankData.resize(k, 0);
//	
//	for (int i = 0; i < k; i++) {
//		parents[i] = i;
//	}
//	vector<bool>results;
//	for (const auto& op : operations) {
//		if (op[0] == 'u') {
//			int x = charToInt(op[1]);
//			int y = charToInt(op[2]);
//			unionSet(x, y);
//		}
//		else if (op[0] == 'f') {
//			int x = charToInt(op[1]);
//			int y = charToInt(op[2]);
//			results.push_back(find(x) == find(y));
//		}
//	}
//	return results;
//}
//void print(vector<bool>vec) {
//	copy(vec.begin(), vec.end(), ostream_iterator<bool>(cout, " "));
//	cout << endl;
//}
//int main() {
//	print(solution(3, { {'u', '0', '1'}, {'u', '1', '2'}, {'f', '0', '2'} })); // ����� : 1
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<unordered_set>
//
//using namespace std;
//
//int solution(vector<int> nums) {
//	unordered_set<int>s (nums.begin(), nums.end());
//	return min(nums.size() / 2, s.size());
//}
//int main() {
//	cout << solution({ 3, 1, 2 ,3 }) << endl; //��°� : 2
//	cout << solution({ 3, 3, 3, 2, 2, 4 }) << endl; //��°� : 3
//	cout << solution({ 3, 3, 3, 2, 2, 2 }) << endl; //��°� : 2
//	return 0;
//}

////420p. ����35 �� �����ϱ�
//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//class DisjointSet {
//private:
//	vector<int> parent, rank;
//	
//public:
//	DisjointSet(int size): parent(size, -1), rank(size,0){}
//	
//	int find(int node) {
//		if (parent[node] == -1)
//			return node;
//		return parent[node] = find(parent[node]);
//	}
//	
//	void merge(int node1, int node2) {
//		int root1 = find(node1);
//		int root2 = find(node2);
//
//		if (root1 != root2) {
//			if (rank[root1] > rank[root2]) {
//				parent[root2] = root1;
//			}
//			else if (rank[root1] < rank[root1]) {
//				parent[root1] = root2;
//			}
//			else {
//				parent[root2] = root1;
//				rank[root1]++;
//			}
//		}
//	}
//	bool isCycle(int node1, int node2) {
//		return find(node1) == find(node2);
//	}
//};
//int solution(int n, vector<vector<int>>costs) {
//	sort(costs.begin(), costs.end(),
//		[](const vector<int>& a, const vector<int>& b) {return a[2] < b[2]; });//������ ����ġ�� �������� �������� ����
//	DisjointSet disjointSet(n);
//	int totalCost = 0;
//	
//	for (const auto& edge : costs) {
//		int cost = edge[2];
//		int node1 = edge[0];
//		int node2 = edge[1];
//		
//		if (!disjointSet.isCycle(node1,node2)) {
//			disjointSet.merge(node1, node2);
//			totalCost += cost;
//		}
//	}
//	return totalCost;
//}
//int main() {
//	cout << solution(4, { {0, 1, 1}, {0, 2, 2}, {1, 2, 5}, {1, 3, 1}, {2, 3, 8} }) << endl; //��°� : 4
//	return 0;
//}
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct nodeInfo {
//	int V;
//	int W;
//};
//vector<vector<nodeInfo>>adjList; //��������Ʈ
//void addEdge(int u, int v, int w) {
//	adjList[u].push_back({ v, w });
//}
//
//void printAdjList() {
//	for (int i = 1; i < adjList.size(); i++) {
//		cout << "Node" << i << ":";
//		for (const auto& node : adjList[i]) {
//			cout << "-> (v: " << node.V << ", W: " << node.W << ")";
//		}
//		cout << endl;
//	}
//}
//int main() {
//	int N = 5;
//	adjList.resize(N);
//	addEdge(1, 2, 3);
//	addEdge(2, 1, 6);
//	addEdge(2, 3, 5);
//	addEdge(3, 2, 1);
//	addEdge(3, 4, 13);
//	addEdge(4, 4, 9);
//	addEdge(4, 1, 42);
//
//	printAdjList();
//	
//	return 0;
//}

////467p. ����36 ���� �켱 Ž�� ��ȸ
//#include<iostream>
//#include<iterator>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//
//using namespace std;
//
//unordered_map<char, vector<char>>adjList;
//vector<char>result;
//unordered_set<char>visited;
//
//void dfs(char node) {
//	visited.insert(node);
//	result.push_back(node);
//
//	for (char neighbor : adjList[node]) {
//		if (visited.find(neighbor) == visited.end()) {
//			dfs(neighbor);
//		}
//	}
//}
//
//vector<char>solution(vector<pair<char, char>>graph, char start) {
//	for (auto& edge : graph) {
//		char u = edge.first;
//		char v = edge.second;
//		adjList[u].push_back(v);
//	}
//	dfs(start);
//	return result;
//}
//void print(vector<char> vec) {
//	copy(vec.begin(), vec.end(), ostream_iterator<char>(cout, " "));
//}
//int main() {
//	print(solution({ {'A', 'B'}, {'B', 'C'}, {'C', 'D'}, {'D', 'E'} }, 'A')); //��°� : A B C D E
//	return 0;
//}

//#include<iostream>
//#include<unordered_map>
//#include<unordered_set>
//#include<queue>
//#include<vector>
//
//using namespace std;
//
//unordered_map<int, vector<int>>adjList;
//vector<int>result;
//void bfs(int start) {
//	unordered_set<int> visited;
//	queue<int> q;
//
//	q.push(start);
//	visited.insert(start);
//	result.push_back(start);
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//
//		for (int neighbor : adjList[node]) {
//			if (visited.find(neighbor) == visited.end()) {
//				q.push(neighbor);
//				visited.insert(neighbor);
//				result.push_back(neighbor);
//			}
//		}
//	}
//}
//vector<int> solution(vector<pair<int, int>>graph, int start) {
//	for (auto& edge : graph) {
//		int u = edge.first;
//		int v = edge.second;
//		adjList[u].push_back(v);
//	}
//	bfs(start);
//
//	return result;
//}
//void init() {
//	adjList.clear();
//	result.clear();
//}
//void print(vector<int> vec) {
//	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
//	cout << endl;
//}
//int main() {
//	print(solution({ {1, 2}, {1, 3}, {2, 4}, {2, 5}, {3, 6}, {3, 7}, {4, 8}, {5, 8}, {6, 9}, {7, 9} }, 1)); //��°� : 1 2 3 4 5 6 7 8 9
//	init();
//	print(solution({ {0, 1}, {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 0} }, 1)); //��°� : 1 2 3 4 5 0
//	return 0;
//}

//// ������(���ͽ�Ʈ�� �˰���-����Ʈ ���)
//#include<iostream>
//#include<vector>
//
//#define INF 1e9//������ �ǹ��ϴ� ������ 10�� ����
//using namespace std;
//
//int n, m, start;
//
//vector<pair<int, int>> graph[100001];//�� ��忡 ����Ǿ� �ִ� ��忡 ���� ������ ��� �迭
//bool visited[100001];
//int d[100001];//�ִܰŸ� ���̺�
//int getSmallestNode() {
//	int min_value = INF;
//	int index = 0;
//
//	for (int i = 1; i <= n; i++) {
//		if (d[i] < min_value && visited[i]) {
//			min_value = d[i];
//			index = i;
//		}
//	}
//	return index;
//}
////���ͽ�Ʈ�� ���� �Լ�
//void dijkstra(int start) {
//	d[start] = 0;
//	visited[start] = true;
//	for (int j = 0; j < graph[start].size(); j++) {
//		int adjindex = graph[start][j].first;
//		d[adjindex] = graph[start][j].second;//�ִܰŸ� ���̺� �ʱⰪ ����
//	}
//	for (int i = 0; i < n - 1; i) {
//		int now = getSmallestNode();
//		visited[now] = true;
//		for (int j = 0; j < graph[now].size(); j++) {
//			int cost = d[now] + graph[now][j].second;
//			if (cost < d[graph[now][j].first])
//				d[graph[now][j].first] = cost;
//		}
//	}
//}
//int main()
//{
//    cin >> n >> m >> start;
//    // ��� ���� ������ �Է¹ޱ�
//    for (int i = 0; i < m; i++)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;  // a�� ��忡�� b�� ���� ���� ����� c��� �ǹ�
//        graph[a].push_back({ b, c });
//    }
//
//    // �ִ� �Ÿ� ���̺��� ��� �������� �ʱ�ȭ
//    fill_n(d, 100001, INF);
//
//    dijkstra(start);
//
//    // ��� ���� ���� ���� �ִ� �Ÿ��� ���
//    for (int i = 1; i <= n; i++)
//    {
//        // ������ �� ���� ���, ����(INFINITY)�̶�� ���
//        if (d[i] == INF)
//        {
//            cout << "INFINITY" << '\n';
//        }
//        // ������ �� �ִ� ��� �Ÿ��� ���
//        else
//        {
//            cout << d[i] << '\n';
//        }
//    }
//    return 0;
//}
//
//// ������(���ͽ�Ʈ�� �˰���-�켱����ť ���)
//#include <stdio.h>
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//#define INF 1e9 // ������ �ǹ��ϴ� ������ 10���� ����
//
//// ����� ����(N), ������ ����(M), ���� ��� ��ȣ(Start)
//// ����� ������ �ִ� 100,000����� ����
//int n, m, start;
//
//vector<pair<int, int> > graph[100001]; // �� ��忡 ����Ǿ� �ִ� ��忡 ���� ������ ��� �迭
//int d[100001]; // �ִ� �Ÿ� ���̺� �����
//
//void dijkstra(int start)
//{
//    priority_queue<pair<int, int>>pq; // �Ÿ�, ��� �ε���
//
//    pq.push({ 0,start }); //���� ���� �������� �ִ� ��δ� 0���� �����Ͽ�, ť�� ����.
//    d[start] = 0;
//
//    while (!pq.empty())
//    {
//        int dist = -pq.top().first; //���� �������� ���
//        int now = pq.top().second; // ���� ���
//        pq.pop();
//
//        if (d[now] < dist) // �̹� �ִܰ�θ� üũ�� ����� ��� �н�
//            continue;
//
//        for (int i = 0; i < graph[now].size(); i++)
//        {
//            int cost = dist + graph[now][i].second; // ���ļ� ���� ����� ����� ���
//            // ��������� ��� + ���� ��� ���
//            if (cost < d[graph[now][i].first]) // ����� �� �۴ٸ� �ִܰ�� ���̺� ���� ����.
//            {
//                d[graph[now][i].first] = cost;
//                pq.push(make_pair(-cost, graph[now][i].first));
//            }
//        }
//    }
//}
//
//int main(void)
//{
//    cin >> n >> m >> start;
//
//    // ��� ���� ������ �Է¹ޱ�
//    for (int i = 0; i < m; i++)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;
//        // a�� ��忡�� b�� ���� ���� ����� c��� �ǹ�
//        graph[a].push_back({ b, c });
//    }
//
//    // �ִ� �Ÿ� ���̺��� ��� �������� �ʱ�ȭ
//    fill(d, d + 100001, INF);
//
//    // ���ͽ�Ʈ�� �˰����� ����
//    dijkstra(start);
//
//    // ��� ���� ���� ���� �ִ� �Ÿ��� ���
//    for (int i = 1; i <= n; i++)
//    {
//        // ������ �� ���� ���, ����(INFINITY)�̶�� ���
//        if (d[i] == INF) {
//            cout << "INFINITY" << '\n';
//        }
//        // ������ �� �ִ� ��� �Ÿ��� ���
//        else {
//            cout << d[i] << '\n';
//        }
//    }
//}

////481p. ����39 ����-���� �˰���
//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//const int INF = numeric_limits<int>::max();
//// ������ ��Ÿ���� ����ü
//struct Edge {
//    int src, dest, weight;
//};
//
//// �׷����� ��Ÿ���� Ŭ����
//class Graph {
//public:
//    int V, E;
//    vector<Edge> edges;
//
//    Graph(int V, int E) {
//        this->V = V;
//        this->E = E;
//        edges.reserve(E);
//    }
//
//    // ���� �߰� �޼���
//    void addEdge(int u, int v, int w) {
//        edges.push_back({ u, v, w });
//    }
//
//    // ����-���� �˰��� ����
//    void BellmanFord(int src) {
//        // ������ �Ÿ��� ���Ѵ�� �ʱ�ȭ
//        vector<int> dist(V, INF);
//        dist[src] = 0;
//
//        // ��� ������ ���� |V| - 1�� �ݺ�
//        for (int i = 1; i <= V - 1; i++) {
//            for (const auto& edge : edges) {
//                int u = edge.src;
//                int v = edge.dest;
//                int weight = edge.weight;
//
//                // ���� ������ �� ª�� ��θ� �����ϴ� ��� �Ÿ� ����
//                if (dist[u] != INF && dist[u] + weight < dist[v]) {
//                    dist[v] = dist[u] + weight;
//                }
//            }
//        }
//
//        // ���� ����Ŭ üũ: |V|-1�� �ݺ� �Ŀ��� �Ÿ��� ���ŵǸ� ���� ����Ŭ ����
//        for (const auto& edge : edges) {
//            int u = edge.src;
//            int v = edge.dest;
//            int weight = edge.weight;
//
//            if (dist[u] != INF && dist[u] + weight < dist[v]) {
//                cout << "���� ����Ŭ�� �����մϴ�.\n";
//                return;
//            }
//        }
//
//        // ���� �Ÿ� ���
//        cout << "���� " << src << "�κ����� �ִ� �Ÿ�:\n";
//        for (int i = 0; i < V; ++i) {
//            if (dist[i] ==INF)
//                cout << "���� " << i << "���� ��ΰ� �������� �ʽ��ϴ�.\n";
//            else
//                cout << "���� " << i << "���� �Ÿ�: " << dist[i] << "\n";
//        }
//    }
//};
//
//int main() {
//    // ���� ���� ���� ��
//    int V = 5;
//    int E = 8;
//
//    Graph g(V, E);
//
//    // ���� �߰� (u, v, w): u -> v (����ġ w)
//    g.addEdge(0, 1, -1);
//    g.addEdge(0, 2, 4);
//    g.addEdge(1, 2, 3);
//    g.addEdge(1, 3, 2);
//    g.addEdge(1, 4, 2);
//    g.addEdge(3, 2, 5);
//    g.addEdge(3, 1, 1);
//    g.addEdge(4, 3, -3);
//
//    // ����-���� ����, ���� ������ 0
//    g.BellmanFord(0);
//
//    return 0;
//}

////485p. ����40 �̷� Ż��
//#include<iostream>
//#include<queue>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//struct Point {
//	int y, x, cnt;
//};
//int dy[4] = { -1,0,1,0 };
//int dx[4] = { 0,-1,0,1 };
//int n, m;
//
//bool isWithinRange(int y, int x) { return 0 <= y && y < n && 0 <= x && x < m; }
//
//Point findStartPoint(char start, vector<string>& maps) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (maps[i][j] == start) {
//				return { i,j,0 };
//			}
//		}
//	}
//	return { -1,-1,0 };//��� ��ǥŽ�� �� �������� ã�� ���� ���
//}
//int bfs(char start, char end, vector<string>& maps) {
//	bool visited[101][101] = { false };
//	queue<Point> q;//����ü�� ���� y��ǥ, x��ǥ, count ����
//	q.push(findStartPoint(start, maps));//���� ������ �ʺ� �켱 Ž��
//	
//	while (!q.empty()) {
//		Point current = q.front();
//		q.pop();
//
//		if (maps[current.y][current.x] == end) {
//			return current.cnt;
//		}
//		for (int i = 0; i < 4; i++) {
//			int ny = current.y + dy[i];
//			int nx = current.x + dx[i];
//
//			if (isWithinRange(ny, nx) && !visited[ny][nx] && maps[ny][nx] != 'X') {
//				q.push({ ny, nx,current.cnt + 1 });
//				visited[ny][nx] = true;
//			}
//		}
//	}
//	return -1;
//}
//int solution(vector<string>maps) {
//	n = maps.size();
//	m = maps[0].size();
//	
//	int distanceToL = bfs('S', 'L', maps);
//	if (distanceToL == -1) {
//		return -1;
//	}
//	int distanceToE = bfs('L', 'E', maps);
//	return distanceToE == -1 ? -1 : distanceToL + distanceToE;
//}
//int main() {
//	cout << solution({ "SOOOL", "XXXXO", "OOOOO", "OXXXX", "OOOOE" }) << endl; //��°� : 16
//	return 0;
//}

////492p. ����41 ���� �� �ִܰŸ�
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//const int MAX_SIZE = 100;
//const int dy[4] = {-1,0,1,0};
//const int dx[4] = {0,-1,0,1};
//int check[MAX_SIZE][MAX_SIZE];
//int n, m;
//
//struct Point {
//	int y, x, cnt;
//};
//queue<Point>q;
//int solution(vector<vector<int>>maps) {
//	n = maps.size();
//	m = maps[0].size();
//	q.push({ 0,0,1 });
//	check[0][0] = 1;
//	while (!q.empty()) {
//		Point current = q.front();
//		q.pop();
//
//		if (current.y == n - 1 && current.x == m - 1)
//			return current.cnt;
//
//		for (int i = 0; i < 4; i++) {
//			int ny = current.y + dy[i];
//			int nx = current.x + dx[i];
//			if ((0 <= ny && ny < n && 0 <= nx && nx < m)&&check[ny][nx]==0&&maps[ny][nx]==1) {
//				q.push({ ny,nx,current.cnt + 1 });
//				check[ny][nx] = 1;//�湮 üũ
//			}
//		}
//	}
//	int destinationX = m - 1; 
//	int destinationY = n - 1;
//	if (check[destinationY][destinationX] == 0) {
//		return -1;
//	}
//}
//int main() {
//	cout << solution({ {1, 0, 1, 1, 1}, {1, 0, 1, 0, 1}, {1, 0, 1, 1, 1}, {1, 1, 1, 0, 1}, {0, 0, 0, 0, 1} }) << endl; //��°� : 11
//	return 0;
//}

////498p. ����42 ��Ʈ��ũ
//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//vector<bool>visited;
//
//void dfs(const vector<vector<int>>& network, int node) {
//	visited[node] = true;
//
//	for (int i = 0; i < network[node].size(); i++) {
//		if (network[node][i] && !visited[i])
//			dfs(network, i);
//	}
//}
//int solution(int n, vector<vector<int>>computers) {
//	visited = vector<bool>(computers.size(), false);
//	int networkCount = 0;
//
//	for (int i = 0; i < computers.size(); i++) {
//		if (!visited[i]) {
//			dfs(computers, i);
//			networkCount++;
//		}
//	}
//	return networkCount;
//}
//int main() {
//	cout << solution(3, { {1, 1, 0}, {1, 1, 0}, {0, 0, 1} }) << endl; //��°� : 2
//	return 0;
//}

////union-find �˰��� ����
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//
//using namespace std;
//
//int parent[201];
//
//int findParent(int node) {
//	if (node == parent[node])//Ž�� ���� ��Ʈ ��尡 ���� �ش� ��带 ����
//		return node;
//	return parent[node] = findParent(parent[node]);
//}
//void unionNodes(int node1, int node2) {
//	int root1 = findParent(node1);
//	int root2 = findParent(node2);
//	if (root1 != root2) {
//		parent[root2] = root1;
//	}
//}
//int solution(int n, vector<vector<int>>computers) {
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		parent[i] = i;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (computers[i][j])
//				unionNodes(i, j);
//		}
//	}
//	unordered_map<int, bool> networkFound;
//	for (int i = 0; i < n; i++) {
//		int root = findParent(i);
//		if (!networkFound[root]) {//networkFound�� ���� �������� ������ �⺻�� false��
//			ans++;
//			networkFound[root] = true;
//		}
//	}
//	return ans;
//}
//int main() {
//	cout << solution(3, { {1, 1, 0}, {1, 1, 0}, {0, 0, 1} }) << endl; //��°� : 2
//	return 0;
//}

////511p. ����44 ���
//#include <vector>
//#include <queue>
//#include <limits>
//#include <utility> // For std::pair
//#include <iostream>
//
//using namespace std;
//
//int const INF = numeric_limits<int>::max();
//
//int solution(int N, vector<vector<int>> road, int K) {
//    vector<vector<pair<int, int>>> graph(N + 1); // 1. 2���� ���ͷ� �׷��� ����
//    vector<int> distances(N + 1, INF); // 2. �Ÿ��� ���Ѵ�� �ʱ�ȭ
//    vector<bool> visited(N + 1, false);
//    distances[1] = 0;
//
//    // 3. ������ ���� �����Ƿ�, ����� ��� ������ ����ġ �Է�
//    for (const auto& r : road) {
//        int a = r[0], b = r[1], cost = r[2];
//        graph[a].push_back({ b, cost });
//        graph[b].push_back({ a, cost });
//    }
//
//    // 4. ������� heap�� �߰�
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
//    heap.push({ 0, 1 });
//
//    while (!heap.empty()) {
//        int dist = heap.top().first;
//        int node = heap.top().second;
//        heap.pop();
//
//        // 5. �̹� �湮�� ���� ����
//        if (visited[node]) continue;
//        visited[node] = true;
//
//        for (const auto& next : graph[node]) {
//            int next_node = next.first;
//            int next_dist = next.second;
//            int cost = dist + next_dist;
//
//            // 6. ���İ��� ���� ���� ����� ����� �� ª�� ���
//            if (cost < distances[next_node]) {
//                distances[next_node] = cost;
//                heap.push({ cost, next_node });
//            }
//        }
//    }
//
//    int count = 0;
//
//    // 7. �Ÿ��� K ������ ��Ҹ� ī��Ʈ
//    for (int i = 1; i <= N; i++) {
//        if (distances[i] <= K) count++;
//    }
//
//    return count;
//}
//
//int main() {
//    cout << solution(5, { {1, 2, 1}, {2, 3, 3}, {5, 2, 2}, {1, 4, 2}, {5, 3, 1}, {5, 4, 2} }, 3) << endl; // ��°�: 4
//    cout << solution(6, { {1, 2, 1}, {1, 3, 2}, {2, 3, 2}, {3, 4, 3}, {3, 5, 2}, {3, 5, 3}, {5, 6, 1} }, 4) << endl; // ��°�: 4
//    return 0;
//}

//522p. ����46 ���¸��� �ѷ� ������
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int solution(int n, vector<vector<int>>wires) {
	
}
int main() {
	return 0;
}
