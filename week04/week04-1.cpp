///week04-1.cpp
///LeetCode �D���D 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; ///�@�}�l�N�ܤF����h�~
        while(numBottles >= numExchange){ ///�p�G�~�l�� >= �I���q, �N�I��
            numBottles = numBottles - numExchange +1; ///�I������
            ans ++; ///�h�ܤ@�~�F
            numExchange ++; /// �I�����з� �h�@�~

        }
        return ans;
    }
};
