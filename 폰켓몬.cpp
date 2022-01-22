int solution(vector<int> nums)
{
    vector<int> ball;
    ball.push_back(nums[0]);
    int answer = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (find(ball.begin(), ball.end(), nums[i]) == ball.end()) {
            answer++;
            ball.push_back(nums[i]);
        }
        if (answer == (nums.size() / 2)) break;
    }
    return answer;
}