class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for (string op : operations) {
            if (op == "+") {
                int top1 = s.top(); s.pop();
                int top2 = s.top();
                int sum = top1 + top2;
                s.push(top1);
                s.push(sum);
            }
            else if (op == "C") {
                s.pop();
            }
            else if (op == "D") {
                s.push(s.top() * 2);
            }
            else {
                // Only push if it's a number
                s.push(stoi(op));
            }
        }

        int total = 0;
        while (!s.empty()) {
            total += s.top();
            s.pop();
        }

        return total;
    }
};
